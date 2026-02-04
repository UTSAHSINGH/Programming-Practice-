class Solution {
public:
    int heightChecker(vector<int>& arr) {
        vector <int> copy=arr;
        sort(copy.begin(),copy.end());
        int c=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=copy[i]){
                c++;
            }
        }return c;

        
    }
};