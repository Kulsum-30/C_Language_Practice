#include <stdio.h>
void selection_sort(int size,int arr[]){
    for(int i=0;i<size;i++){
        int min_index=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
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
    selection_sort(size,arr);
    printf("Sorted array");
    for(int j=0;j<size;j++){
        printf(" %d",arr[j]);
    }
    return 0;
}
