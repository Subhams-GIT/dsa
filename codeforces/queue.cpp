#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
	int n, sec;
	cin >> n >> sec;
	string s;
	cin >> s;

	register int i = 0;
	bool swapped = false;
	for (int index = 0; index < sec; index++)
	{
		i=0;
		while (i < n-1 )
		{
			swapped=false;

			if (s[i] == 'B' && s[i + 1] == 'G' && swapped == false)
			{
				swap(s[i], s[i + 1]);
				swapped = true;
				i += 2;
			}
			else i++;
		}
	}
	cout << s << endl;
	return 0;
}
