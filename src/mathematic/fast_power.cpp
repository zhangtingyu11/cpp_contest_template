/**
 * @file fast_power.cpp
 * @author Grapymage (zhangty21@mails.jlu.edu.cn)
 * @brief 
 * @version 0.1
 * @date 2023-11-14
 * 
 * @copyright Copyright (c) 2023
 * 本质上是将指数化为二进制, 依次计算a^1, a^2, a^4, ..., a^(2^n)
 */

#include "mathematic/fast_power.hpp"
int fast_power(int a, int b){
    if(a==0){
        return 0;
    }
    int res = 1;
    while(b){
        if(b & 1){
            res *= a;
        }
        a *= a;
        b >>= 1;
    }
    return res;
}

long long fast_power_mod_p(long long a, long long b, long long p){
    if(a==0){
        return 0;
    }
    long long res = 1;
    while(b){
        if(b & 1){
            res = (res * a) % p;
        }
        a = (a * a) % p;
        b >>= 1;
    }
    return res;
}