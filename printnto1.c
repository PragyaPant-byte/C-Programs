#include<stdio.h>
void ans(int x){
    if(x==0) return;
    printf("%d\n",x);
    ans(x-1);
}
int main(){
    int n;
    scanf("%d",&n);
    ans(n);
}