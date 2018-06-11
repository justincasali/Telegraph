package main

import "fmt"

type Morse byte

var morseTable = [...]rune{
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
    '4', 0, 0, 0, 0, 0, 0, 0, '3', 0, 0, 0, '2', 0, '1', '0'}

func (m *Morse) clear() {
    *m = 0
}

func (m *Morse) dot() {
    if ((*m >> 5) >= 5) {
        return
    }
    *m |= 0 << (*m >> 5)
    *m += 1 << 5
}

func (m *Morse) dash() {
    if ((*m >> 5) >= 5) {
        return
    }
    *m |= 1 << (*m >> 5)
    *m += 1 << 5
}

func (m *Morse) convert() rune {
    return morseTable[*m]
}

func (m *Morse) code() int {
    return int(*m & 0x1f)
}

func (m *Morse) length() int {
    return int(*m >> 5)
}

func (m *Morse) print() {
    fmt.Printf("%c", m.convert())
}

func main () {

    // Morse type
    var m Morse = 0

    // H
    m.clear();
    m.dot(); m.dot(); m.dot(); m.dot()
    m.print()

    // E
    m.clear()
    m.dot()
    m.print()

    // L
    m.clear()
    m.dot(); m.dash(); m.dot(); m.dot()
    m.print()

    // L
    m.clear()
    m.dot(); m.dash(); m.dot(); m.dot()
    m.print()

    // O
    m.clear()
    m.dash(); m.dash(); m.dash()
    m.print()

    // New Line
    fmt.Println()

}
