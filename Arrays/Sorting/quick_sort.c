#include<stdio.h>
int swap (int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int partition(int arr[],int low ,int high){
    int p=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=p && i<high-1){
            i++ ;
        }
        while(arr[j]>p && j>=low+1){
            j-- ;
        }
        if(i<j){
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[low],&arr[j]);
    return j;
}
void quick_sort(int arr[],int low ,int high){
    if(low<high){
        int pivot=partition(arr,low,high);
        quick_sort(arr,low,pivot-1);
        quick_sort(arr,pivot+1,high);
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
    quick_sort(arr,0,size-1);
    printf("Sorted array");
    for(int j=0;j<size;j++){
        printf(" %d",arr[j]);
    }
    return 0;
}
