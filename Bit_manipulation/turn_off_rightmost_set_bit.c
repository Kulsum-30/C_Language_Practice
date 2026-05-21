// Turn off right most set bit or clear the LSB which is set
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("enter the number : ");
    scanf(" %d",&num);
    num=num & (num-1);
    printf("Number after turning off right most set bit : %d",num);
    return 0;
}
