//
// Created by 李承彧 on 2023/3/4.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        vector<int> sub;
        long long cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            sub.clear();
            for (int j = i; j < nums.size(); j++) {
                sub.push_back(nums[j]);
                if(*max_element(sub.begin(),sub.end()) == maxK && *min_element(sub.begin(),sub.end()) == minK)
                {
                    cnt+=1;
                }
            }
        }
        return cnt;
    }
};
int main()
{
    Solution a;
//    vector<int> nums{1,3,5,2,7,5};
//    int minK = 1;
//    int maxK = 5;
    vector<int> nums{1,1,1,1};
    int minK = 1;
    int maxK = 1;
    cout<<a.countSubarrays(nums, minK,maxK)<<'\n';
}