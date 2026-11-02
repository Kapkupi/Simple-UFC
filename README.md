A 4x4 macro pad in the style of the upfront controls unit inspired by vtolvr.
<img width="3022" height="2669" alt="IMG_E5976" src="https://github.com/user-attachments/assets/3f8c9190-ddbf-40bc-80ec-d3a0df7f14c6" />
(Note that in the picture an old font was used, the new one has a straight "I"
and smaller "A" for better printing.)

I made this as a first step towards a somewhat full flight sim setup and 
because I still had this 4x4 macro pad lying around, unused.

Before you start assembling I want to point out that not every macro pad
which looks like the one I used
is the same. The dimensions can be slightly off and the link in my BOM
only points towards one I found which resembles mine because I am not
sure where I got mine from because I just found it somewhere — just a 
heads up because you probably have one lying around if you have bought 
some microcontroller starter kit.


## Printing
Now replicating this project is pretty easy but there are some things you
need to look out for in terms of printing.

The print is designed with a 0.4mm nozzle in mind and a layer height of
0.2mm. The picture above uses a 0.2mm nozzle for the buttons (except for the master caution)
but 0.4mm should also work well enough, I took attention to that. Printed with PLA.

The top should be printed on its biggest plane. The bottom should be printed
on its side, so that one side with latches is on the printing plate and
one is above. Additionally you should activate supports for the bottom.
The buttons should be printed on their face side. I recommend using the
.3mf file for the buttons as the provided .step is a raw export of the 
buttons and faces from my CAD software which you would need to cut apart
yourself so I made the .3mf so you can just use that. Otherwise you would
need to print the buttons in the air and waste material. And it would not
even look good so just use the .3mf.

## Assembly
After printing you can take your matrix and put it into the bottom while
lining up the ribbon cable with the hole for it. Then put the buttons 
into the top and then sandwich both parts while keeping the matrix in
its place. Do not worry the latches should be durable enough so then
just close it off by clicking all latches into place.
