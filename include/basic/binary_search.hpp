#pragma once
#include <bits/stdc++.h>
using namespace std;

/**
 * @brief 在递增数组中找到大于等于x的最小的数
 * 
 * @param arr 数组
 * @param x 要比较的数
 * @return int 找到的数, 如果找不到就是-1
 整数上的二分
 写法一: r = mid, l = mid+1, mid = (l + r) >> 1, 这种情况下mid不会取到r, 可以将初始的搜索范围[L, R]设置成[L, R+1], 如果最后l==R+1就是无解
 */
int find_smallest_bigger_than_or_equal_x(vector<int> &arr, int x);

/**
 * @brief 在递增数组中找到小于等于x的最大的数
 * 
 * @param arr 数组
 * @param x 要比较的数
 * @return int 找到的数, 如果找不到就是-1
 整数上的二分
 写法二: r = mid-1, l = mid, mid = (l + r + 1) >> 1, 这种情况下mid不会取到l, 可以将初始的搜索范围[L, R]设置成[L-1, R], 如果最后l==L-1就是无解
 */
int find_biggest_smaller_than_or_equal_x(vector<int> &arr, int x);

/**
 * @brief 求x的平方根, 要求和真实数据的差值在eps以内
 * 
 * @param x 要求平方根的数
 * @param eps 误差
 * @return double 平方根 
 实数域上的二分
 写法一: 给出误差的范围, 需要把while(l < r)改成while(l + eps < r), 另外内部更新是l=mid和r=mid
 */
double sqrt_x_with_eps(int x, double eps);

/**
 * @brief 求x的平方根
 * 
 * @param x 要求平方根的数
 * @return double 平方根 
 实数域上的二分
 写法二: 把while(l < r)改成固定循环一定次数(100), 内部更新是l=mid和r=mid
 */
double sqrt_x_with_loop(int x);

