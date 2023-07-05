#include <bits/stdc++.h>
#define ll long long
using namespace std;
/*
 * A. Anton and Danik
 * Problem link : https://codeforces.com/contest/734/problem/A
 * Solved by : Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char s;
    ll n, a=0,d=0;
    cin>>n;
    for (ll i = 0; i < n; ++i) {
        cin>>s;
        if (s=='A'){
            a++;
        } else{
            d++;
        }
    }
    if (a>d){
        cout<<"Anton";
    }
    else if (a<d){
        cout<<"Danik";
    } else{
        cout<<"Friendship";
    }
    return 0;
}
