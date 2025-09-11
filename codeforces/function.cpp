#include<iostream>
using namespace std;

int main(){
	long long  n;
	cin>>n;
	long long rem=0;
	
	if(n%2==0){
		rem=n/2;
		cout<< -(rem*rem)+rem*(rem+1);
		return 0;
	}
	else{
		rem=(n/2)+1;
		cout<< -(rem*rem)+(n/2)*(rem);
		return 0;
	}
	
}