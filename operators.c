#include <stdio.h>

//Unary Operator
int main(){
    int a=6;
    int b= +a;
    int c=-a;
    printf("Unary plus : %d \n",b);
    printf("Unary minus : %d \n",c);
    printf("post increment : %d \n",a++);
    printf("%d \n",a);
    printf("pre increment : %d \n",++a);
    printf("pre decrement : %d\n", --a);
    printf("post decrement : %d\n", a--); 
    printf("%d \n",a);
    printf("logical not : %d \n",!a);
    printf("bitwise not / 1's complement : %d\n",~a ); //-(6+1)
    printf("sizeOf : %d \n",sizeof(a));
    printf("Address-of : %p \n",&a); //prints address where that value is present
    int *d =&a; 
    printf("Deference : %d",*d); //print the value present in that address

}