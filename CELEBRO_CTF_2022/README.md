# CELEBRO CTF 2022

## OSINT - Door in the picture
![OSINT](OSINT.2022.png)
Using `google` and `google maps` we found the correct street and found correct door
`FLAG: ASSAABLOY[august]`


## MISC - dino meme
![DINOMEME](ctf.jpg)

Using `strings` we get found interesting string in results`heywhatsthat.heic` 

Using `binwalk` we found the archive with `heywhatsthat.heic` file inside. We extract it and the flag is
`FLAG: ASSAABLOY[BarelyWarmedUp]`
## MISC - evening traffic
![SPECTRUM](spectrum.png)

First we convert `.ogg` to `.mp3` format.

Using Spectral Analysis (FFT) [TOOL](https://audiotoolset.com/spectral-analysis) we find flag.

`Flag: ASSAABLOY[3udAXhzUft]`

## MISC/WEB - Open the door

* Opened Directory Scanner: \
	dirb result:
	---- Scanning URL: https://ctf-door.herokuapp.com/ ----
	
	+ https://ctf-door.herokuapp.com/index.html (CODE:200|SIZE:1776)                                                                                                                
	+ https://ctf-door.herokuapp.com/solved (CODE:400|SIZE:12)                                                                                                                      
	+ https://ctf-door.herokuapp.com/start (CODE:200|SIZE:27) 


single blink incorrect pin digit
double blink correnct pin digit
                                                            

## MISTERY GRAPHIC
ESITERIC PROGRAMMING LANGUAGE

## HELLO WORD
otworz plik w hexedit charakterystyczny upx 

