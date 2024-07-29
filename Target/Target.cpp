#include <iostream>
#include <Windows.h>

int main()
{
	int varInt{ 123456 };
	std::string varString{ "DefaultString" };
	char arrChar[128]{ "Long char array and some random text" };
	int* ptr2int{ &varInt };
	int** ptr2ptr{ &ptr2int };
	int*** ptr2ptr2{ &ptr2ptr };

	boolean loop = true;
	while (loop)
	{
		loop = false;

		std::cout << "Process ID: " << GetCurrentProcessId() << std::endl;

		std::cout << std::endl;

		std::cout << "varInt\t\t(0x" << &varInt << ") = " << varInt << std::endl;
		std::cout << "varString\t(0x" << &varString << ") = " << varString << std::endl;
		std::cout << "arrChar[128]\t(0x" << &arrChar << ") = " << arrChar << std::endl;

		std::cout << std::endl;

		std::cout << "ptr2int\t\t(0x" << &ptr2int << ") = 0x" << ptr2int << std::endl;
		std::cout << "ptr2ptr\t\t(0x" << &ptr2ptr << ") = 0x" << ptr2ptr << std::endl;
		std::cout << "ptr2ptr2\t(0x" << &ptr2ptr2 << ") = 0x" << ptr2ptr2 << std::endl;

		std::cout << std::endl;

		std::cout << "Press ENTER to print again." << std::endl;
		std::cin.ignore();
		loop = true;
		std::cout << "-----------------------------------" << std::endl;
		std::cout << std::endl;
	}
}