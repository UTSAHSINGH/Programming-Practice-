#include <iostream>
#include <vector>
using namespace std;

int getSingle(vector<int>& arr) {
    int result = 0, x, sum;

   for (int i = 0; i < 32; i++) {
        sum = 0;
        
        x = (1 << i); 

        for (int j = 0; j < arr.size(); j++) {
            
            if (arr[j] & x) {  
                sum++;
            }
        }

        if ((sum % 3) != 0) {
            result |= x;
        }
    }

    return result;  
}

int main() {
    vector<int> arr = {1, 10, 1, 1,10,10,10,2,2,2,4,4,4};
    cout << getSingle(arr) << endl;
    return 0;
}