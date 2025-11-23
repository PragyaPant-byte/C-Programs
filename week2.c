#include<stdio.h>
int main(){
    float d;
    float h;
    printf("enter distance in km; ");
    scanf("%f",&d);
    printf("enter time in hours; ");
    scanf("%f",&h);
    float x=d*1000;
    float t=h*3600;
    float speed=x/t;
    printf("the speed is:%f",speed);
    return 0;
}
