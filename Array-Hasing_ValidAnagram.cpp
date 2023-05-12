#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isAnagram(string &s, string &t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for (int i=0; i<s.size(); i++)
            if (s[i]!=t[i] || t.size() != s.size())
                return false;
        return true;
    }
};

int main(){
    Solution sol;
    string sample1 = "nama";
    string sample2 = "anam";
    string sample3 = "mama";
    cout<<"sample1 and sample2: "<<sol.isAnagram(sample1, sample2)<<"\n";
    cout<<"sample1 and sample3: "<<sol.isAnagram(sample1, sample3);
    return 0;
}
