#include <iostream> //similar to stdio.h in C; includes cout, cin, endl
#include "./message.h" //custom header file with the message object bits

void print_msg(message outm)
{
	cout << "msg: " << outm.get_msg() << endl;
}

//standard integer for argument count, 2-d char array for arguments
int main(int argc, char* argv[])
{
	cout << 
		"This is a simple demonstration of C++ object-oriented programming."
	<< endl;

	//will call default constructor
	message hello;
	//print msg of hello
	print_msg(hello);

	//set msg to a literal string:
	hello.set_msg("This is a changed message!");
	print_msg(hello);

	string othermsg = "This is a third message!";
	//set msg to a string varible:
	hello.set_msg(othermsg);
	print_msg(hello);

	message goodbye;
	goodbye.set_msg("Goodbye!");
	//use copy constructor
	hello = goodbye;
	print_msg(hello);
}
