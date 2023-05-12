#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-1; i++)
        if (nums[i]==nums[i+1]) return true;
        return false;
    }
};

//sample
int main(){
    vector<int> sample1 = {1,2,3,4};
    vector<int> sample2 = {1,2,3,1};
    Solution solve;
    cout<<"sample1"<<": "<<solve.containsDuplicate(sample1)<<"\n";
    cout<<"sample2"<<": "<<solve.containsDuplicate(sample2);
    return 0;
}