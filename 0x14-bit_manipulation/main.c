#include <stdio.h>

unsigned int binary_to_uint(const char *b) {
    unsigned int result = 0;
    if (b == NULL) {
        return 0;
    }
    while (*b != '\0') {
        if (*b == '0' || *b == '1') {
            result = (result << 1) + (*b - '0');
            b++;
        } else {
            return 0;
        }
    }
    return result;
}

int main(){
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}