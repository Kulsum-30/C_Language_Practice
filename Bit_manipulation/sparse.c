#include<stdio.h>
#include<stdbool.h>
bool sparse(int num){
    if (num & (num>>1)) { return false;}
    return true;
}
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number : ");
    scanf(" %d",&num);
    if(sparse(num)){
        printf("sparse");
    }
    else{
        printf("not sparse");
    }
    return 0;
}
//A sparse number is a number whose binary representation does not contain consecutive 1s.