A C++ Morse code library for handling and converting morse code data into ascii text.
Library uses bitwise operators & a morse code lookup table to run efficiently on micro controllers.

Contains a Morse objects which methods include:

    dot() -- enters a dot into the data and increments length
    dash() -- enters a dash into the data and increments length

    convert() -- converts stored morse data into uppercase ascii code
    clear() -- clears stored morse data; must be called before entering new morse character

    code() -- returns the bit pattern for the code; 0's are dots & 1's are dashes;
                LSB is the most recently inputed bit
    length() -- returns the length of the code



POSSIBLE IMPLEMENTATION

Bluetooth morse code telegraph

Physical buttons to select recipient (3 people)
Lights to show sender (3 people)
Type in morse code message and send it through text
Receive text message and play it though audio (speaker / headphone jack)

Configure message partners in application to buttons (1 / 2 / 3)

button for (send / cancel) & (repeat message / stop)

LED display to display message written / message received (buffers)

Connect to twitter to send tweets? (one way communication)

bluetooth telegraphs (end to end?)
