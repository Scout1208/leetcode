//
// Created by 李承彧 on 2023/3/5.
//
#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;
class Solution{
    public:
        int minJumps(vector<int>& arr){
            unordered_map<int, vector<int> >adj_point;
            queue<int> q;
            int n = arr.size();
            vector<int> visited(n,0);
            int step = 0;
            for (int j = 0; j < n; j++) {
                adj_point[arr[j]].push_back(j);
            }
            if(arr.size() == 1){
                return 0;
            }
            else{
                q.push(0);
                while(!q.empty())
                {
                    int size = q.size();
                    while(size--)
                    {
                        int i = q.front();
                        q.pop();
                        if(i == n-1)
                        {
                            return step;
                        }
                        if(i+1<n && !visited[i+1])
                        {
                            visited[i+1] = 1;
                            q.push(i+1);
                        }
                        if(i-1>0 && !visited[i-1])
                        {
                            visited[i-1] = 1;
                            q.push(i-1);
                        }
                        for (int k : adj_point[arr[i]]) {
                            if(!visited[k])
                            {
                                visited[k] = 1;
                                q.push(k);
                            }
                        }
                        adj_point[arr[i]].clear();
                    }
                    step+=1;
                }
            }
        }
};
int main(){

}