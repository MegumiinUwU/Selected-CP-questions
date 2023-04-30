#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
 * A. Tit for Tat
 * problem link : https://codeforces.com/problemset/problem/1516/A
 * By Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
ll n;
cin>>n;
    while (n--){
        ll x,k;
        cin>>x>>k;
        ll arr[x];
        for (int i = 0; i < x; ++i) {
            cin>>arr[i];
        }
        ll t=0,tmp=0;
        while (k--){
            while (!arr[t] && t<x-1){
                t++;
            }
            arr[t]--;
            arr[x-1]++;

        }
        for (int i = 0; i < x; ++i) {
            cout<<arr[i]<<" ";
        }
        cout<<'\n';





    }

    return 0;
}
