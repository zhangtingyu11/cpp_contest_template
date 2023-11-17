#include <bits/stdc++.h>
#include "common/compare.hpp"
using namespace std;

bool check_two_arrays_equal(vector<int> &arr1, int m, vector<int> &arr2, int n){
    if(m!=n){
        return false;
    }
    for(int i=0; i < n; i+=1){
        if(arr1[i]!=arr2[i]) return false;
    }
    return true;
}

bool check_two_matrics_equal(vector<vector<int>> &matrix1, int m1, int n1, vector<vector<int>> &matrix2, int m2, int n2){
    if(m1 != m2 or n1 != n2){
        return false;
    }
    for(int i=0; i<m1; i++){
        for(int j=0; j<n1; j++){
            if(matrix1[i][j]!=matrix2[i][j]){
                return false;
            }
        }
    }
    return true;
}
