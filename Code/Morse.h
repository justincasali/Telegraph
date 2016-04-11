// Justin Casali
#ifndef Morse_h
#define Morse_h

class Morse {
    public:
        Morse();
        void clear();
        void dot();
        void dash();
        char convert();
        int code();
        int length();
    private:
        unsigned char _data;
};

#endif
