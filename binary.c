#include <stdio.h>

int countOnes(int num) {
    int count = 0;
    while (num) {
        count += num & 1; 
        num >>= 1;         
    }
    return count;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = countOnes(num);

    printf("The number of 1's in the binary representation of %d is: %d\n", num, result);

    return 0;
}