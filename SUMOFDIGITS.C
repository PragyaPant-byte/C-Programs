#include<stdio.h>
int main(){
    int n;
    printf("enter the number; ");
    scanf("%d",&n);
    int sum=0;
    while(n>0){
        int ld=n%10;
        sum+=ld;
        n=n/10;
    }
    printf("the sum of digit is:%d",sum);
    return 0;
}