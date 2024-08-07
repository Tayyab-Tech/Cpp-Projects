#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int i = 0;

// Define student struct
struct student {
    char roll[20];
    char name[50];
    char clas[20];
    float tot;
    float obt;
    float per;
}s[10];

// Function to display the control panel
void control_panel() {
    printf("\n\n\n\t\t\t\tControl Panel");
    printf("\n\n 1. Insert Record");
    printf("\n 2. Display Record");
    printf("\n 3. Search Record");
    printf("\n 4. Update Record");
    printf("\n 5. Delete Record");
    printf("\n 6. Exit");
    printf("\n\n Enter Your Choice : ");
}

// Function to insert a student record
void insert(struct student s[]) {
    printf("\n\n\t\t\t\tInsert Record");
    printf("\n\n Roll No. : ");
    scanf("%s", s[i].roll);
    printf("\n\t\t\tName : ");
    scanf("%s", s[i].name);
    printf("\n Class : ");
    scanf("%s", s[i].clas);
    printf("\n\t\t\tTotal Marks : ");
    scanf("%f", &s[i].tot);
    printf("\n Obtained Marks : ");
    scanf("%f", &s[i].obt);
    s[i].per = (s[i].obt / s[i].tot) * 100;
}

// Function to display all student records
void display(struct student s[]) {
    int c = 1;
    printf("\n\n\t\t\t\tDisplay Record");
    if (i > 0) {
        for (int a = 0; a < i; a++) {
            printf("\n\n\n Student %d", c);
            printf("\n\n Roll No. : %s", s[a].roll);
            printf("\n\t\t\t Name : %s", s[a].name);
            printf("\n Class : %s", s[a].clas);
            printf("\n\t\t\t Total Marks : %.2f", s[a].tot);
            printf("\n Obtained Marks : %.2f", s[a].obt);
            printf("\n\t\t\t Percentage %% : %.2f", s[a].per);
            c++;
        }
    } else {
        printf("\n\n Data Base is Empty...");
    }
}

// Function to search for a student record by roll number
void search(struct student s[]) {
    int count = 0;
    char roll[20];
    printf("\n\n\t\t\t\tSearch Record");
    if (i > 0) {
        printf("\n\n Roll No. For Search : ");
        scanf("%s", roll);
        for (int a = 0; a < i; a++) {
            if (strcmp(roll, s[a].roll) == 0) {
                printf("\n\n Roll No. : %s", s[a].roll);
                printf("\n\t\t\t Name : %s", s[a].name);
                printf("\n Class : %s", s[a].clas);
                printf("\n\t\t\t Total Marks : %.2f", s[a].tot);
                printf("\n Obtained Marks : %.2f", s[a].obt);
                printf("\n\t\t\t Percentage %% : %.2f", s[a].per);
                count++;
            }
        }
        if (count == 0) {
            printf("\n\n Record Not Found...");
        }
    } else {
        printf("\n\n Data Base is Empty...");
    }
}

// Function to update a student record by roll number
void update(struct student s[]) {
    char roll[20];
    int count = 0;
    printf("\n\n\t\t\t\tUpdate Record");
    if (i > 0) {
        printf("\n\n Roll No. For Update : ");
        scanf("%s", roll);
        for (int a = 0; a < i; a++) {
            if (strcmp(roll, s[a].roll) == 0) {
                printf("\n\n New Roll No. : ");
                scanf("%s", s[a].roll);
                printf("\n\t\t\tName : ");
                scanf("%s", s[a].name);
                printf("\n Class : ");
                scanf("%s", s[a].clas);
                printf("\n\t\t\tTotal Marks : ");
                scanf("%f", &s[a].tot);
                printf("\n Obtained Marks : ");
                scanf("%f", &s[a].obt);
                s[a].per = (s[a].obt / s[a].tot) * 100;
                count++;
            }
        }
        if (count == 0) {
            printf("\n\n Record Not Found...");
        }
    } else {
        printf("\n\n Data Base is Empty...");
    }
}

// Function to delete a student record by roll number
void del(struct student s[]) {
    char roll[20];
    char t_roll[20], t_name[50], t_class[20];
    float t_tot, t_obt, t_per;
    int count = 0;
    printf("\n\n\t\t\t\tDelete Record");
    if (i > 0) {
        printf("\n\n Roll No. For Delete : ");
        scanf("%s", roll);
        for (int a = 0; a < i; a++) {
            if (strcmp(roll, s[a].roll) == 0) {
                for (int j = a; j < i - 1; j++) {
                    strcpy(t_roll, s[j + 1].roll);
                    strcpy(t_name, s[j + 1].name);
                    strcpy(t_class, s[j + 1].clas);
                    t_tot = s[j + 1].tot;
                    t_obt = s[j + 1].obt;
                    t_per = s[j + 1].per;
                    strcpy(s[j].roll, t_roll);
                    strcpy(s[j].name, t_name);
                    strcpy(s[j].clas, t_class);
                    s[j].tot = t_tot;
                    s[j].obt = t_obt;
                    s[j].per = t_per;
                }
                printf("\n\n Record is Deleted...");
                i--;
                count++;
            }
        }
        if (count == 0) {
            printf("\n\n Record Not Found...");
        }
    } else {
        printf("\n\n Data Base is Empty...");
    }
}

// Main function
int main() {
    int choice;
    char x;
    while (1) {
        control_panel();
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                do {
                    insert(s);
                    i++;
                    printf("\n\n Do You Want To Add Another Record (y,n) : ");
                    scanf(" %c", &x);
                } while (x == 'y');
                break;
            case 2:
                display(s);
                break;
            case 3:
                search(s);
                break;
            case 4:
                update(s);
                break;
            case 5:
                del(s);
                break;
            case 6:
                return 0;
            default:
                printf("\n\n Invalid Value...Please Try Again...");
        }
        getch();
    }
    return 0;
}

