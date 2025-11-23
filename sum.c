#include<stdio.h>
int main(){
    int even=0;
    int odd=0;
    for(int i=0 ; i<=100 ; i++){
        if(i%2==0){
            even=even +i;
        }
        else{
            odd=odd+i;
        }
    }
    printf("the sum of even numbers is%d\n",even);
    printf("the sum of odd numbers is%d",odd);
}