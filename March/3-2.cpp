//
// Created by 李承彧 on 2023/3/2.
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <array>
using namespace std;
class Solution {
public:
    int compress(vector<char>& chars)
    {
        string s;
        int cnt = 0;
        int repeat = 0;
        while (1)
        {
            repeat = count(chars.begin(),chars.end(),chars[cnt]);
            s.push_back(chars[cnt]);
            if(repeat<10 && repeat>1)
            {
                s.push_back(repeat+48);
            }
            else
            {
                s.push_back(repeat/10+48);
                s.push_back(repeat%10+48);
            }
            cnt += repeat;
            if(cnt == chars.size())
            {
                break;
            }
        }
        chars.clear();
        for (int i = 0; i < s.size(); i++) {
            chars.push_back(s[i]);
        }
        return chars.size();
    }
};
int main()
{
    char arr[] = {'a','b','b','b','b','b','b','b','b','b','b','b','b'};
    vector<char> chars(arr, arr+sizeof(arr)) ;

    Solution a;
    a.compress(chars);
}
