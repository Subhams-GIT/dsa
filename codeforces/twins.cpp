#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int subsetSumRange(int i, int j, const vector<int>& ar) {
    int sum = 0;
    for (int index = i; index <= j; index++) {
        sum += ar[index];
    }
    return sum;
}

int main() {
    int coins;
    cin >> coins;

    vector<int> coin(coins);
    int totalSum = 0;

    for (int i = 0; i < coins; i++) {
        cin >> coin[i];
        totalSum += coin[i];
    }

    // Sort in descending order
    sort(coin.rbegin(), coin.rend());

    int mySum = 0, count = 0;

    for (int i = 0; i < coin.size(); i++) {
        mySum += coin[i];
        count++;
        if (mySum > totalSum - mySum) {
            break;
        }
    }

    cout << count << endl;
    return 0;
}
