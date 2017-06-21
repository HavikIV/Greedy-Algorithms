#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
	string s, temp;

	cin >> s;
	for (int j = 0; j < s.length(); j++)
	{
		if (s[j] != '?')
		{
			temp[j] = s[j];
		}
		else if (s[j] == '?')
		{
			if (j > 0)
			{
				if (temp[j - 1] != 'a' && s[j + 1] != 'a')
				{
					temp[j] = 'a';
				}
				else
				{
					temp[j] = 'b';
				}
			}
			else
			{
				if (s[j + 1] != 'a')
				{
					temp[j] = 'a';
				}
				else
				{
					temp[j] = 'b';
				}
			}
		}
	}

	printf("%s", temp.c_str());
	return 0;
}