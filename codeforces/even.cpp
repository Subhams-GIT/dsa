#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

 // 1 2 3 4 5 6 7 8 9 10
 // 1 3 5 7 9 2 4 6 8 10 
int main(){
	long long  n,k;
	cin>>n>>k;

	long long odd = (n + 1) / 2; // number of odd numbers
	long long  even = n / 2;      // number of even numbers

	if (k <= odd) {
		cout << 2 * k - 1 << endl; // k-th odd number
	} else {
		cout << 2 * (k - odd) << endl; // (k-odd)-th even number
	}

}