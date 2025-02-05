#include<stdio.h>
#include<string.h>
union student {
    char name[10];
    int roll;
};

int main(){
    union student e1;
    strcpy(e1.name,"Harsh");
    e1.roll=200;

    printf("\nName is:%s \nRoll is:%d",e1.name,e1.roll);
}