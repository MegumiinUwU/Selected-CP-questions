#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
 * A. Bulbs
 * problem link : https://codeforces.com/problemset/problem/615/A
 * By Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<int> jojo;
    int n,m;
    cin>>n>>m;
    while (n--){
        int x;
        cin>>x;
        for (int i = 0; i < x; ++i) {
            int y;
            cin>>y;
            jojo.emplace(y);
        }


    }

    if (jojo.size()==m){
        cout<<"YES";
    } else{
        cout<<"NO";
    }

    return 0;
}