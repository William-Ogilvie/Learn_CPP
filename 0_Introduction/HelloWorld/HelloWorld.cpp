#include <iostream>
#include <limits>

int main()
{
	std::cout << "Hello, world!";
	
	// This is for if the IDE doesn't automatically keep the console window open at the end of the program,
	// You see this when just running the .exe directly
	std::cin.clear(); // reset any error flags
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),
		'\n'); // ignore any characters in the input buffer until we find a newline
	std::cin.get(); // get one more char from the user (waits for the user to press enter)
	return 0;
}

// ctrl-shift-B to build