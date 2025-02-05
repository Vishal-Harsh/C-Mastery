//Seperated structure
/*#include<stdio.h>
struct date{
    int day;
    int month;
    int year;
};

struct student { 
    char name[50];
    int roll;
    struct date dob;
};

int main(){
    struct student student;
    printf("Enter student's name:");
    scanf(" %s",student.name);
    printf("Enter roll number:");
scanf("%d",&student.roll);
printf("Enter dob:(dd mm yyyy)");
scanf("%d %d %d",&student.dob.day,&student.dob.month,&student.dob.year);

printf("Student details:\n");
printf("Name is:%s\n",student.name);
printf("Roll is:%d\n",student.roll);
printf("DOB is:%02d/%02d/%04d\n",student.dob.day,student.dob.month,student.dob.year);
return 0;
}*/


//Embedded structure
/*#include<stdio.h>
struct employee { 
    char name[50];
    int id;
    struct doj{
        int day;
        int month;
        int year;
    }doj;
};

int main() {
    struct employee employee;
printf("Enter employee's name: ");
    scanf("%s", employee.name);
    printf("Enter id: ");
    scanf("%d", &employee.id);
    printf("Enter date of birth (dd mm yyyy): ");
    scanf("%d %d %d", &employee.doj.day, &employee.doj.month, &employee.doj.year);

    printf("Employee details:\n");
    printf("Name: %s\n", employee.name);
    printf("Roll: %d\n", employee.id);
    printf("DOJ: %02d/%02d/%04d\n", employee.doj.day, employee.doj.month, employee.doj.year);

    return 0;
}*/

