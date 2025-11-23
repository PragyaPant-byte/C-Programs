#include<stdio.h>
int main(){
    int arr[] = {5,2,4,1,5,2,4,1,5,2,3,6};
    int n=12;
     for(int i=0 ; i<n ; i++){
        printf("%d",arr[i]);
     }
     printf("\n");
    int count=0;
     for(int i=0 ; i<n-1 ; i++){
        for(int j=0 ; j<n-1 ; j++){ //n=1-i
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    int rd=0;
    for(int i=1; i<n ; i++){
        if(arr[rd]!=arr[i]){
            rd++;
            int temp=arr[i];
            arr[i]=arr[rd];
            arr[rd]=temp;
        }
    }
     for(int i=0 ; i<rd+1 ; i++){
        printf("%d",arr[i]);
        count++;
     }
     printf("\n");
     printf("%d",count);

}
