#include<stdio.h>
int main(){
    int arr[7]={2,2,3,3,4,6,6};
    int n=7;
    for(int i=0 ; i<n ; i++){
        if(arr[i]==-1){
            continue;
        }
        int count=1;
        for(int j=i+1 ; j<n ; j++){
            if(arr[j]==arr[i]){
                count++;
                arr[j]=-1;
            }
        }
        printf("the frequency of %d is %d\n",arr[i],count);
    }
   
}