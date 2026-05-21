#include<stdio.h>
#include <stdbool.h>
int xor_without_xor_operator(int num_1,int num_2){
    int res=0;
    for(int i= 31; i>=0 ;i--){
        bool b1 = (num_1 & (1<<i)) !=0 ? true :false;
        bool b2 = (num_1 & (1<<i)) !=0 ? true :false;
        if(b1 != b2){
            res=res|(1<<i);
        }
    }
    return res;
}
int main(int argc, char const *argv[])
{
    int num_1,num_2;
    printf("Enter the number_1 : ");
    scanf(" %d",&num_1);
    printf("Enter the number_2 : ");
    scanf(" %d",&num_2);
    printf("Xor of %d and %d : %d \n",num_1,num_2,(num_1,num_2));
    return 0;
}
