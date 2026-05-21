#include<stdio.h>
# include<math.h>

int find_position_LSB_set_with_math(int num){
    return log2(num & (-num))  ;
}
int find_position_LSB_set_without_math(int num){
    if(num == 0) return 0;
    int position = 0;
    while((num & 1)==0){
        num>>=1;
        position++;
    }
    return position;
}
int main(int argc, char const *argv[])
{
    int num;
    printf("enter the number : ");
    scanf(" %d",&num);
    printf("position of LSB that is set with math.h : %d \n",find_position_LSB_set_with_math(num));
    printf("position of LSB that is set without math.h : %d \n",find_position_LSB_set_without_math(num));
    return 0;
}
