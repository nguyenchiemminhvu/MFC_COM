#include "stdafx.h"
#include "Utilities.h"

std::string BStrToSTDStr(BSTR src)
{
	_bstr_t wrapper = _bstr_t(src);
	char *s = new char[wrapper.length()];
	strcpy_s(s, wrapper.length() + 1, wrapper);
	return std::string(s);
}

BSTR STDStrToBStr(std::string src)
{
	_bstr_t wrapper = _bstr_t(src.c_str());
	return wrapper.copy();
}

std::string sumTwoBigInteger(std::string a, std::string b)
{
    if(a.length() > b.length())
        swap(a, b);

    while (a.length() < b.length())
        a = "0" + a;
        
    int carry = 0;
    int i = a.length() - 1, j = b.length() - 1;
    while (i >= 0 && j >= 0)
    {
        int temp = a[i] - '0' + b[j] - '0' + carry;
        carry = 0;
        if (temp > 9)
        {
            carry = temp / 10;
            temp = temp % 10;
        }
        
        a[i] = (char)(temp + '0');
        
        i--;
        j--;
    }
    
    if (carry)
    {
        a = ToString(carry) + a;
    }
        
    return a;
}
