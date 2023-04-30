#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
 * A. Replacing Elements
 * problem link : https://codeforces.com/problemset/problem/1473/A
 * By Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
    while (t--){
        int n,m;
        bool flag = false;
        cin>>n>>m;
        int arr[n];
        for (int i = 0; i <n ; ++i) {
            cin>>arr[i];
            if (arr[i]>m){
                flag = true;
            }
        }
        if (flag){
            sort(arr,arr+n);
            if (arr[0]+arr[1]<=m){
                cout<<"YES"<<'\n';
            } else{
                cout<<"NO"<<'\n';
            }
        } else{
            cout<<"YES"<<'\n';
        }






    }

    return 0;
}