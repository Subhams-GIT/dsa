#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int levels, p, q;
    cin >> levels;
    set<int> completed;

    cin >> p;
    for (int i = 0, level; i < p; i++) {
        cin >> level;
        completed.insert(level);
    }

    cin >> q;
    for (int i = 0, level; i < q; i++) {
        cin >> level;
        completed.insert(level);
    }

    if (completed.size() == levels) {
        cout << "I become the guy.\n";
    } else {
        cout << "Oh, my keyboard!\n";
    }

    return 0;
}
