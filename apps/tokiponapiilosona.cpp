#include "parse.h"

#include <cassert>
#include <iostream>
#include <string>

int main()
{
	assert(tppis::lex("ijo foo;"));

	std::cout << "\n> ";
	auto str = std::string{};
	std::getline(std::cin, str);
	assert(tppis::lex(str));

	return 0;
}
