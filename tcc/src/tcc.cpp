#include <iostream>
#include <string>
#include "helper.h"
int main(const int argc,const char* argv[])
{
	std::string input;
	while (true) {
		std::cout << "tcc << ";
		std::cin >> input;
		std::cout << "tcc >> " << input << std::endl;
		if (helper::string_icmp(input,"exit")) {
			return 0;
		}

		std::cout << std::endl;
	}
}