#include <stdio.h>
int main() {
    int sum=0;
    int num[] = {0,1,2,3,4,5,6,7,8,9,10};

    int size = sizeof(num)/sizeof(num[0]);

    for (int i=1; i<size;i=i+2) {
        sum = sum + num[i];
    }

    printf("Sum = %d", sum);

    return 0;
}