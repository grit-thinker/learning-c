#include <stdio.h>
int main() {
    int num[] = {0,10,20,30,40,50,60,70,80,90,100};
    int start_index, end_index;

    int size = sizeof(num)/sizeof(num[0]);

    printf("Enter the index numbers between which the numbers should be printed: ");
    scanf("%d %d", &start_index, &end_index);

    for (int i=start_index; i<=end_index ;i++) {
        printf("%d ", num[i]);      
    }
    return 0;
}