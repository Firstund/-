#include <iostream>

using namespace std;

int main()
{


	char str[3][10] = { " " };
	int len = 0;
	for (int j = 0; j < 3; j++)
	{
		cout << "3글자 영문 입력해 : ";
		cin >> str[j];
	}
	for (int j = 0; j < 3; j++)
	{
		for (int i = sizeof(str[j]) / sizeof(char) - 1; i >= 0; i--)
		{
			cout << str[j][i];
		}
		cout << endl;
	}

	return 0;

}