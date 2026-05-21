#include <stdio.h>
#include<stdbool.h>
bool parity(int num){
    int parity=0;
    while(num){
        parity=!parity;
        num= num & (num -1);
    }
    return parity;
}
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number : ");
    scanf(" %d",&num);
    if(parity(num)){
        printf("odd parity number");
    }
    else{
        printf("even parity");
    }
    return 0;
}

// Parity tells whether the number of `1`s in the binary representation is:

// * Even → Even parity
// * Odd → Odd parity

// For example: `4`

// Binary of `4`:

// ```text id="r4m8tz"
// 4 = 100
// ```

// Count the number of `1`s:

// ```text id="f7q2vx"
// 100 → only one 1
// ```

// Number of set bits = `1`

// Since `1` is odd:

// [
// \boxed{\text{Odd Parity}}
// ]

// Examples:

// | Number | Binary | Count of 1s | Parity |
// | ------ | ------ | ----------- | ------ |
// | 4      | 100    | 1           | Odd    |
// | 5      | 101    | 2           | Even   |
// | 7      | 111    | 3           | Odd    |
// | 10     | 1010   | 2           | Even   |
