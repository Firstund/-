#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char a[20] = {" "};
	int a1[20][20] = { 0, };

	int i;

	while (true)
	{
		cin >> a;
		if (strlen(a) >= 3)
		{
			break;
		}
		else
		{
			cout << "3 이상의 문자를 입력하세요" << endl;
		}
	}

	cout << strlen(a) << endl;

	for (i = 0; i < 20; i++)
		a1[i][0] = 1;

	for (i = 0; i < (strlen(a) + 1); i++)
	{
		for (int j = 0; j < (strlen(a) + 1); j++)
		{
			if (j > 0 && i > 0)
			{
				/*cout << "i: " << i << "\tj: " << j << endl;*/
				a1[i][j] = a1[i - 1][j] + a1[i - 1][j - 1];
			}
		}

		if(i == strlen(a))
			for (int j = 0; j < ((strlen(a) + 1) / 2); j++)
			{
				for (int z = 0; z < (strlen(a) + 1); z++)
				{
					if (j != z)
						if (a1[i][j] > 0 && a1[i][j] == a1[i][z])
						{
							//cout << a1[i][j] << " " << a1[i][z] << " ";
							char imsi = a[j];
							/*cout << imsi << "\t";
							cout << a[z - 1] << endl << endl;*/
							a[j] = a[z - 1];
							a[z - 1] = imsi;
							//cout << a << endl << endl;
						}
				}
			}
		
		cout << endl;
	}
	cout << a << endl;

	return(0);
}