#include <iostream>
#include <string>

using namespace std;

int main() {
    int length;
    cin >> length;
    string* words = new string[length];
    for (int i = 0; i < length; i++) {
        cin >> words[i];
    }
    for (int i = 0; i < length; i++) { // Use length, not words->length()
        int len = words[i].length();
        if (len > 10) {
            string ans = words[i][0] + to_string(words[i].length() - 2) + words[i][words[i].length() - 1];
            words[i]=ans;
        }
        cout << words[i] << endl;
    }
    delete[] words; // Free the memory
    return 0;
}
