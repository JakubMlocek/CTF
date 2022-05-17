mysecretvalue = ???;
mysecretmessage = ???;
for (i=0;i<strlen(mysecretmessage);i++)
{
	mysecretmessage[i] ^= ((mysecretvalue>>(8*(i%4)))&255);
}
echo strhex(mysecretmessage);
