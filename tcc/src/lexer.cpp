#include "lexer.h"
void Lexer::advance()
{
	if (index < text.length()) {
		this->current_char = text[index++];
	}
	else current_char = '\0';
}

Token Lexer::generate_tokens() {
	while (current_char != '\0') {
		if (isspace(current_char)) {
			advance();
		}
		else if (current_char == '.' || isdigit(current_char)) {
			return genererate_number();
		}
		else if (current_char == '+')
			return Token(TokenType::PLUS);
		else if (current_char == '-')
			return Token(TokenType::MINUS);
		else if (current_char == '*')
			return Token(TokenType::MULTIPLY);
		else if (current_char == '/')
			return Token(TokenType::DIVIDE);
		else if (current_char == '(')
			return Token(TokenType::LPAREN);
		else if (current_char == ')')
			return Token(TokenType::RPAREN);
		else {
			std::cerr << "Illegal char: " << current_char << std::endl;
		}
	}
}

Token Lexer::genererate_number() {
	int decimal_point_count = 0;
	std::string number_str;
	number_str.push_back(current_char);
	advance();
	while (current_char != '\0' && (current_char == '.' || isdigit(current_char))) {
		if (current_char == '.')
			decimal_point_count += 1;
		if (decimal_point_count > 1)
			break;

		number_str.push_back(current_char);
		advance();

	}

	if (number_str[0] == '.')
		number_str = '0' + number_str;
	if (helper::hasEnding(number_str, std::string(1, '.')))
		number_str += '0';

	return Token(TokenType::NUMBER, std::stof(number_str));
}
