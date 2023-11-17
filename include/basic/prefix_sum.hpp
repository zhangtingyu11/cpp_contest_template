#pragma once
#include <bits/stdc++.h>
using namespace std;

/**
 * @brief 计算一维数组的前缀和
 * 
 * @param n 一维数组的长度
 * @param a 一维数组
 * @return vector<int> 前缀和数组
 //! 记前缀和数组为prefix_sum, 返回的数组长度为n+1, prefix_sum[i+1]为原数组前i个元素的前缀和
 */
vector<int> calc_prefix_sum_1D(int n, vector<int>& a);

/**
 * @brief 计算二维数组的前缀和
 * 
 * @param m 数组的行数
 * @param n 数组的列数
 * @param a 二维数组
 * @return vector<vector<int>> 前缀和数组
 //! 记前缀和数组为prefix_sum, 返回的数组长度为(m+1)*(n+1), prefix_sum[i+1][j+1]为原数组第i行第j列的前缀和
 */
vector<vector<int>> calc_prefix_sum_2D(int m, int n, vector<vector<int>>& a);
