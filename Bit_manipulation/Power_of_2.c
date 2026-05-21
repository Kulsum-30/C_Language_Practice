//check the power of 2
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
     printf("Enter the number : ");
    scanf(" %d",&num);
    if((num & (num-1) ) == 0){
        printf("Given number %d is power of 2",num);
    }
    else{
        printf("Given number %d is not power of 2",num);
    }
    return 0;
}
