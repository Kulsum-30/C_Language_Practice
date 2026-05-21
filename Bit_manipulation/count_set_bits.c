//count no.of set bits 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num,count = 0;
    printf("Enter the number : ");
    scanf(" %d",&num);
    while(num !=0){
        num=num & (num-1);
        count++;
    }
    printf("count of set bits : %d",count);
    return 0;
}
