#include "./message.h"
#include <iostream>

using namespace std;

message::message()
{
	//this is where the default constructor is written!
	//this default constructor is empty since no tasks need to be done
	//immediately when the object is instantiated.	
}

message::message(string inputString)
{
	msg = inputString;
}
