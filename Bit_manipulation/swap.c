#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num_1,num_2;
    printf("Enter the number_1 : ");
    scanf(" %d",&num_1);
    printf("Enter the number_2 : ");
    scanf(" %d",&num_2);
    printf("Before swap num_1 : %d and num_2 : %d \n", num_1 , num_2);
    num_1=num_1^num_2;
    num_2=num_1^num_2;
    num_1=num_1^num_2;
    printf("After swap num_1 : %d and num_2 : %d", num_1 , num_2);
    return 0;
}
