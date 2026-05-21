#include <stdio.h>

int Swap_bits(int num, int position_1,int position_2,int n){
    int set_1 =(num >> position_1) & ((1<<n)-1);
    int set_2 =(num >> position_2) & ((1<<n)-1);
    int xor_val=set_1 ^ set_2;
    xor_val=(xor_val << position_1) | (xor_val << position_2);
    int result =(num^xor_val);
    return result;
}

int Swap_bits_shift(int num, int position_1,int position_2,int n){
    int shift_1,shift_2,val_1,val_2;
    while (n--)
    {
    
    shift_1=1<< position_1;
    shift_2=1<<position_2;
    val_1=num & shift_1;
    val_2 = num & shift_2;
    if((!val_1 && val_2)||(!val_2 && val_1)){
        if(val_1){
            num= num & (~ shift_1);
            num = num | (shift_2);
        }
        else{
            num= num & (~ shift_2);
            num = num | (shift_1);
        }
    }
    position_1 ++;
    position_2 ++;
}
return num;
}

int main(int argc, char const *argv[])
{
    int num,position_1,position_2,bits;
    printf("Enter the number : ");
    scanf(" %d",&num);
    printf("Enter the position_1 : ");
    scanf(" %d",&position_1);
    printf("Enter the position_2 : ");
    scanf(" %d",&position_2);
    printf("Enter the no.of bits : ");
    scanf(" %d",&bits);
    int result = Swap_bits(num,position_1,position_2,bits);
    int result_2=Swap_bits_shift(num,position_1,position_2,bits);
    printf("%d \n", result);
    printf("%d",result_2);
    return 0;
}
//Yes, because return and printf() do different things.

//printf() → displays output on the console
//return → sends a value back from the function to OS
