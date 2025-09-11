#include <iostream>
#include<math.h>
using namespace std;

int main()
{
	int pos;
	cin >> pos;

	if (pos <= 5)
	{
		cout << 1;
		return 0;
	}

	float ceilvalue=ceil(pos/5);
	if(ceilvalue==(float)pos/5) cout<<ceilvalue;
	else cout<<ceilvalue+1;
}