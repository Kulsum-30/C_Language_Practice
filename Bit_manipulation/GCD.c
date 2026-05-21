//GCD of two numbers
#include<stdio.h>
int gcd(int num_1,int num_2){
    if(num_2 ==0 ||num_1 == num_2){
        return num_1;
    }
    if(num_1==0){
        return num_2;
    }
    if((num_1 & 1)==0 && (num_2 & 1)==0){
        return gcd(num_1>>1,num_2>>1)<<1;
    }
   if((num_1 & 1)==0 && (num_2 & 1)!=0){
        return gcd(num_1>>1,num_2);
    }
    if((num_1 & 1)!=0 && (num_2 & 1)==0){
        return gcd(num_1,num_2>>1);
    }
    return (num_1>num_2)?gcd((num_1-num_2),num_2):gcd(num_1,(num_2-num_1));
}
int main(int argc, char const *argv[])
{
     int num_1,num_2;
    printf("Enter the number_1 : ");
    scanf(" %d",&num_1);
    printf("Enter the number_2 : ");
    scanf(" %d",&num_2);
    int result=gcd(num_1,num_2);
    printf("gcd : %d",result);
    return 0;
}


// find the GCD for multiple numbers, not just two.
// #include <stdio.h>

// int gcd(int num_1, int num_2) {

//     if(num_2 == 0 || num_1 == num_2) {
//         return num_1;
//     }

//     if(num_1 == 0) {
//         return num_2;
//     }

//     // both even
//     if((num_1 & 1) == 0 && (num_2 & 1) == 0) {
//         return gcd(num_1 >> 1, num_2 >> 1) << 1;
//     }

//     // num_1 even
//     if((num_1 & 1) == 0) {
//         return gcd(num_1 >> 1, num_2);
//     }

//     // num_2 even
//     if((num_2 & 1) == 0) {
//         return gcd(num_1, num_2 >> 1);
//     }

//     // both odd
//     return (num_1 > num_2)
//            ? gcd(num_1 - num_2, num_2)
//            : gcd(num_1, num_2 - num_1);
// }

// int main() {

//     int n;

//     printf("Enter how many numbers : ");
//     scanf("%d", &n);

//     int arr[n];

//     for(int i = 0; i < n; i++) {

//         printf("Enter number %d : ", i + 1);
//         scanf("%d", &arr[i]);
//     }

//     int result = arr[0];

//     for(int i = 1; i < n; i++) {
//         result = gcd(result, arr[i]);
//     }

//     printf("GCD : %d\n", result);

//     return 0;
// }