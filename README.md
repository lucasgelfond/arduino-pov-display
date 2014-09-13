arduino-pov-display
===================

This repo is started as a way to house my first real Arduino project, the Arduino Persistence of Vision (POV) display. 

A typical persistence of vision display works by using a similar technique but spins and uses much more complicated code. It often also requires soldering, custom woodworking, motors, and accelerometers. Also because it is circular, the amount of writing is very limited.  I decided that I wanted to stick with a much more simple approach for my first Arduino project. This is how it works:

Let's say you have a 3x3 pixel grid. You can easily make simple letters like the "T" in this example.

<img src="http://i.imgur.com/m60WFg3.png?1" width=210px, height=179px/>

But, what if you only have one collumn?

<img src="http://i.imgur.com/ZjXzWl4.png?1" width=263px, height=163px/>

I call each on of these different collumns a "state". In this example, you could separate the T into three separate states. By using this approach, you separate a letter into these different states and when moving quickly and getting the LEDs to blink in a certain pattern, you form letters by combining each of these LED states to form letters. Because you are continuously moving sideways, you can have an an unlimited amount of letters with the only thing limiting you being your camera!

I have already done this before with my camp where I learnt Arduino at called <a href="http://www.planetbravo.com/"> Planetbravo </a> and so I spelled out Planetbravo below.

<img src="http://i.imgur.com/U0tp6nZ.jpg?1" width=400, height=300/>

If you look closely at the above picture, you can see the individual LEDs.

So by moving this pattern slowly to the side, you form letters, and with a long exposure photograph, you can do almost anything.

I'm currently writing code in the Arduino IDE. It uses 10 pins, each customizable so that you can pick any pins that you like. A schematic from Autodesk Circuit will be uploaded soon. 

I'm attempting to write one letter per day, and I'll try to keep this repo updated. 

Lucas Gelfond

