//
// Created by 李承彧 on 2023/3/3.
//
#include <iostream>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle)
    {
        int cnt = 0;
        int len;
        if(needle.size() > haystack.size())
        {
            return -1;
        }
        else
        {
            return haystack.find(needle);
        }
    }
};
//class Solution {
//public:
//    int strStr(string haystack, string needle) {
//        int m = haystack.length();
//        int n = needle.length();
//
//        if (n == 0) {
//            return 0;
//        }
//
//        for (int i = 0; i <= m - n; i++) {
//            int j;
//            for (j = 0; j < n; j++) {
//                if (haystack[i+j] != needle[j]) {
//                    break;
//                }
//            }
//            if (j == n) {
//                return i;
//            }
//        }
//
//        return -1;
//    }
//};
int main()
{
    string haystack = "sadbutsad";
    string needle = "sad";
//    string haystack = "leetcode", needle = "leeto";
    Solution a;
    cout<<a.strStr(haystack,needle)<<'\n';
}