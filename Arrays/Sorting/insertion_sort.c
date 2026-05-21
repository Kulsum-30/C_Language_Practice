#include<stdio.h>
void insertion_sort(int size,int arr[]){
    for(int i=1;i<size;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
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
    insertion_sort(size,arr);
    printf("Sorted array");
    for(int j=0;j<size;j++){
        printf(" %d",arr[j]);
    }
    return 0;
}
