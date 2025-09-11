#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string s;
	cin>>s;

	string word = "";
	bool first = true;
	for (size_t i = 0; i < s.length();) {
		if (i + 2 < s.length() && s.substr(i, 3) == "WUB") {
			if (!word.empty()) {
				if (!first) cout << " ";
				cout << word;
				word = "";
				first = false;
			}
			i += 3;
		} else {
			word += s[i];
			i++;
		}
	}
	if (!word.empty()) {
		if (!first) cout << " ";
		cout << word;
	}
}