#include <bits/stdc++.h>
#define ll long long
using namespace std;
/*
 * A. Twins
 * Problem link : https://codeforces.com/contest/160/problem/A
 * Solved by : Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    deque<int> jojo;
    int n,x,sum=0,stolen=0,taken=0;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>x;
        jojo.emplace_back(x);
        sum+=x;
    }
    sort(jojo.begin(),jojo.end());
    while (sum>=stolen){
        stolen+=jojo.back();
        sum-=jojo.back();
        jojo.pop_back();
        taken++;

    }
    cout<<taken;
    return 0;
}
