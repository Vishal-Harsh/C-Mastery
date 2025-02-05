#include<stdio.h>
int main(){
    int x=10,y=20;
    int max=(x>y)?x:y;
    printf("Maximum is : %d\n",max);
}

//syntax for multiple numebers , largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
