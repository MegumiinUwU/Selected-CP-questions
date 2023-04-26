#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
 * C. Registration system
 * problem link : https://codeforces.com/problemset/problem/4/C
 * By Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

  deque<string> jojo1;
  deque<int> jojo2;
    int t;
    cin>>t;
    while (t--){
        string x;
        cin>>x;
        auto itr = find(jojo1.begin(),jojo1.end(),x);
        if (itr==jojo1.end()){
            jojo1.emplace_back(x);
            jojo2.emplace_back(0);
            cout<<"OK"<<'\n';
        } else{
            int temp = itr - jojo1.begin();
            jojo2[temp]++;
            cout<<x<<jojo2[temp]<<'\n';
        }


    }

            return 0;
    }