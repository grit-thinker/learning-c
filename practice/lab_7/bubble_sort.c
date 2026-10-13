#include <stdio.h>
int main() {
    int array[100],num, temp = 0;

    printf("Number of arrays: ");
    scanf("%d", &num);

    for (int i=0; i<num; i++) {
        printf("Enter the array %d: ", i+1);
        scanf("%d", &array[i]);
    }

    for (int i=0; i<num-1; i++) {
        for (int j=0; j<num-i-1; j++) {
            if (array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    for (int k = 0; k<num; k++) {
        printf("%d", array[k]);
    }
    return 0;
}
