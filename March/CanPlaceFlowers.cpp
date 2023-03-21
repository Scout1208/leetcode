//
// Created by 李承彧 on 2023/3/20.
//

#include "CanPlaceFlowers.h"

bool Solution::canPlaceFlowers(vector<int> &flowerbed, int n) {
    int curr = 0;
    int pre = 0;
    int n = flowerbed.size();
    int cnt = 1;
    while(1){
        if(n == 0){
            return true;
        }
        if(cnt>flowerbed){
            break;
        }
        curr = flowerbed[cnt];
        pre = flowerbed[cnt-1];
        if(curr){
            cnt+=3;
        } else{
            if(!pre)
            {
                n-=1;
            }
            cnt+=2;
        }
    }
    return false;
}