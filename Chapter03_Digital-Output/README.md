# Chapter 3: Digital Output

This chapter is focused on using digital output pins to make a persistance of vision (POV) toy.

To not trigger an epileptic seizure, I decided not to post the video of my attempt to record the invader code found in the `povToy` code. But if you'd like to see it, I've saved it [under the GIFS folder](../GIFS/invaders.gif)

## Building The Code

Before this point, I never really used Makefiles before so I didn't really know how to use them or what they were used for.

They can be thought of as a shortcut to compiling your code into something your microcontroller will be able to understand. (They also put an end to mistyping commands)

Below is what I enter into my terminal to generate the machine code:

```console
make
```

That should generate some files (blinkLED.elf, blinkLED.map, blinkLED.o, etc.)

Now it's time to flash the Arduino:

```console
make flash_arduinoISP
```

Which, if everything was set up correctly, should leave you with your built in LED, blinking at a frequency of 1 Hz.

If you want to get rid of all of the extra file, there's a handy section for that too!

```console
make squeeky_clean
```

### Changes From the Original Code

#### Changed Which Port Was Used

The book utilizes `PORTB` as the main registers to connect the LEDs to, but the Arduino Uno R3 SMD doesn't have all 8 pins associated with `PORTB` available. Forunatly, `PORTD` is fully wired to headers pins `D0-D7` so I used those for this chapter.
