#include "Util.h"

bool is_digit(string str) 
{
    return atoi(str.c_str()) != 0 || str.compare("0") == 0;
}

/// <summary>
/// 받은 매개변수값 뒤에 숫자값만 입력값을 받는다.
/// </summary>
/// <param name="str">문자열 출력</param>
/// <returns></returns>
int GetNumber(const char* str = "")
{
    int value;
    bool isTrue = true;
    string checkint;

    cout << str;
    cin >> checkint;
    if (!(is_digit(checkint)))
    {
        cout << "숫자만 입력해주세요" << endl;
        return GetNumber(str);
    }
    else
    {
        value = std::stoi(checkint);
        return value;
    }
}

string GetString(const char* str)
{
    string coutStr;

    cout << str;
    cin >> coutStr;
    return coutStr;
}

int		ft_strcpy(char *dest, const char *src)
{
	int     i;
	int     j;
	char	*src_tmp;

	i = strlen(src);
	j = -1;

	src_tmp = (char *)src;
	while (src_tmp[++j] != '\0')
		dest[j] = src_tmp[j];
	dest[j] = '\0';
	return (i);
}