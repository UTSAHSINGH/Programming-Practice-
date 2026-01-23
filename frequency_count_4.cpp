#include <bits/stdc++.h>
using namespace std;

int findFourFreq(vector<int>& arr) {
    unordered_map<int,int> freq;

    
    for (int x : arr) {
        freq[x]++;
    }

    
    for (auto &p : freq) {
        if (p.second == 4) {
            return p.first;
        }
    }

    // Problem guarantee nahi ho to fallback
    return -1;
}

int main() {
    vector<int> arr = {5, 2, 5, 3, 5, 2, 5, 2, 3, 2, 3, 3};
    cout << findFourFreq(arr);
    return 0;
}
