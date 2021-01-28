#MakeFile example

#target: dependency1 dependency2 ...
#	<tab> command

#NOTE: remember to add the TAB character before the command part

#Typing 'make' will invoke the first target entry in the file

#declare the variable as CC will tell type of compiler
CC=g++

CFLAGS=-c -Wall

#this target will compile all the files "make all"
all: helloWorld mergeSort 
	
helloWorld: helloWorld.cpp 
	$(CC) helloWorld.cpp -o helloWorld

helloWorld.o: helloWorld.cpp
	$(CC) $(CFLAGS) helloWorld.cpp

mergeSort: mergeSort.cpp
	$(CC) mergeSort.cpp -o mergeSort

mergeSort.o: mergeSort.cpp
	$(CC) $(CFLAGS) mergeSort.cpp

clean:
	rm -rf *o helloWorld mergeSort 


#this target will compile when "make compile" is executed
#compile:
#	g++ encode.cpp -o project1
