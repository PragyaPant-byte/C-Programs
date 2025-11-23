#include<stdio.h>
void ans(int n){
    if(n==0) return;
    ans(n-1);
    printf("%d",n);
}
int main(){
    ans(5);
    return 0;
}