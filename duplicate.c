#include<stdio.h>
int main(){
    int nums[7]={2,2,3,3,4,6,6};
    //int temp[7];
    // int j=-0;
    // for(int i=1 ; i<7 ; i++){
    //     temp[0]=arr[0];
    //      if(temp[j]!=arr[i]){
    //         j++;
    //         temp[j]=arr[i];
    //      }
         
    // } 
    // for(int i=0 ; i<=k+1 ; i++){
    //      printf("%d",temp[i]);
    // }

 
       int k=0;
       for(int i=1 ; i<7 ; i++){
        if(nums[k]!=nums[i]){
            k++;
            nums[k]=nums[i];
        }
       }
    
    
    

    for(int i=0 ; i<=k ; i++){
        printf("%d",nums[i]);
    }
}
