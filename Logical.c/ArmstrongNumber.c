#include<stdio.h>
int main(){
    int n,temp,rem,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
if(temp==sum){
    printf("Armstrong Number");
}
else{
    printf("Not a Armstrong Number");
}
}