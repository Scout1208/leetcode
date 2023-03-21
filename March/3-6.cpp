//
// Created by 李承彧 on 2023/3/6.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> missing_v;
        int cnt = 1;
        int index = 0;
        while (1){
            if(index<arr.size())
            {
                if(arr[index]!=cnt){
                    missing_v.push_back(cnt);
                    cnt+=1;
                }
                else{
                    index+=1;
                    cnt+=1;
                }
            }
            else
            {
                missing_v.push_back(cnt);
                cnt++;
            }
            if(missing_v.size() == k)
            {
                break;
            }
        }
        return missing_v[k-1];
    }
};
int main(){

    Solution a;
    vector<int> arr{2,3,4,7,11};
    int k = 5;
    cout<<a.findKthPositive(arr,k)<<"\n";
}