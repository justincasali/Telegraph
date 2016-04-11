
#include <cstdio>
#include "Morse.h"

Morse * code; // pointer to Morse class object

int main() {

    code = new Morse();

    char input[0x10];
    char * position;

    while (1) {
        code->clear();
        scanf("%s", input);
        position = input;

        while (*position) {
            if (*position == '.') code->dot();
            if (*position == '-') code->dash();
            position++;
        }

        printf("%c ", code->convert());
    }

    delete code;

}
