#include <iostream>
#include <string>
    
int main() {
	std::string greeting = "Hello";
	std::string complete_greeting = greeting + " there";
	complete_greeting += "!";
	std::cout << complete_greeting << std::endl;
	std::cout << complete_greeting.length() << std::endl;

	// method == member function == function attached to 
	// objects
	
	char name[] = "Caleb"; // c string == array of characters "Caleb\0"
	// name = "B";
	

	complete_greeting = "Go away";
	return 0;
}
