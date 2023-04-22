#include <stdio.h>
#include <ctype.h>

int main() {
    int letter;
    for (letter = 'a'; letter <= 'z'; letter++) {
        putchar(tolower(letter));
        if (letter == 'z') {
            for (letter = 'A'; letter <= 'Z'; letter++) {
                putchar(letter);
            }
            break;
        }
    }
    putchar('\n');
    return 0;
}

