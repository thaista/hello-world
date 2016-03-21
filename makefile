hello.exe: main.o message.o
	g++ main.o message.o -o hello.exe
main.o: main.cpp
	g++ -c main.cpp
message.o: message.cpp
	g++ -c message.cpp
