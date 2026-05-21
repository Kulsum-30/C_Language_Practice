#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool palindrome(int num){
    int rev=0,temp=num;
    while(temp!=0){
        rev=(rev << 1)|(temp&1);
        temp >>=1;
    }
    return rev==num;
}
bool palindrome_without_temp(int num){
    int bits=log2(num);
    int left=0;
    int right=bits;
    while (left<right)
    {
        if(((num>>left)&1) != ((num>>right)&1)){
        return false;
    }
    left++;
    right--;
}
    return true;
}
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number : ");
    scanf(" %d",&num);
    if(palindrome(num)){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}
