#include <stdio.h>
#include <string.h>

struct student {
    int rollno;
    char name[10];
    float marks;
};
int main() {
    int i, j;
    struct student st[5];
    float temp_marks;
    printf("Enter Records of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nEnter Rollno: ");
        scanf("%d", &st[i].rollno);
        
        printf("Enter Name: ");
        scanf("%s", st[i].name);
        
        printf("Enter Marks: ");
        scanf("%f", &st[i].marks);
    }
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (st[i].marks < st[j].marks) {
                temp_marks = st[i].marks;
                st[i].marks = st[j].marks;
                st[j].marks = temp_marks;
            }
        }
    }
    printf("\nStudent Information List (sorted by marks in descending order):\n");
    
    for (i = 0; i < 5; i++) {
        printf("Rollno: %d, Name: %s, Marks: %f\n", st[i].rollno, st[i].name, st[i].marks);
    }
    
    return 0;
}
