#include<stdio.h>
#include<stdbool.h>
int swap (int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void bubble_sort(int size,int arr[]){
    bool swapped;
    for(int i=0;i<size;i++){
        swapped =false;
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                swapped = true;
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    int size;

    printf("Enter size : ");
    scanf("%d", &size);

    int arr[100];

    printf("Enter array elements : \n");

    for(int i = 0; i < size; i++) {

        scanf("%d", &arr[i]);
    }
    bubble_sort(size,arr);
    printf("Sorted array");
    for(int j=0;j<size;j++){
        printf(" %d",arr[j]);
    }
    return 0;
}
