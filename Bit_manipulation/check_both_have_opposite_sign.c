# include <stdio.h>
int main(int argc, char const *argv[])
{
    int num_1,num_2;
    printf("Enter the number_1 : ");
    scanf(" %d",&num_1);
    printf("Enter the number_2 : ");
    scanf(" %d",&num_2);
    if( (num_1 ^ num_2 )<0){
        printf("Both numbers are opposite sign");
    }
    else{
        printf("Both numbers are not opposite sign");
    }
    return 0;
}
