#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* ================= USER STRUCT ================= */
typedef struct {
    char username[50];
    char password_hash[50];
    char role[10];  // admin/user/guest
} User;

/* ================= PASSWORD HASH ================= */
void hash_password(char *password, char *hashed) {
    int i;
    for(i = 0; password[i] != '\0'; i++) {
        hashed[i] = password[i] + 3;  // simple hashing
    }
    hashed[i] = '\0';
}

/* ================= OTP GENERATION ================= */
int generate_otp() {
    srand(time(0));
    return rand() % 9000 + 1000;
}

/* ================= ACCESS CONTROL ================= */
int check_access(char role[], char action[]) {

    if(strcmp(role, "admin") == 0)
        return 1;

    if(strcmp(role, "user") == 0) {
        if(strcmp(action, "read") == 0 ||
           strcmp(action, "write") == 0 ||
           strcmp(action, "share") == 0)
            return 1;
    }

    if(strcmp(role, "guest") == 0) {
        if(strcmp(action, "read") == 0)
            return 1;
    }

    return 0;
}

/* ================= ENCRYPTION ================= */
void encrypt_decrypt(char *data, char key) {
    for(int i = 0; data[i] != '\0'; i++) {
        data[i] ^= key;  // XOR encryption
    }
}

/* ================= MALWARE DETECTION ================= */
int is_malicious(char filename[]) {
    if(strstr(filename, ".exe") || strstr(filename, ".sh")) {
        return 1;
    }
    return 0;
}

/* ================= FILE WRITE ================= */
void write_file(User user) {

    if(!check_access(user.role, "write")) {
        printf("❌ Access Denied!\n");
        return;
    }

    char data[100];

    printf("Enter data: ");
    fgets(data, sizeof(data), stdin);  // safe input

    encrypt_decrypt(data, 'K');

    FILE *fp = fopen("file.txt", "w");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    fprintf(fp, "%s", data);
    fclose(fp);

    printf("✅ File written securely!\n");
}

/* ================= FILE READ ================= */
void read_file(User user) {

    if(!check_access(user.role, "read")) {
        printf("❌ Access Denied!\n");
        return;
    }

    char data[100];

    FILE *fp = fopen("file.txt", "r");
    if(fp == NULL) {
        printf("File not found!\n");
        return;
    }

    fgets(data, sizeof(data), fp);
    fclose(fp);

    encrypt_decrypt(data, 'K');

    printf("📂 File Content: %s\n", data);
}

/* ================= FILE SHARE ================= */
void share_file(User user) {

    if(!check_access(user.role, "share")) {
        printf("❌ Access Denied!\n");
        return;
    }

    int token = rand() % 100000;
    printf("🔗 Share Token: %d\n", token);
}

/* ================= LOGIN SYSTEM ================= */
int login(User user) {

    char input_pass[50], hashed[50];

    printf("Enter password: ");
    scanf("%s", input_pass);

    hash_password(input_pass, hashed);

    if(strcmp(hashed, user.password_hash) != 0) {
        printf("❌ Wrong Password!\n");
        return 0;
    }

    int otp = generate_otp();
    printf("📲 OTP: %d\n", otp);

    int user_otp;
    printf("Enter OTP: ");
    scanf("%d", &user_otp);

    if(user_otp != otp) {
        printf("❌ Invalid OTP!\n");
        return 0;
    }

    return 1;
}

/* ================= MAIN FUNCTION ================= */
int main() {

    User user = {"ravi", "", "admin"};

    // Set password (1234)
    hash_password("1234", user.password_hash);

    printf("===== Secure File Management System =====\n");

    if(!login(user)) {
        printf("🚫 Login Failed!\n");
        return 0;
    }

    printf("✅ Login Successful!\n");

    int choice;

    while(1) {
        printf("\n--- MENU ---\n");
        printf("1. Read File\n");
        printf("2. Write File\n");
        printf("3. Share File\n");
        printf("4. Exit\n");
        printf("Enter choice: ");

        scanf("%d", &choice);
        getchar();  // clear buffer

        switch(choice) {
            case 1:
                read_file(user);
                break;

            case 2:
                write_file(user);
                break;

            case 3:
                share_file(user);
                break;

            case 4:
                printf("👋 Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}