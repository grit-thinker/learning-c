#include <stdio.h>
int main() {
    int num[] = {1,10,5,9};

    int size = sizeof(num)/sizeof(num[0]);

    int smallest = num[0];
    int largest = num[0];

    for (int i = 0; i < size; i++) {
        if (num[i] < smallest) {
            smallest = num[i];
        }
        if (num[i] > largest) {
            largest = num[i];
        }
    }
    printf("Smallest number is: %d\n", smallest);
    printf("Largest number is: %d", largest);
    return 0;
}