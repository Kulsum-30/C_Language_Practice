// check the overflow condition 
#include <stdio.h>
int sum(int num_1,int num_2){
    int sum =num_1+num_2;
    return sum;
}
int check_overflow_condition(int num_1,int num_2){
    int result = sum(num_1,num_2);
    if((num_1>0 & num_2 > 0 & result< 0) |(num_1 < 0 & num_2 < 0 & result > 0) ){
        return -1;
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
    int result = check_overflow_condition(num_1,num_2);
    if(result== -1){
        printf("Overflow occured");
    }
    else{
        printf("%d", result);
    }
    return 0;
}
