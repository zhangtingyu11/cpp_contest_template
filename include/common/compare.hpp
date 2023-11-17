#pragma once
#include <bits/stdc++.h>
using namespace std;

/**
 * @brief 比较两个数组是否相等
 * 
 * @param arr1 第一个数组
 * @param m 第一个数组的长度
 * @param arr2 第二个数组
 * @param n 第二个数组的长度
 * @return true 两个数组相等
 * @return false 两个数组不相等
 */
bool check_two_arrays_equal(vector<int> &arr1, int m, vector<int> &arr2, int n);

/**
 * @brief 比较两个二维数组是否相等
 * 
 * @param matrix1 第一个二维数组
 * @param m1 第一个二维数组的行数
 * @param n1 第一个二维数组的列数
 * @param matrix2 第二个二维数组
 * @param m2 第二个二维数组的行数
 * @param n2 第二个二维数组的列数
 * @return true 两个二维数组相等
 * @return false 两个二维数组不相等
 */
bool check_two_matrics_equal(vector<vector<int>> &matrix1, int m1, int n1, vector<vector<int>> &matrix2, int m2, int n2);

