#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
 * B. Kill 'Em All
 * problem link : https://codeforces.com/contest/1238/problem/B
 * By Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;cin>>t;
    while (t--){
        deque<int> jojo;
        priority_queue<int,vector<int>,greater<int>>dio;
        int n,d,c=1,josuke;
        cin>>n>>d;
        for (int i = 0; i < n; ++i) {
            cin>>josuke;
            dio.emplace(josuke);
        }
        for (int i = 0; i < n; ++i) {
            jojo.emplace_back(dio.top());
            dio.pop();
        }
        int last_position = n-1;
        for (int i = n-2; i >=0 ; --i) {
            if (jojo[i]!=jojo[last_position]){
                last_position = i;
                if (jojo[i]-c*d <= 0){
                    break;
                } else{
                    c++;
                }
            }
        }
    cout<<c<<'\n';

    }



    return 0;
}