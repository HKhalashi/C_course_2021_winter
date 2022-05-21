CC=gcc
CCOPT=-g
LNK=gcc

%.o : %.c
	$(CC) -c $(CCOPT) -o $@ $<

program : mod2.o mod3.o mod4.o my_prog.o
	$(LNK) -o $@ $?

all : program

clean :
	- rm *.o
	- rm *.hdrdep.bak

cleanall : clean
	- rm program
	- echo > makefile.hdrdep

mrproper : cleanall


depends :
	makedepend -f makefile.hdrdep *.c

include makefile.hdrdep
