#ifndef __UTILITIES_H__
#define __UTILITIES_H__

#pragma once

#include <vector>
#include <string>
#include <sstream>
#include <comutil.h>
#pragma comment(lib,"comsuppw.lib")

template <class T>
std::string ToString(const T &value)
{
	std::ostringstream os;
	os << value;
	return os.str();
}

std::string BStrToSTDStr(BSTR src);
BSTR STDStrToBStr(std::string src);

std::string sumTwoBigInteger(std::string a, std::string b);
std::string multiplyTwoStrings(std::string s1, std::string s2);

#endif // __UTILITIES_H__