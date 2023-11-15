#pragma once
/**
 * @brief 快速计算pow(a, b)
 * 
 * @param a 底数
 * @param b 指数
 * @return long long pow(a, b)的值
 */
long long fast_power(long long a, long long b);

/**
 * @brief 快速计算pow(a, b) mod p
 * ! 注意取值范围, 如果p * p < int的最大值(2,147,483,647), 那就可以将long long都改成int
 * @param a 底数
 * @param b 指数
 * @param p 模数
 * @return long long pow(a, b) mod p的值
 */
long long fast_power_mod_p(long long a, long long b, long long p);