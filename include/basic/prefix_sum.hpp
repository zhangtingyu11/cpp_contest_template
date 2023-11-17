#pragma once

/**
 * @brief 计算一维数组的前缀和
 * 
 * @param n 一维数组的长度
 * @param a 一维数组
 * @return int* 前缀和数组
 //! 记前缀和数组为prefix_sum, 返回的数组长度为n+1, prefix_sum[i+1]为原数组前i个元素的前缀和
 */
int* calc_prefix_sum_1D(int n, int a[]);


