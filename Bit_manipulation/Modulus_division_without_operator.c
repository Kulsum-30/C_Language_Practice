//modulus division with power of 2 without modulus operator 
#include<stdio.h>
int modulus_division(int num_1,int num_2){
    int result;
    if((num_2 & (num_2-1)) ==0){
        result=num_1 &(num_2 -1);
    }
    return result;
}
int main(int argc, char const *argv[])
{
     int num_1,num_2;
    printf("Enter the number_1 : ");
    scanf(" %d",&num_1);
    printf("Enter the number_2 : ");
    scanf(" %d",&num_2);
    int result = modulus_division(num_1,num_2);
    printf("%d",result);
    return 0;
}

