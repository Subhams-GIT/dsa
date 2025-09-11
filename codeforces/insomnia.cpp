#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int k, l, m, n, d, ans = 0;
	cin >> k;
	cin >> l;
	cin >> m;
	cin >> n;
	cin >> d;
	int arr[d] = {0};

	for (int i = k-1; i <= d; i += k)
		arr[i]++;
	for (int j = l-1; j <= d; j += l)
		arr[j]++;
	for (int a = m-1; a <= d; a += m)
		arr[a]++;
	for (int b = n-1; b <= d; b += n)
		arr[b]++;

	for (int i = 0; i < d; i++)
	{
		// cout<<arr[i];
		if (arr[i] > 0)
			ans++;
	}
	cout << ans;
}