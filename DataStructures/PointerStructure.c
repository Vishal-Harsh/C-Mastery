//wap to create structure to pointer
#include<stdio.h>
#include<string.h>


struct employee{
    char name[50];
    int id;
    float salary;

};
int main(){
struct employee e1;
strcpy(e1.name,"harsh");
e1.id=4960;
e1.salary=70000;
struct employee *p;
p=&e1;

printf("Information of emplpoyee is:");
printf("Name is:%s\n Id is:%d\n Salary is:%.2f",p->name,p->id,p->salary);

return 0;
}