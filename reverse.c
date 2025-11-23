#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0 ; i<5/2 ; i++){
        int temp = arr[i];
        arr[i]=arr[5-1-i];
        arr[5-1-i]=temp;
        
    }
    for(int i=0 ; i<5 ; i++){
        printf("%d",arr[i]);
    }
}