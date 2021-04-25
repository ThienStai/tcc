#pragma once
#include <string>
#include "tokens.h"
#include <iostream>
#include "helper.h"
class Lexer
{
public:
	std::string text;
	char current_char;
	int index = 0;

	Lexer(std::string text_) {
		text = text_;
	}
private:
	void advance();
	Token generate_tokens();
	Token genererate_number();
};
