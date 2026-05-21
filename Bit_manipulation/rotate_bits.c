//Rotate bits left and right 
#include <stdio.h>

int right_rotate(int num , int d){
    d=d%32;
    return ((num >> d) | (num << (32-d)));
}

int left_rotate(int num , int d){
    d=d%32;
    return ((num << d) | (num >> (32-d)));
}

int main(int argc, char const *argv[])
{
     int num, d;

    printf("Enter the number : ");
    scanf("%d", &num);

    printf("Enter rotation count : ");
    scanf("%d", &d);

    printf("Right Rotate : %d\n", right_rotate(num, d));

    printf("Left Rotate : %d\n", left_rotate(num, d));
    return 0;
}
