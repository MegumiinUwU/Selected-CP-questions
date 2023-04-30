#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
 * A. Difference Row
 * problem link : https://codeforces.com/problemset/problem/347/A
 * By Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n;
cin>>n;
int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    sort(arr,arr+n);
cout<<arr[n-1]<<" ";
    for (int i = 1; i <n-1 ; ++i) {
        cout<<arr[i]<<" ";
    }
    cout<<arr[0];

    return 0;
}
