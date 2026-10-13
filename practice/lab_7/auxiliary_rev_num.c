#include <stdio.h>
int main() {
    int array[100], aux_array[100];
    int num;
    int i;

    printf("Enter the number of arrays: ");
    scanf("%d", &num);

    for (i = 0; i<num; i++) {
        printf("Enter the array %d: ", i+1);
        scanf("%d", &array[i]);
    }

    printf("Reversed array:");

    for (int j=0; j<num;j++) {
        aux_array[j] = array[num-1-j];
        printf(" %d", aux_array[j]);
    }
    return 0;
}