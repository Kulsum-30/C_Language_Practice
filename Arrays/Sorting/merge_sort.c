#include<stdio.h>
void merge(int arr[],int left,int mid,int right){
    int i,j,k;
    int n1=(mid+1)-left;
    int n2=right - mid ;
    //int left_array[n1],right_array[n2]; // the old c doesn't support
    int left_array[100],right_array[100];
    for(int i=0;i<n1;i++){
        left_array[i]=arr[left+i];
    } 
    for(int j=0;j<n2;j++){
        right_array[j]=arr[mid+1+j];
    }
    i=0;j=0;k=left;
    while (i< n1 && j< n2)
    {
        if(left_array[i] <= right_array[j]){
            arr[k]=left_array[i];
            i++;
        }
        else{
            arr[k]=right_array[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        arr[k]=left_array[i];
        i++;
        k++;
    }
    while(j < n2){
        arr[k]=right_array[j];
        j++;
        k++;
    }
    
}
void merge_sort(int arr[],int left,int right){
    if(left < right){
        int mid = left +(right - left)/2;
        merge_sort(arr,left,mid);
        merge_sort(arr,mid+1,right);
        merge(arr,left,mid,right);
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
    merge_sort(arr,0,size-1);
    printf("Sorted array");
    for(int j=0;j<size;j++){
        printf(" %d",arr[j]);
    }
    return 0;
}
