all: foutput

clean: 
	rm -r foutput
	rm -r function.o

foutput: main.cpp function.o
	g++ main.cpp function.o -o foutput

function.o: function.cpp
	g++ function.cpp -o function.o -c -fPIC

	