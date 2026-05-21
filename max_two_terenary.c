#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int a,b;
    scanf("%d %d",&a,&b);
    int max=(a>b)?a:b;
    printf("max:%d",max);
    return 0;
}
