#include <stdio.h>
int main()
{
    /* code */
    int a,b;
   scanf("%d %d",&a,&b);
   printf("before swap \na=%d\nb=%d \n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap \na=%d\nb=%d",a,b);
    return 0;
}


// for XOR swap without temp will be 
// a=a^b;
// b=a^b;
// a=a^b;