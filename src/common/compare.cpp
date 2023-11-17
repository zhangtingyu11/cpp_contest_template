#include <bits/stdc++.h>
#include "common/compare.hpp"

bool check_two_arrays_equal(int arr1[], int m, int arr2[], int n){
    if(m!=n){
        return false;
    }
    for(int i=0; i < n; i+=1){
        if(arr1[i]!=arr2[i]) return false;
    }
    return true;
}