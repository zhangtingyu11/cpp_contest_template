#include <bits/stdc++.h>
#include "basic/prefix_sum.hpp"
using namespace std;

int* calc_prefix_sum_1D(int n, int a[]){
    int *prefix_sum = new int[n+1];
    prefix_sum[0]=0;
    for(int i=1;i<=n;i++){
        prefix_sum[i]=prefix_sum[i-1]+a[i-1];
    }
    return prefix_sum;
}
