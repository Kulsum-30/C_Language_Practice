#include<stdio.h>

// int main(){
//     int var=0x43ff;
//     printf("Hexa : %X \n",var);  //%x =this format specifier print hexa-decimal value
//     printf("Octa: %o \n",var);
//     printf("DecimL: %d \n",var);
//     // printf("%b",var);   In C, printf does NOT support %b for binary.
// }

static int i;
static int i=8;
// i=8;   redefinition of 'i'
// int main(){
//     static int i;
//    static int i=12;
//     printf("%d",i);
//     return 0;
// }

int main(){
    // int var=052; // if we write 0 it define it is octa decimal value and if we give 0X it means intialized is hexa decimal number
   // const var=12; //error:conflicting type qualifiers as the syntax is wrong
//    var =12;
// const int var; //we get output as garbage value
   const int var=16;
//    var=12;  //error:assignment of read-only variable 'var'
    printf("%d",var); 
}