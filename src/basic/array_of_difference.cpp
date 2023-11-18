#include <bits/stdc++.h>
#include "basic/array_of_difference.hpp"
using namespace std;

vector<int> calculate_array_of_difference(vector<int> &arr, int n) {
    vector<int> diff(n+2, 0);
    for(int i=1; i<n+1; i++){
        diff[i] = arr[i]-arr[i-1];
    }
    return diff;
}

vector<int> interval_plus(vector<vector<int>> &ops, vector<int> &diff, int n){
    int m = ops.size();
    for(auto op: ops){
        int L = op[0];
        int R = op[1];
        int x = op[2];
        diff[L] += x;
        diff[R+1] -= x;
    }
    return diff;
}

vector<int> calculate_original_array(vector<int> &diff, int n){
    vector<int> arr(n+1, 0);
    for(int i=1; i<n+1; i++){
        arr[i] = arr[i-1]+diff[i];
    }
    return arr;
}

