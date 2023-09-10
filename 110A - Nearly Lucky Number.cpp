#include <bits/stdc++.h>
#define ll long long
using namespace std;
/*
 * A. Nearly Lucky Number
 * Problem link : https://codeforces.com/problemset/problem/110/A
 * Solved by : Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    int luck=0;
    while (n!=0){
        if(n%10==7 || n%10==4){
            luck++;
        }
        n=n/10;

    }
    if (luck==4 || luck==7){
        cout<<"YES";
    } else{
        cout<<"NO";
    }
    return 0;
}
