#include <stdio.h>
int main() {
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num%2==0) {
        printf("%d Number is even",num);
    }
    else {
        printf("%d Number is odd",num);
}
    return 0;
} 