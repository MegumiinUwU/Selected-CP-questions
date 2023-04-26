#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
 * B. Chat Order
 * problem link : https://codeforces.com/contest/637/problem/B
 * By Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    stack<string> jojo1;
    set<string> jojo2 ;
    int x;
    cin>>x;
    int xx =x;
    while (x--){
        string s;
        cin>>s;
        jojo1.emplace(s);
    }
    for (int i = 0; i < xx; ++i) {
        if (!jojo2.count(jojo1.top())){
            jojo2.emplace(jojo1.top());
            cout<<jojo1.top()<<'\n';

        } jojo1.pop();
    }

    return 0;
}