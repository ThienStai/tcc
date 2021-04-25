#pragma once
#include "tokens.h"
#include "nodes.h"
#include <vector>
class Parser
{
public:
	std::vector<Token> TokenList;
	Token current_token;
	Parser(std::vector<Token> TokenList_) {
		TokenList = TokenList_;
	}

};
