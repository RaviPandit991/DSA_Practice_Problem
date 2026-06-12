#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/stat.h>

#define PASSWORD "admin123"
#define LOG_FILE "log.txt"
#define MAX 2007

/* ================= AUTHENTICATION ================= */
void authenticate() {
    char input[50];
    int attempts = 3;

    while(attempts--) {
        printf("Enter Password: ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0;

        if(strcmp(input, PASSWORD) == 0) {
            printf("✅ Access Granted!\n");
            return;
        }
        printf("❌ Wrong Password! Attempts left: %d\n", attempts);
    }
    printf("🚫 Access Denied!\n");
    exit(1);
}

/* ================= LOGGING ================= */
void log_operation(char *operation, char *filename) {
    FILE *log = fopen(LOG_FILE, "a");
    if(log) {
        time_t now = time(NULL);
        fprintf(log, "%s - %s: %s\n", ctime(&now), operation, filename);
        fclose(log);
    }
}

/* ================= CREATE FILE ================= */
void create_file() {
    char name[50];
    printf("Enter filename: ");
    fgets(name, 50, stdin);
    name[strcspn(name, "\n")] = 0;

    FILE *fp = fopen(name, "w");
    if(fp) {
        printf("File created successfully!\n");
        fclose(fp);
        log_operation("CREATE", name);
    } else {
        printf("Error creating file!\n");
    }
}

/* ================= WRITE FILE ================= */
void write_file() {
    char name[50], data[MAX];

    printf("Enter filename: ");
    fgets(name, 50, stdin);
    name[strcspn(name, "\n")] = 0;

    printf("Enter content: ");
    fgets(data, MAX, stdin);

    FILE *fp = fopen(name, "a");
    if(fp) {
        fprintf(fp, "%s", data);
        fclose(fp);
        log_operation("WRITE", name);
        printf("Data written!\n");
    } else {
        printf("Error!\n");
    }
}

/* ================= READ FILE ================= */
void read_file() {
    char name[50], data[MAX];

    printf("Enter filename: ");
    fgets(name, 50, stdin);
    name[strcspn(name, "\n")] = 0;

    FILE *fp = fopen(name, "r");
    if(fp) {
        while(fgets(data, MAX, fp)) {
            printf("%s", data);
        }
        fclose(fp);
        log_operation("READ", name);
    } else {
        printf("File not found!\n");
    }
}

/* ================= DELETE FILE ================= */
void delete_file() {
    char name[50];
    printf("Enter filename: ");
    fgets(name, 50, stdin);
    name[strcspn(name, "\n")] = 0;

    if(remove(name) == 0) {
        printf("File deleted!\n");
        log_operation("DELETE", name);
    } else {
        printf("Error deleting file!\n");
    }
}

/* ================= RENAME FILE ================= */
void rename_file() {
    char oldname[50], newname[50];

    printf("Old filename: ");
    fgets(oldname, 50, stdin);
    oldname[strcspn(oldname, "\n")] = 0;

    printf("New filename: ");
    fgets(newname, 50, stdin);
    newname[strcspn(newname, "\n")] = 0;

    if(rename(oldname, newname) == 0) {
        printf("Renamed successfully!\n");
        log_operation("RENAME", oldname);
    } else {
        printf("Error renaming file!\n");
    }
}

/* ================= FILE SIZE ================= */
void file_size() {
    char name[50];
    printf("Enter filename: ");
    fgets(name, 50, stdin);
    name[strcspn(name, "\n")] = 0;

    FILE *fp = fopen(name, "r");
    if(fp) {
        fseek(fp, 0, SEEK_END);
        printf("Size: %ld bytes\n", ftell(fp));
        fclose(fp);
    } else {
        printf("File not found!\n");
    }
}

/* ================= LAST MODIFIED ================= */
void last_modified() {
    char name[50];
    struct stat attr;

    printf("Enter filename: ");
    fgets(name, 50, stdin);
    name[strcspn(name, "\n")] = 0;

    if(stat(name, &attr) == 0) {
        printf("Last Modified: %s", ctime(&attr.st_mtime));
    } else {
        printf("Error!\n");
    }
}

/* ================= MAIN MENU ================= */
void menu() {
    printf("\n===== Secure File System =====\n");
    printf("1. Create File\n");
    printf("2. Write File\n");
    printf("3. Read File\n");
    printf("4. Delete File\n");
    printf("5. Rename File\n");
    printf("6. File Size\n");
    printf("7. Last Modified\n");
    printf("0. Exit\n");
}

/* ================= MAIN ================= */
int main() {

    authenticate();

    int choice;

    while(1) {
        menu();
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();  // clear buffer

        switch(choice) {
            case 1: create_file(); break;
            case 2: write_file(); break;
            case 3: read_file(); break;
            case 4: delete_file(); break;
            case 5: rename_file(); break;
            case 6: file_size(); break;
            case 7: last_modified(); break;
            case 0: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
}