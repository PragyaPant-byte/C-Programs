#include<stdio.h>
int main(){
    char ch;
    printf("enter operator; ");
    scanf("%c",&ch);
    int a,b,r;
    printf("enter a and b; ");
    scanf("%d%d",&a,&b);
    switch(ch){
        case'+':
        r=a+b;
        printf("%d",r);
        break;
        case'-':
        r=a-b;
        printf("%d",r);
        break;
        case'*':
        r=a*b;
        printf("%d",r);
        break;
        case'/':
        if(b!=0){
            r=a/b;
            printf("%d",r);
        }
        else{
            printf("not possible");
        }
        break;
        default:
        printf("invalid operator");

        }
    }
