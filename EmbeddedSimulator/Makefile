all: main


main: main.cpp gpio.cpp timer.cpp uart.cpp cli.cpp
	
	g++ -o EmbeddedSimulator main.cpp gpio.cpp timer.cpp uart.cpp cli.cpp -std=c++11 -pthread


clean:

	rm -f EmbeddedSimulator

