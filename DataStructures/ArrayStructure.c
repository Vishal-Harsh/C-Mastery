/*#include<stdio.h>

struct student {
    int roll;
    char name[7];
    char sec;
    float cgpa;
};

int main() {
    struct student s[5];
    
    printf("Enter student details:\n");
    for(int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Section: ");
        scanf(" %c", &s[i].sec);
        printf("CGPA: ");
        scanf("%f", &s[i].cgpa);
    }
    
    printf("\nStudent information is:\n");
    for(int i = 0; i < 5; i++) {
        printf("Name: %s, Roll: %d, Section: %c, CGPA: %.2f\n", s[i].name, s[i].roll, s[i].sec, s[i].cgpa);
    }
    
    return 0;
}*/

