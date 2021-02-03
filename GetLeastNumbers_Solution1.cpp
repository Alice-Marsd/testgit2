#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 
class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int> ret;
        if (k==0 || k>input.size()) return ret;
        sort(input.begin(), input.end());
        return vector<int>({input.begin(), input.begin()+k});   
    }
};
