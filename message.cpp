#include "./message.h"
#include <iostream>

using namespace std;

message::message()
{
	//this is where the default constructor is written!
	msg = "Hello, World!";	
}

message::message(string inputString)
{
	//non-default constructor sets the contents of the msg to the argument
	msg = inputString;
}

//should be a deconstructor here but screw it; maybe add later

//copy constructor
message::message(const message &other)
{
	//copy constructor copies the contents the "other" message into a
	//specified message.
	msg = other.msg;
}

//function returns value of private variable msg
string message::get_msg() const
{
	//this function is const for some reason I can't remember, something
	//about guarantees and checks and balances
	return msg;
}

//function is used to set private variable msg to the argument input
void message::set_msg(string input)
	//nota bene if this accepts c-string input it should be
	//of type char {name}[] as that does the const stuff wanted by
	//the language of C++
{
	msg = input;
}
