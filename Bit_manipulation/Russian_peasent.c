// multiplication of two numbers 
#include<stdio.h>
int multiplication(int num_1,int num_2){
    int res=0;    //intialization of res is must or else we get garbage values
    while(num_2 !=0){
        if(num_2 & 1) {
            res=res+num_1;
        }
        num_1 <<= 1;
        num_2 >>= 1;

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
    int result = multiplication(num_1,num_2);
    printf("%d",result);
    return 0;
}
