//with and without get bit 
#include <stdio.h>
void decimal_to_binary_with_getbit(int num,int a[]){
    for(int i=0;i<4;i++){
        if(num & (1<<i)){
            a[i]=1;
        }
        else {
            a[i]=0;
        }
    }
    for(int i=3;i>=0;i--){
        printf("%d",a[i]);
    }
}

void decimal_to_binary_without_getbit(int num, int a[]){
    for(int i=0;i<4;i++){
        int rem=num%2;
        a[i]=rem;
        num=num/2;
    }
    for(int i=3;i>=0;i--){
        printf("%d",a[i]);
    }
}

int main() {

    int num;

    printf("Enter the number : ");
    scanf("%d", &num);

    int a1[4], a2[4];

    printf("Binary with getbit : ");
    decimal_to_binary_with_getbit(num, a1);

    printf("\nBinary without getbit : ");
    decimal_to_binary_without_getbit(num, a2);

    return 0;
}