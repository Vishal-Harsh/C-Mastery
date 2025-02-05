#include<stdio.h>
int main(){
    int t1=0,t2=1,t3,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(t3=t1;t3<=n;t3=t1+t2){
        printf("%d\n",t3);
        t1=t2;
        t2=t3;
    }
    
}