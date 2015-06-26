arduino-pov-display
===================

This repo is started as a way to house my first real Arduino project, the Arduino Persistence of Vision (POV) display. 

A typical persistence of vision display works by using a similar technique but spins and uses much more complicated code. It often also requires soldering, custom woodworking, motors, and accelerometers. Example <a href="http://www.youtube.com/watch?v=uVL9V1wNoVg"> here </a>. I decided that I wanted to stick with a much more simple approach for my first Arduino project. 

Because of this, the project is perfect not only for enthusiasts, but for beginners in place of just flashing LEDs, photographers, and people wanting a cool, but easy first project. In fact, this is probably the cheapest way to (digitally) write letters while light painting. 

This is how it works:

Let's say you have a 3x3 pixel grid. You can easily make simple letters like the "T" in this example.

<img src="http://i.imgur.com/m60WFg3.png?1" width=210px, height=179px/>

But, what if you only have one collumn?

<img src="http://i.imgur.com/ZjXzWl4.png?1" width=263px, height=163px/>

I call each on of these different collumns a "state". In this example, you could separate the T into three separate states. By using this approach, you separate a letter into these different states and when moving quickly and getting the LEDs to blink in a certain pattern, you form letters by combining each of these LED states to form letters. Because you are continuously moving sideways, you can have an an unlimited amount of letters with the only thing limiting you being your camera!

I have already done this before with my camp where I learnt Arduino at called <a href="http://www.planetbravo.com/"> Planetbravo </a> and so I spelled out Planetbravo below.

<img src="http://i.imgur.com/U0tp6nZ.jpg?1" width=400, height=300/>

If you look closely at the above picture, you can see the individual LEDs.

So by moving this pattern slowly to the side, you form letters, and with a long exposure photograph, you can do almost anything.

I'm currently writing code in the Arduino IDE. It uses 10 pins, each customizable so that you can pick any pins that you like. I'm trying to upload a schematic but 123D Circuits is tricky. 

The whole code is written in the Arduino IDE. It uses the digitalWrite() command to turn LEDs on and off. I determine the states and which lights need to be on from a Google Document that I made that has all of the lettes in pixelated versions. That Google Doc with all the letters can be found <a href="https://docs.google.com/spreadsheets/d/1zgnJYY_FaUdyHc15hTCuNYxuNIVfHdMoEihmZqh1gu8/edit?usp=sharing"> here. </a>

Instead of 3, this project uses 10 LEDs wired to the digital pins with 330 OHM resistors. You can set the pins at the top of the document by assigning the lettered pins to digital pins (i.e pinA=10) and use the orientationtest() module to test that your top pin (J) is on the top. 

I just finished writing all of the letters and I've added the schematic showing how I wired it. Obviously, resistors don't stretch that long but the point is that you can do this with a single jumper cable to ground. If you don't space out your LEDs that much, it works perfectly.

Enjoy. 

Until Next Time,

Lucas Gelfond

