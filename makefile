all:Clock.o main.cpp lab3.cpp
	g++ -o sortTest Clock.o main.cpp
	g++ -o lab3 lab3.cpp
Clock.o:Clock.cpp Clock.h
	g++ -c Clock.cpp -o Clock.o
clean:
	rm Clock.o
	rm sortTest
	rm lab3
