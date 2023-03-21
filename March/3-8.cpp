//
// Created by 李承彧 on 2023/3/8.
//
#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(),piles.end());
        while (l<r){
            int m = (l+r)/2;
            if(eatTime(piles,m) <= h){
                r = m;
            }
            else{
                l = m+1;
            }
        }
        return l;
    }
    int eatTime(vector<int>& piles, int m){
        int time = 0;
        for(int p:piles)
        {
            time += (p/m + 1);
        }
        return time;
    }
};
int main()
{
    vector<int> piles{30,11,23,4,20};
    int h = 5;
    Solution a;
    cout<<a.minEatingSpeed(piles,h)<<endl;
}