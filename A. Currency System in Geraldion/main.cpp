#include <bits/stdc++.h>
#define ll long long
using namespace std;




/*
 * Problem link : https://codeforces.com/contest/560/problem/A
 * A. Currency System in Geraldion
 * By : Youssef Mohamed (MegumiinUwU)
 */


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
ll n;cin>>n;
ll x[n];

    for (int i = 0; i < n; ++i) {
        cin>>x[i];
    }
    sort(x,x+n);
    if (x[0]==1){
        cout<<-1;
    } else{
        cout<<1;
    }
    return 0;
}
