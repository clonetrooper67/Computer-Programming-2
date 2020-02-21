all: Mocha.o mochajoe.o
	g++ Mocha.o mochajoe.o -o mocha
Mocha.o: Mocha.cpp
	g++ Mocha.cpp -c
mochajoe.o: mochajoe.cpp
	g++ mochajoe.cpp -c

run:
	./mocha
clean:
	rm Mocha.o mochajoe.o mocha

g++ barcode.cpp -std=c++11