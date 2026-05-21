# include<stdio.h>
# include <math.h>
int main(int argc, char const *argv[])
{
    int num , position;
    printf("Enter the number : ");
    scanf(" %d",&num);
    if((num & (num-1) ) == 0)
    {
       int position=log2 (num & (-num));
       printf("Position of only set bit is at position : %d",position);
    }
    else{
        printf("Number contian more than one set bit");
    }
    return 0;
}
