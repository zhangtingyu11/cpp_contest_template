#pragma once
#include <bits/stdc++.h>
using namespace std;

/**
 * @brief 计算一个数组的差分数组
 * 
 * @param arr 原始数组
 * @param n 记录的数据的长度, 因为前面补0了, 所以arr长度应该是n+1
 * @return vector<int> 返回的差分数组, 长度为n+2
 差分数组的定义是: 以数组元素从1开始为例
 diff[0] = 0
 diff[1] = arr[1]
 diff[i] = arr[i]-arr[i-1]  不难看出差分数组的前缀和就是原数组
 diff[n+1] = 0
 //! 注意下面的实现, 是以arr[0]=0, arr[1]为数组第一个元素实现的
 */
vector<int> calculate_array_of_difference(vector<int> &arr, int n);

/**
 * @brief 根据区间加减计算更新后的差分数组
 * 
 * @param ops 多个操作组成的列表, 每一个操作包含[L, R, x], L表示区间左端点,R表示区间右端点,x表示区间要加的值, 区间是闭区间, 1<=L<=R<=n
 * @param diff 长度为n+2的差分数组
 * @param n 原始数组存储数据的长度
 * @return vector<int> 更新后的差分数组
 * 区间加可以表示为: diff[L] += x, diff[R+1] -= x
 */
vector<int> interval_plus(vector<vector<int>> &ops, vector<int> &diff, int n);

/**
 * @brief 通过差分数组计算原数组
 * 
 * @param diff 长度为n+2的差分数组
 * @param n 原始数组存储数据的长度
 * @return vector<int> 计算出的原数组
 */
vector<int> calculate_original_array(vector<int> &diff, int n);