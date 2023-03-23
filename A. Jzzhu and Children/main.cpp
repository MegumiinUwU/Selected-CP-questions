#include <bits/stdc++.h>
#define ll long long
using namespace std;


/*
 * problem link : https://codeforces.com/problemset/problem/450/A
 * A. Jzzhu and Children
 * By : Youssef Mohamed (MegumiinUwU)
 */


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n,m,x;
deque<int> jojo1,jojo2;
cin>>n>>m;
    for (int i = 0; i < n; ++i) {
        cin>>x;
        jojo1.emplace_back(x);
        jojo2.emplace_back(i);
    }
    int t;
    while (jojo1.size()!=0){
        if (jojo1[0]<=m){
            jojo1.pop_front();
            t=jojo2.back();
            jojo2.pop_front();
        }
        else{
            jojo1[0]=jojo1[0]-m;
            jojo1.emplace_back(jojo1[0]);
            jojo1.pop_front();
            jojo2.emplace_back(jojo2[0]);
            jojo2.pop_front();

        }
    }
    cout<<t+1;

    return 0;
}


