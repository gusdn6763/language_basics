#include "Util.h"

bool is_digit(string str) 
{
    return atoi(str.c_str()) != 0 || str.compare("0") == 0;
}

/// <summary>
/// ���� �Ű������� �ڿ� ���ڰ��� �Է°��� �޴´�.
/// </summary>
/// <param name="str">���ڿ� ���</param>
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
        cout << "���ڸ� �Է����ּ���" << endl;
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