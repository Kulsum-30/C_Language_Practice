# include<stdio.h>
int set_bits(int num){
    if(num ==0 ){
        return 0;
    }
    int msb=0;
    num=num/2;
    while(num !=0){
        num=num/2;
        msb++;
    }
    return (1<< msb);
}
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number : ");
    scanf(" %d",&num);
    int result = set_bits(num);
    printf("%d",result);
}
