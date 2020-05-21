#include "stdafx.h"
#include "Utilities.h"

std::string BStrToSTDStr(BSTR src)
{
	_bstr_t wrapper = _bstr_t(src);
	char *s = new char[wrapper.length()];
	sprintf(s, "%s", wrapper);
	return s;
}

BSTR STDStrToBStr(std::string src)
{
	_bstr_t wrapper = _bstr_t(src.c_str());
	return wrapper.GetBSTR();
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

std::string multiplyTwoStrings(std::string s1, std::string s2)
{
    if ((s1.length() == 1 && s1[0] == '0') || (s2.length() == 1 && s2[0] == '0'))
        return "0";

    if (s1.length() < s2.length())
        std::swap(s1, s2);
    s1 = std::string(s1.rbegin(), s1.rend());
    s2 = std::string(s2.rbegin(), s2.rend());

    std::vector<int> v(s1.length() + s2.length() + 2, 0);
    for (int i = 0; i < s1.length(); i++)
    {
        for (int j = 0; j < s2.length(); j++)
        {
            int x = s1[i] - '0';
            int y = s2[j] - '0';

            v[i + j] += x * y;
            v[i + j + 1] = v[i + j + 1] + v[i + j] / 10;
            v[i + j] %= 10;
        }
    }

    std::string res;
    for (int i = 0; i < res.length(); i++)
    {
        res += (char)(res[i] + '0');
    }

    res = std::string(res.rbegin(), res.rend());
    while (res[0] == '0')
        res.erase(res.begin());
    return res;
}