arduino-binary-clock
====================

A simple binary clock using a couple of LEDs and an Arduino

What you¡¯ll need :

    10 LEDs + 220 ohm resistors
    Arduino Uno (Thats what i used , but any would do)
    Wires
    Breadboard



If you are using the Uno , then its tough to fit in the seconds because that will require 16 digital pins . You could manage it with the analog ones though .

If you see how binary numbers proceed , then you¡¯ll notice that the state of the left-most bit i.e. the LSB changes for every change in state of the number as a whole .The 2nd bit from the left changes after every 2 changes of state , 3rd after every 4 etc . So if a number MOD 4 = 0 , then the state of the 3rd bit toggles .

Example :: 5 is 101 in binary .

next state is 6 . Now , 6 MOD 1 = 0 , so 1st bit will toggle .

6 MOD 2 =0 , so 2nd bit will toggle .

6 MOD 4 is not equal to 0 , hence value of 3rd bit doesn¡¯t change .

so , 6 -> 110 in binary .

This is the logic that I have used.

Following is an image of the clock which I made 
http://anujdeshpande.files.wordpress.com/2011/12/photo0304.jpg

Cheers :)
