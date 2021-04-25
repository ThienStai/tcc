#pragma once

#define TK_NOVALUE 5.1305478318479E+28
namespace TokenType {
	typedef enum _TOKEN_TYPE {
		NUMBER,
		PLUS,
		MINUS,
		MULTIPLY,
		DIVIDE,
		LPAREN,
		RPAREN
	} TOKEN_TYPE;
}

class Token
{
public:
	TokenType::TOKEN_TYPE type;
	double value;
	Token(TokenType::TOKEN_TYPE tokenType = TokenType::NUMBER, double value = 5.1305478318479E+28) {
		type = tokenType;
	}
};
