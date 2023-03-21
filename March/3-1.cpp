//
// Created by 李承彧 on 2023/3/1.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> leftMerge;
        vector<int> rightMerge;
        if (nums.size()>=2)
        {
            mid = (leftIndex + rightIndex)/2;
            for (int i = leftIndex; i < mid+1; i++)
            {
                leftMerge.push_back(nums[i]);
            }
            for (int j = mid+1; j < rightIndex+1; j++)
            {
                rightMerge.push_back(num[j]);
            }
            sortArray(leftMerge);
            sortArray(rightMerge);
        }
    }
    vector<int> merge(vector<int>& leftMerge, vector<int>& rightMerge)
    {
        int st1 = 0,st2 = 0;
        vector<int> result;
        while(1)
        {
            if()
            if(st1 == leftMerge.size()&&st2 == rightMerge.size())
            {
                break;
            }

        }
    }
};
int main()
{
    nums = [5,3,2,1];
}