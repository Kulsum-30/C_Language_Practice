//check the bit is set or not at the user given position
# include <stdio.h>
int main(int argc, char const *argv[])
{
    int num,position,result;
    printf("enter the number");
    scanf("%d",&num);
    printf("enter the position you want to check ");
    scanf("%d",&position);
    result=num & (1<<position);
    if(result){
        printf("The number %d is set at position %d",num,position);
    }
    else{
         printf("The number %d is clear at position %d",num,position);
    }
    return 0;
}
