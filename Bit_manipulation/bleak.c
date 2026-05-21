#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int count_set_bits(int num) {

    int count = 0;

    while(num) {

        count++;

        num = num & (num - 1);
    }

    return count;
}

bool bleak(int num) {

    for(int i = 0; i < num; i++) {

        if(i + count_set_bits(i) == num) {

            return false;
        }
    }

    return true;
}

int main() {

    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    if(bleak(num)) {

        printf("Bleak number\n");
    }
    else {

        printf("Not a bleak number\n");
    }

    return 0;
}