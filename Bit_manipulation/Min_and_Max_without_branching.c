//without branching means without using any if else condition ,switch,terenary,loop statement i should find min and max of a number
#include <stdio.h>
int min_number(int num_1,int num_2){
    return num_2 ^((num_1^num_2)& -(num_1<num_2));
}
int max_number(int num_1,int num_2){
    return num_1 ^((num_1^num_2)& -(num_1<num_2));
}
int main(int argc, char const *argv[])
{
     int num_1,num_2;
    printf("Enter the number_1 : ");
    scanf(" %d",&num_1);
    printf("Enter the number_2 : ");
    scanf(" %d",&num_2);
    int result=max_number(num_1,num_2);
    printf("max : %d \n",result);
    int result_1=min_number(num_1,num_2);
    printf("min : %d \n",result_1);
    return 0;
}