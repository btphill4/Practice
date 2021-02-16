#MakeFile example

#target: dependency1 dependency2 ...
#	<tab> command

#NOTE: remember to add the TAB character before the command part

#Typing 'make' will invoke the first target entry in the file

#declare the variable as CC will tell type of compiler
CC=g++

CFLAGS=-c -Wall

#this target will compile all the files "make all"
all: helloWorld mergeSort lineByLineRead terminalInput insertionSortInt quickSortXue detailedInsertionSort detailedMergeSort detailedQuickSort
	
helloWorld: helloWorld.cpp 
	$(CC) helloWorld.cpp -o helloWorld

helloWorld.o: helloWorld.cpp
	$(CC) $(CFLAGS) helloWorld.cpp

mergeSort: mergeSort.cpp
	$(CC) mergeSort.cpp -o mergeSort

mergeSort.o: mergeSort.cpp
	$(CC) $(CFLAGS) mergeSort.cpp

lineByLineRead: lineByLineRead.cpp
	$(CC) lineByLineRead.cpp -o lineByLineRead

lineByLineRead.o: lineByLineRead.cpp
	$(CC) $(CFLAGS) lineByLineRead.cpp

terminalInput: terminalInput.cpp
	$(CC) terminalInput.cpp -o terminalInput

terminalInput.o: terminalInput.cpp
	$(CC) $(CFLAGS) terminalInput.cpp

insertionSortInt: insertionSortInt.cpp 
	$(CC) insertionSortInt.cpp -o insertionSortInt

insertionSortInt.o: insertionSortInt.cpp
	$(CC) $(CFLAGS) insertionSortInt.cpp

quickSortXue: quickSortXue.cpp 
	$(CC) quickSortXue.cpp -o quickSortXue

quickSortXue.o: quickSortXue.cpp
	$(CC) $(CFLAGS) quickSortXue.cpp

detailedInsertionSort: detailedInsertionSort.cpp 
	$(CC) detailedInsertionSort.cpp -o detailedInsertionSort

detailedInsertionSort.o: detailedInsertionSort.cpp
	$(CC) $(CFLAGS) detailedInsertionSort.cpp

detailedMergeSort: detailedMergeSort.cpp 
	$(CC) detailedMergeSort.cpp -o detailedMergeSort

detailedMergeSort.o: detailedMergeSort.cpp
	$(CC) $(CFLAGS) detailedMergeSort.cpp

detailedQuickSort: detailedQuickSort.cpp 
	$(CC) detailedQuickSort.cpp -o detailedQuickSort

detailedQuickSort.o: detailedQuickSort.cpp
	$(CC) $(CFLAGS) detailedQuickSort.cpp

clean:
	rm -rf *o helloWorld mergeSort lineByLineRead terminalInput insertionSortInt quickSortXue detailedInsertionSort detailedMergeSort detailedQuickSort


#this target will compile when "make compile" is executed
#compile:
#	g++ encode.cpp -o project1
