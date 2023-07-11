#include <bits/stdc++.h>
#define ll long long
using namespace std;
/*
 * A. New Password
 * Problem link : https://codeforces.com/contest/770/problem/A
 * Solved by : Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    string s = "";
    char c = 'a';
    while (k--){
        s+=c;
        c++;
        if (c>'z'){
            break;
        }
    }
    int jojo = 0;
    while (s.size()!=n){
        s+=s[jojo];
        jojo++;
    }

    cout<<s;

    return 0;
}
