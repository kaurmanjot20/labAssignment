#include<stdio.h>
int main(){
    int temp;
    int arr[] = {121,22,3773,4,505,665,77,800,99,111};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]<arr[j]){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        printf(" %d ",arr[i]);
    }
    return 0;
}