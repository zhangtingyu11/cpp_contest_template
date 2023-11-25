#include <bits/stdc++.h>
#include "basic/binary_search.hpp"

int find_smallest_bigger_than_or_equal_x(vector<int> &arr, int x){
    int l = 0;
    int r = arr.size();
    while(l < r){
        int mid = (l + r) >> 1;
        if(arr[mid] >= x){  
            r = mid;    // 说明在[l, mid]
        }else{  
            l = mid+1;  //说明在[mid+1, r]
        }
    }
    if(l < arr.size()) return arr[l];
    return -1;
}

int find_biggest_smaller_than_or_equal_x(vector<int> &arr, int x){
    int l = -1;
    int r = arr.size()-1;
    while(l < r){
        int mid = (l + r + 1) >> 1;
        if(arr[mid] <= x){  
            l = mid;    // 说明在[mid, r]
        }else{  
            r = mid-1;  //说明在[l, mid-1]
        }
    }
    if(l >= 0) return arr[l];
    return -1;
}

double sqrt_x_with_eps(int x, double eps){
    double l = 0.0l;
    double r = (double) x;
    while(l + eps < r){
        double mid = (l + r) / 2;
        if(mid*mid>=x){
            r = mid;
        }
        else{
            l = mid;
        }
    }
    return l;
}

double sqrt_x_with_loop(int x){
    double l = 0.0l;
    double r = (double) x;
    for(int i=0; i<100l; i++){
        double mid = (l + r) / 2;
        if(mid*mid>=x){
            r = mid;
        }
        else{
            l = mid;
        }
    }
    return l;
}



