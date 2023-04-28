#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
 * A. Cancel the Trains
 * problem link : https://codeforces.com/problemset/problem/1453/A
 * By Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;cin>>t;
    while (t--){
        deque<int> jojo;
        int x,y,n,m,counter = 0;
        cin>>n>>m;
        for (int i = 0; i < n; ++i) {
            cin>>x;
            jojo.emplace_back(x);
        }

        for (int i = 0; i < m; ++i) {
            cin>>y;
            auto it = find(jojo.begin(),jojo.end(),y);
            if (it == jojo.end()){
                continue;
            } else{
                counter++;
            }
        }

        cout<<counter<<'\n';

    }



    return 0;
}