#include<stdio.h>
int main(void){
struct student{
    int rollno[20];
    char name[20];
    float marks[20];
};
struct str select;
select.name[]={ {.name = "Litesh"},{.name = "nikki"}};
select.rollno[]= { {.rollno = 12}, {.rollno = 13}};
select.marks[]= {{ .marks = 85.5}, {.marks = 87.8}};
printf("%s", select.name);
printf("%d", select.rollno);
printf("%f", select.marks);
}
