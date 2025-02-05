/*#include<stdio.h>
#include<string.h>
struct student{
    char name[10];
    int roll;
    float cgpa;
char sec;
}s1,s2;

int main(){
    struct student s1,s2;
    strcpy(s1.name,"Harsh");
    s1.roll=101;
    s1.sec="A";
    s1.cgpa=9;
strcpy(s2.name,"Vishal");
s1.roll=102;
s2.cgpa=8;
s2.sec="B";
printf("Student information is:\n ");
printf("Name is  %s\n roll is %d\n cgpa is %.1f\n sec is %c\n",s1.name,s1.roll,s1.cgpa,s1.sec);
printf("Name is  %s\n roll is %d\n cgpa is %.1f\n sec is %c\n",s2.name,s2.roll,s2.cgpa,s2.sec);
}*/


/*#include<stdio.h>
#include<string.h>
struct student {char name[10];
int roll;
float cgpa;
char sec;
};
int main(){
struct student s1,s2;
printf("Data of first student ");
scanf("%s %d %f ",&s1.name,&s1.roll,&s1.cgpa);
scanf("%c",&s1.sec);
printf("Data of second student ");
scanf("%s %d %f ",&s2.name,&s2.roll,&s2.cgpa);
scanf("%c",&s2.sec);
printf("Student information is:\n");
printf("Name is %s\n roll is %d\n cgpa is %.1f\n sec is %c\n",s1.name,s1.roll,s1.cgpa,s1.sec);
printf("Name is %s\n roll is %d\n cgpa is %.1f\n sec is %c\n",s2.name,s2.roll,s2.cgpa,s2.sec);

}*/

/*#include<stdio.h>
#include<string.h>
struct book {
    char book_name[10];
    int no_of_pages;
    float cost;
};
int main(){
 struct book x;
 printf("Enter book information:");
 scanf("%s %d %f",&x.book_name,&x.no_of_pages,&x.cost);
printf("Book information is:");
printf("Book name is: %s\n No of pages:%d\n Cost is: %.1f",x.book_name,x.no_of_pages,x.cost);


}*/

/*#include<stdio.h>
#include<string.h>
struct employee {
    char employee_name[10];
    int emp_id;
    char department;
    float salary;
};
int main(){
 struct employee x;
 printf("Enter employee details:");
 scanf("%s %d  %c %f",&x.employee_name,&x.emp_id,&x.department,&x.salary);
printf("Employee details are:\n");
printf("Employee name is: %s\n Employee id:%d\n Department is:%c\n Salary is: %.1f",x.employee_name,x.emp_id,x.department,x.salary);
}*/