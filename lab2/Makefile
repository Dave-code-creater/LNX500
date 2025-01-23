CC=g++

all: main.o student.o 
	$(CC) -o main.bin main.o student.o	

main.o:	main.cpp
	$(CC) -c main.cpp

student.o: student.cpp
	$(CC) -c student.cpp

clean_intermediate:	
	rm main.o student.o

clean:
	rm main.o main.bin student.o