#include <bits/stdc++.h>
#define ll long long
using namespace std;




/*
 * Problem link : https://codeforces.com/contest/1015/problem/C
 * C. Songs Compression
 * By : Youssef Mohamed (MegumiinUwU)
 */


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
ll n,m,x,y,jojo=0,sum=0;
cin>>n>>m;
ll a[n];
    for (ll i = 0; i < n; ++i) {
        cin>>x>>y;
        sum+=x;
        a[i]=x-y;
    }
    sort(a,a+n);
    reverse(a,a+n);
    ll i=0;
    while (sum>m && n--){
        sum-=a[i];
        i++;
    }
    if(sum>m){
        cout<<-1;
    } else{
        cout<<i;
    }
    return 0;
}
