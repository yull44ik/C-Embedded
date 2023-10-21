#include <stdio.h>
#include <string.h>
#define INPUTBUFF 80

int main () {
    char input[INPUTBUFF] = {"\0"};
    char output[INPUTBUFF / 2 + 1] = {"\0"};
    printf("Input your string (80 chars max)\n");
    fgets(input, sizeof(input), stdin);

    // Method 1
    for (int i = 0; i <= INPUTBUFF ; i += 2)
        printf("%c", input[i]);

    printf("\n");

    // Method 2
    for (int i = 0; i <= INPUTBUFF; i++)
        if (i % 2 == 0)
            output[i / 2] = input[i];

    printf("%s", output);


    return 0;
}
