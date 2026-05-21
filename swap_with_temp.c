#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b); // if there is space then the scanner understand still you have to enter something 
    
    int c; 
    c=b;
    b=a;
    a=c;
    printf("a=%d \nb=%d",a,b);
}

