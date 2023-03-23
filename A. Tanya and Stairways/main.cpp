#include <bits/stdc++.h>
#define ll long long
using namespace std;


/*
 * problem link : https://codeforces.com/problemset/problem/1005/A
 * A. Tanya and Stairways
 * By : Youssef Mohamed (MegumiinUwU)
 */


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n,x,tt=0;
deque<int> jojo1,jojo2;
cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>x;
        jojo1.emplace_back(x);
    }
    for (int i = 0; i < n; ++i) {
        if (jojo1[i]==1 && i>0){
            jojo2.emplace_back(tt);
            tt=1;
        } else{
            tt++;
        }
        if (i==n-1){
            jojo2.emplace_back(tt);
            break;
        }
    }
cout<<jojo2.size()<<'\n';
    for (int i = 0; i < jojo2.size(); ++i) {
        cout<<jojo2[i]<<" ";
    }
    return 0;
}


