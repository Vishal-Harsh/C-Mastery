#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter the values:");
    scanf("%d%d",&a,&b);
    printf("\nBefore swapping:\n a=%d \n b=%d",a,b);
temp=a;
a=b;
b=temp;
printf("\nAfter swapping:\n a=%d \n b=%d",a,b);


}