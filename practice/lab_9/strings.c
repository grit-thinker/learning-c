#include <stdio.h>
#include <string.h>
int main() {
    char str1[20] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Hi";

    //comparing the strings (0 means equal, any other integer value means unequal)
    printf("Are the strings equal? %d\n", strcmp(str1,str2)); 
    printf("Are the strings equal? %d\n", strcmp(str3,str1));

    //length of the string
    printf("Length of str1 is %zu\n", strlen(str1)); 
    printf("Length of str2 is %zu\n", strlen(str2));


    //concatanating strings
    strcat(str1,str3);

    printf("New str1 is: %s \n", str1);

    //copying str2 to new str1
    strcpy(str1, str2);

    printf("Newer str1 is: %s", str1);

    return 0;
}   