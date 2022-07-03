CC = ++g
CPPFLAG = -c -Wall
LDFLAG = -lcppunit -lm
OBJ = obj/
SRC = src/
INCLUDE = inc/
BIN =bin/

all: clean prog

prog:$(OBJ) bankapp.o
	$(CC) -o bank $(OBJ)bankapp.o

$(OBJ)bankapp.o: $(SRC)bankapp.cpp
	$(CC) $(CPPFLAG) $(SRC)bankapp.cpp -I $(INCLUDE)

clean:
	rm -f bank 


