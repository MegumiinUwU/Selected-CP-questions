#include <bits/stdc++.h>
#define ll long long
using namespace std;


/*
 * Problem link : https://www.hackerrank.com/challenges/array-left-rotation/problem
 * Left Rotation
 * By : Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
ll n,d,cc;
cin>>n>>d;
ll  jojo1[n];
    for (ll i = 0; i < n; ++i) {
        cin>>cc;
        ll tmp;
        tmp= i-d;
        if (tmp<0){
            tmp = ((n-1) - abs(tmp) +1);
            jojo1[tmp]=cc;
        } else{
            jojo1[tmp]=cc;
        }

    }

    for (int i = 0; i < n; ++i) {
        cout<<jojo1[i]<<" ";
    }

    return 0;
}
