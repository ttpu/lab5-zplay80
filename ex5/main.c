#include <stdio.h>

int main() {
    char lowercase, uppercase;
    int ascii_lower, ascii_upper;

    printf("Lowercase\tASCII\tUppercase\tASCII\n");
    
    for (int i = 0; i < 26; i++) {
        lowercase = 'a' + i;  
        ascii_lower = lowercase;  
        uppercase = 'A' + i;  
        ascii_upper = uppercase;  

        printf("%c\t\t%d\t%c\t\t%d\n", lowercase, ascii_lower, uppercase, ascii_upper);
    }

    return 0;
}
