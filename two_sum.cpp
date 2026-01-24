#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> hash;  
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];  
        if (hash.find(complement) != hash.end()) {
            return {hash[complement], i};  
        }
        hash[nums[i]] = i;  
    }
    return {}; 
}

int main() {
    vector<int> v = {1, -3, -4, 5, 2,4 , 5};  
    int target = 10;  
    vector<int> result = twoSum(v, target); 
    if (result.size() == 2) {
        cout << "Indices: " << result[0] << " and " << result[1] << endl;  
    } else {
        cout << "No solution found" << endl;
    }
    return 0;
}
