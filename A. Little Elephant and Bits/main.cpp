#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
 * A. Little Elephant and Bits
 * problem link : https://codeforces.com/problemset/problem/258/A
 * By Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    ll n = s.size();
    for (int i = 0; i <s.size() ; ++i) {
        if (s[i]=='0'&& i!=s.size()-1){
            s.erase(i,1);
            break;
        }
    }
    if (s.size()==n){
        s.pop_back();
        cout<<s;
    } else{
        cout<<s;
    }

    return 0;
}
