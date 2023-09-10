#include <bits/stdc++.h>
#define ll long long
using namespace std;
/*
 * A. Restoring Three Numbers
 * Problem link : https://codeforces.com/problemset/problem/1154/A
 * Solved by : Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x,y,z,w;
    cin>>x>>y>>z>>w;
    ll sum;
    sum = max(x,y);
    sum= max(sum,z);
    sum= max(sum,w);
    ll jojo,jojo2,jojo3,jojo4;
    jojo=sum-x;
    jojo2=sum-y;
    jojo3=sum-z;
    jojo4=sum-w;
    if (jojo!=0){
        cout<<jojo<<" ";
    }
    if (jojo2!=0){
        cout<<jojo2<<" ";
    }
    if (jojo3!=0){
        cout<<jojo3<<" ";
    }
    if (jojo4!=0){
        cout<<jojo4<<" ";
    }


    return 0;
}
