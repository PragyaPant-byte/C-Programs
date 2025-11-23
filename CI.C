#include<stdio.h>
#include<math.h>
int main(){
    float p;
    float r;
    float t;
    printf("enter principal; ");
    scanf("%f",&p);
    printf("enter rate; ");
    scanf("%f",&r);
    printf("enter time; ");
    scanf("%f",&t);
    float  ci=p*pow(1+r/100,t)-p;
    printf("the compund intrest is:%f",ci);
    return 0;
}