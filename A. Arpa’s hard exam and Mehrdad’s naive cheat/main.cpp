#include <bits/stdc++.h>
#define ll long long
using namespace std;
/*
 * A. Arpa’s hard exam and Mehrdad’s naive cheat
 * Problem link : https://codeforces.com/contest/742/problem/A
 * Solved by : Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    if (n==0){
        cout<<1;
    }
    else if (n%4==0){
        cout<<6;
    }
    else if (n%2==0){
        cout<<4;
    }
    else if ((n-1)%4==0){
        cout<<8;
    } else{
        cout<<2;;
    }

    return 0;
}
