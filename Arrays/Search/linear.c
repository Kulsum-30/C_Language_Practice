#include<stdio.h>
int linear_search(int size,int arr[],int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int size;
    printf("enter the size of an array:");
    scanf(" %d",&size);
    int arr[100];
    printf("enter the elements of an array");
    for(int i=0;i<size;i++){
        scanf(" %d",&arr[i]);
    }
    int key;
    printf("enter the key :");
    scanf(" %d",&key);
    int result=linear_search(size,arr,key);
    if(result != -1){
        printf("Element found at index : %d\n", result);
    }
    else{
        printf("Element not found\n");
    }
    return 0;
}
