//Carlos Yael Hernandez Alcala
//A01412016
//A01412016@ITESM.MX

#include <stdio.h>
#include <string.h>

int main() {

    char string[100]; // String declaration
    printf("Give me a string:\n");
    fgets(string, sizeof(string), stdin); //String request

    // This loop print the array un reverse form
    for (int i = strlen(string)-1; i >= 0; i--) {
        printf("%c", string[i]); // Prints a a char
    }

    return 0;
}
