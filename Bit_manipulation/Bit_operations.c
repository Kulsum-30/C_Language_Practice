// getbit ,setbit , togglebit, clearbit

#include <stdio.h>

int get_bit_position(int num, int position) {
    return num & (1 << position);
}

int set_bit_position(int num, int position) {
    return num | (1 << position);
}

int toggle_bit_position(int num, int position) {
    return num ^ (1 << position);
}

int clear_bit_position(int num, int position) {
    return num & (~(1 << position));
}

int main() {

    int option, num, position, result;
    char choice = 'y';

    while(choice == 'y' || choice == 'Y') {

        printf("\n1. Get Bit\n");
        printf("2. Set Bit\n");
        printf("3. Toggle Bit\n");
        printf("4. Clear Bit\n");

        printf("Enter the option: ");
        scanf("%d", &option);

        printf("Enter the number: ");
        scanf("%d", &num);

        printf("Enter the bit position: ");
        scanf("%d", &position);

        switch(option) {

            case 1:
                result = get_bit_position(num, position);

                if(result)
                    printf("Bit is SET\n");
                else
                    printf("Bit is CLEAR\n");

                break;

            case 2:
                result = set_bit_position(num, position);
                printf("After setting bit: %d\n", result);
                break;

            case 3:
                result = toggle_bit_position(num, position);
                printf("After toggling bit: %d\n", result);
                break;

            case 4:
                result = clear_bit_position(num, position);
                printf("After clearing bit: %d\n", result);
                break;

            default:
                printf("Invalid option\n");
        }

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &choice);
    }

    printf("Program ended.\n");

    return 0;
}