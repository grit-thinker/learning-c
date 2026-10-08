#include <stdio.h>
int main(){
    int sum_e=0, sum_o=0,sum_p=0, sum_n=0,sum0=0;
    int array[]={29,90,49,9,843,78,0,0,4,83,88,6767,-1,-4,-10};

    int size = sizeof(array)/sizeof(array[0]);

    for (int i=0; i<size; i++) {
        if (array[i] % 2 == 0) {
            sum_e ++;
        }
        else {
            sum_o ++;
        }

        if (array[i] > 0) {
            sum_p++;
        }
        else if (array[i] < 0 || array[i] != 0) {
            sum_n++;
        }

        if (array[i] == 0) {
            sum0++;
        }
    }

        printf("Number of Even numbers are: %d\n", sum_e);
    
        printf("Number of Odd numbers are: %d\n", sum_o);

        printf("Number of positive numbers are: %d\n", sum_p);
        printf("Number of negative numbers are: %d\n", sum_n);
        printf("Number of 0's are: %d", sum0);

    return 0;
}