#include <stdio.h>
#include <string.h>
struct student {
    int rollno;
    char name[10];
    float marks;
    char search[10];
};
int main() {
    int i, j;
    int n;
    struct student st[5];
    float temp_marks;
    printf("Enter number of Students: ");
    scanf("%d", &n);
    printf("Enter Records of students:\n");
    for (i = 0; i < n; i++) {
        printf("\nEnter Rollno: ");
        scanf("%d", &st[i].rollno);
        
        printf("Enter Name: ");
        scanf("%s", st[i].name);
        
        printf("Enter Marks: ");
        scanf("%f", &st[i].marks);
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (st[i].marks < st[j].marks) {
                temp_marks = st[i].marks;
                st[i].marks = st[j].marks;
                st[j].marks = temp_marks;
            }
        }
    }
    printf("Enter the name to search: ");
    scanf("%s", st[0].search);
    
    for (i = 0; i < n; i++) {
        if (strcmp(st[i].name, st[0].search) == 0) {
            printf("Student Details: %s, %d\n", st[i].name, st[i].rollno);
            break;
        }
    }
    if (i == n) {
        printf("Student not found\n");
    }
    printf("\nStudent Information List (sorted by marks in descending order):\n");
    
    for (i = 0; i < n; i++) {
        printf("Rollno: %d, Name: %s, Marks: %f\n", st[i].rollno, st[i].name, st[i].marks);
    }
    return 0;
}
