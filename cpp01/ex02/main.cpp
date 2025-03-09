#include <iostream>
#include <iomanip>

int main(void)
{
	std::string	str("HI THIS IS BRAIN");
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;
	
	std::cout << "________________________________________________________________________\n";
	std::cout << "Memory address of the string variable str: " << &str << std::endl;
	std::cout << "Memory address of the string pointer variable strintPTR: " << stringPTR << std::endl;
	std::cout << "Memory address of the string reference variable stringREF: " << &stringREF << std::endl;
	std::cout << "________________________________________________________________________\n";
	std::cout << "Value of the string variable str: " << str << std::endl;
	std::cout << "Value of the string pointer variable stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value of the string reference variable stringREF: " << stringREF << std::endl;
	std::cout << "________________________________________________________________________\n";
	return (0);
}
