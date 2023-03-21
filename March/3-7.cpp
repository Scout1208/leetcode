//
// Created by 李承彧 on 2023/3/7.
//
#include <iostream>
#include <vector>

using namespace std;
class Solution{
    public:
    long long minimumTime(const vector<int>& time, const int totalTrips) {
        long long l = 1;
        long long r = ( *min_element(time.begin(),time.end()) ) * (long long)totalTrips;
        while(l<r){
            long long m = (l+r)/2;
            if(num_trips_each_t(time,m) >= totalTrips){
                r = m;
            } else{
                l = m+1;
            }
        }
        return l;
    }
    long long num_trips_each_t( const vector<int>& time, const int m){
        long long num = 0;
        for (int t:time){
            num += m/t;
        }
        return num;
    }
};
int main(){
    Solution a;
    vector<int> time{1,2,3};
    int totalTrips = 5;
    cout<<a.minimumTime(time,totalTrips)<<endl;
}