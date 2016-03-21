#ifndef MESSAGE_H //Jennifer yelled at us to always have these sooooo
#define MESSAGE_H

#include <iostream> //for string data type

//this custom header file is where the message class is declared

using namespace std;

class message
{
	public: //These can be accessed by anything outside the class.
	   		//For example, in the hellOO.cpp file, in main, calling the
			//constructor is as follows:
			//		message hello = new message();
			//the new message() bit is calling the constructor. However,
			//attempting to work with the "msg" string would cause a compile
			//error.
		message(); //default constructor
		message(string); //custom constructor; this is used whenever
						 //the constructor is called with an argument
						 //of type string. You can have many custom
						 //constructors with many different types of
						 //arguments!
		message(const message &); //copy constructor: used to copy elements of
							  //one message object to the next

		//convention is to have two functions for every private variable
		//one to return the contents of the variable...
		string get_msg() const;

		//...and one to set the contents of the variable
		void set_msg(string);

	private: //these elements are not accessable to anthing outside class
		string msg; //the actual meat & potatoes of this class!
}; //don't forget this semicolon!

#endif
