#pragma once
#include <string>
#define GET_VARIABLE_NAME(Variable) (#Variable)

namespace helper
{
	bool string_icmp(const std::string& a, const std::string& b);
	bool hasEnding(std::string const& fullString, std::string const& ending);
};
