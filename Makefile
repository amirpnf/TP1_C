CC=gcc
CFLAGS= -std=c17 -pedantic -Wall -pg
NOM_ZIP=TP1_AMIRHOSSEIN_POUYANFAR.zip


all :
	make mytee
	make binomial
	make ppcm


mytee:
	$(CC) $(CFLAGS) mytee.c -o mytee


binomial:
	$(CC) $(CFLAGS) binomial.c -o binomial


ppcm:
	$(CC) $(CFLAGS) ppcm.c -o ppcm

clean:
	rm -f binomial
	rm -f mytee
	rm -f ppcm	
	rm -f gmon.out
	