#CELEBRO CTF 2022

###OSINT - Door in the picture
![Tux, the Linux mascot](OSINT.2022.png)
Using google and google maps we found the correct street and found correct door
FLAG: ASSAABLOY[august]


###MISC - dino meme
Using `strings` we get found interesting string in results`heywhatsthat.heic` 

Using `binwalk` we found the archive with `heywhatsthat.heic` file inside. We extract it and the flag is
FLAG: ASSAABLOY[BarelyWarmedUp]
###MISC - evening traffic

Using Spectral Analysis (FFT) [lihttps://audiotoolset.com/spectral-analysis we find flag but it does not work

flag: ASSAABLOY[3udAXhzUft]

###MISC/WEB - Open the door

dirb result:
---- Scanning URL: https://ctf-door.herokuapp.com/ ----

+ https://ctf-door.herokuapp.com/index.html (CODE:200|SIZE:1776)                                                                                                                
+ https://ctf-door.herokuapp.com/solved (CODE:400|SIZE:12)                                                                                                                      
+ https://ctf-door.herokuapp.com/start (CODE:200|SIZE:27) 


single blink incorrect pin digit
double blink correnct pin digit
                                                            

###CRYPTO - Sekure File Storage
dirb - no results
decoding our token from base 64:
{"username":"user","ts":1649348124986,"file":"not_a_flag.txt"}0E. .ªæÏ6gE¼àá"á..g:7lÇ>y-.ì(Fw»¨Zoü.!.¥¬..<Ñ»¯ÿ¢ÌªÈ..Ï..@..wÅ¿É²¥ºå2.þ

mozna przelaczac sie na innego uzytkownika i pobierac jego pliki jesli podamy wlasciwy token


###MISTERY GRAPHIC
ESITERIC PROGRAMMING LANGUAGE

###HELLO WORD
otworz plik w hexedit charakterystyczny upx 

