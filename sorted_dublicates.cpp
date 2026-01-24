#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> data = {4, 1, 3, 2, 2, 4, 1, 4};
    map<int, int> counts;
   
    for (int num : data) {
        counts[num]++;
    }

    cout << "Sorted Duplicates: ";
    
    for (const auto& pair : counts) {
        if (pair.second > 1) {
            cout << pair.first << " ";
        }
    }
    cout << endl;

    return 0;
}
