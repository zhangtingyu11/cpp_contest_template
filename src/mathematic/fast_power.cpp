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
long long fast_power(long long a, long long b){
    long long res = 1;
    while(b > 0){
        if (b & 1) res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

long long fast_power_mod_p(long long a, long long b, long long p){
    a %= p;
    long long res = 1;
    while(b>0){
        if(b&1) res = res * a % p;
        a = a * a % p;
        b >>= 1;
    }
    return res;
}