// Justin Casali
#include "Morse.h"

// data:
// An unsigned char is a morse letter
// bits 7 ~ 5 = length, bits 4 ~ 0 = data

const char morseTable[0xC0] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    'E', 'T', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    'I', 'N', 'A', 'M', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    'S', 'D', 'R', 'G', 'U', 'K', 'W', 'O', 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    'H', 'B', 'L', 'Z', 'F', 'C', 'P', 0, 'V', 'X', 0, 'Q', 0, 'Y', 'J', 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    '5', '6', 0, '7', 0, 0, 0, '8', 0, 0, 0, 0, 0, 0, 0, '9',
    '4', 0, 0, 0, 0, 0, 0, 0, '3', 0, 0, 0, '2', 0, '1', '0'
};

Morse::Morse() {
    _data = 0;
}

void Morse::clear() {
    _data = 0;
}

void Morse::dot() {
    if ((_data >> 5) >= 5) return;
    _data |= 0 << (_data >> 5);
    _data += 1 << 5;
}

void Morse::dash() {
    if ((_data >> 5) >= 5) return;
    _data |= 1 << (_data >> 5);
    _data += 1 << 5;
}

char Morse::convert() {
    return morseTable[_data];
}

int Morse::code() {
    return _data & 0x1F;
}

int Morse::length() {
    return _data >> 5;
}
