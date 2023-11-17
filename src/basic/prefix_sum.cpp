#include <bits/stdc++.h>
#include "basic/prefix_sum.hpp"
using namespace std;

vector<int> calc_prefix_sum_1D(int n, vector<int>& a){
    vector<int> prefix_sum(n+1, 0);
    prefix_sum[0]=0;
    for(int i=1;i<=n;i++){
        prefix_sum[i]=prefix_sum[i-1]+a[i-1];
    }
    return prefix_sum;
}
vector<vector<int>> calc_prefix_sum_2D(int m, int n, vector<vector<int>>& a){
    vector<vector<int>> prefix_sum(m+1, vector<int>(n+1, 0));
    //* 分配内存, 初始化第一列为0
    for(int i=0;i<=m;i++){
        prefix_sum[i][0]=0;
    }
    //* 初始化第一行为0
    for(int j=0; j<=n;j++){
        prefix_sum[0][j]=0;
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            prefix_sum[i][j] = a[i-1][j-1];
            prefix_sum[i][j]+=prefix_sum[i][j-1]+prefix_sum[i-1][j]-prefix_sum[i-1][j-1];
        }
    }
    return prefix_sum;
}