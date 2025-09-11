#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main() {
    int length;
    // std::cout << "Enter the initial length of the vector: ";
    std::cin >> length;
    int count=0,ans=0;
    // Create a vector of given length, each inner vector has 3 integers initialized to 0
    vector<vector<int>> myVector(length, vector<int>(3));

    // std::cout << "Vector of size " << myVector.size() << " created.\n";
    for (int i = 0; i < length; i++)
    {
        count=0;
        for (int j = 0; j < 3; j++)
        {
            cin>>myVector[i][j];
            if(myVector[i][j]==1) count++;
        }
        if(count>=2) ans++;
        
    }
    
    cout<<ans;
    return 0;
}