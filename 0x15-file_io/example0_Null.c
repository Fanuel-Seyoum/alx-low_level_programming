#include <stdio.h>

int main() {
    char str[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char str2[] = {'h', 'e', 'l', 'l', 'o',}; // here a null character is not added at the end
    printf("%s\n", str);
    printf("%s\n", str2); // so some garbage value will be printed as part of the string
    return 0;
}