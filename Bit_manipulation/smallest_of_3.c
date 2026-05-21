//smallest of 3 numbers

// subtraction method

#include<stdio.h>
int subtraction(int num_1,int num_2,int num_3){
    int count =0;
    while(num_1 >0 && num_2 > 0 && num_3 >0){
        num_1 --;
        num_2 --;
        num_3 --;
        count++;
    }
    return count;
}
int modulus(int num_1,int num_2 ,int num_3){
    if(! (num_2/num_1)){
        if(!(num_2/num_3)){
            return num_2;
        }
        return num_3;
    }
    if(!(num_1/num_3)){
        return num_1;
    }
    return num_3;
}
int smallest_2(int x,int y){
    return y+((x-y)&((x - y) >> 31));
}
int smallest_3(int num_1,int num_2 , int num_3){
    return smallest_2(num_1,smallest_2(num_2,num_3));
}
int main(int argc, char const *argv[])
{
    /* code */
    int num_1,num_2,num_3;
    printf("Enter the number_1 : ");
    scanf(" %d",&num_1);
    printf("Enter the number_2 : ");
    scanf(" %d",&num_2);
    printf("Enter the number_3 : ");
    scanf(" %d",&num_3);
    int result = subtraction(num_1,num_2,num_3);
    printf(" smallest of %d , %d ,%d : %d \n",num_1,num_2,num_3,result);
    int result_1 = modulus(num_1,num_2,num_3);
    printf(" smallest of %d , %d ,%d : %d \n",num_1,num_2,num_3,result_1); 
    int result_2 = smallest_3(num_1,num_2,num_3);
    printf(" smallest of %d , %d ,%d : %d \n",num_1,num_2,num_3,result_2); 
    return 0;
}
