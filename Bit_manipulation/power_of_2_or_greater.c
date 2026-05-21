//if the number is power of 2 than print the number itself or else print the greater number of power of 2
#include<stdio.h>
#include<math.h>
int power_of_2_greater(int num){
    int bits=log2(num); 
    if(pow(2,bits)== num) return num;
    return pow(2,bits+1);
}
int power_of_2_printgreater(int num){ //set msb bit
    int count=0;
    if(num && !(num &(num -1))){
        return num;
    }
    while(num !=0){
        num>>=1;
        count++;
    }
    return 1<< count;
}

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number : ");
    scanf(" %d",&num);
    int result = power_of_2_greater(num);
    printf(" %d \n", result);
    int result_1 = power_of_2_printgreater(num);
    printf(" %d", result_1);
    return 0;
}
