#include <bits/stdc++.h>
#define ll long long
using namespace std;




/*
 * Problem link : https://codeforces.com/contest/337/problem/A
 * A. Puzzles
 * By : Youssef Mohamed (MegumiinUwU)
 */


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n,m,x,dio=0;
cin>>n>>m;
deque<int> jojo;
int tmp = m;
    while (m--){
        cin>>x;
        jojo.emplace_back(x);
    }
    sort(jojo.begin(),jojo.end());
    int diff=100000;int diff2;
    for (int i = tmp-1; i >=0 ; --i) {

        if (i-n+1 >= 0){
            int z=(i-n+1);
            diff2 = (jojo[i]-jojo[z]);
        }
        diff= min(diff,diff2);
    }

cout<<diff;


    return 0;
}
