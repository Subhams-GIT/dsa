#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int grp = 0;
	string prev = "", curr = "";

	int i = 0;
	if (n == 1)
	{
		cout << 1;
		return 0;
	}
	while (i < n)
	{
		cin >> curr;
		if (prev != "" && prev[1] != curr[0] && grp == 0) grp++;
		else if (prev != "" && prev[1] == curr[0]) grp = grp > 0 ? grp += 1 : grp += 2;
		prev = curr;
		i++;
	}
	cout << grp;
}