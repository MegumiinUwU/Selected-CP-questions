#include <bits/stdc++.h>
#define ll long long
using namespace std;


/*
 * Problem link : https://codeforces.com/problemset/problem/300/A
 * A. Array
 * By : Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n,jojo,neg=0;
cin>>n;
deque<int> x,y,z,s;
    for (int i = 0; i < n; ++i) {
        cin>>jojo;
        x.emplace_back(jojo);
        if(jojo<0){
            neg++;
        }

    }

    sort(x.begin(),x.end());
    int a=1,b=1;

    while (x.size()!=0) {
        if (neg>2){
            y.emplace_back(x[0]);
            y.emplace_back(x[1]);
            x.pop_front();
            x.pop_front();
            neg=neg-2;
            continue;
        }
        if(neg==2){
            s.emplace_back(x[0]);
            z.emplace_back(x[1]);
            x.pop_front();
            x.pop_front();
            neg=neg-2;
            continue;
        }
        if (neg==1){
            s.emplace_back(x[0]);
            x.pop_front();
            neg=0;
            continue;
        }
        if(x[0]>0){
            y.emplace_back(x[0]);
            x.pop_front();
        } else{
            z.emplace_back(x[0]);
            x.pop_front();
        }


    }
    cout<<s.size()<<" ";
    for (int j = 0; j < s.size(); ++j) {
        cout<<s[j]<<" ";
    }
    cout<<'\n'<<y.size()<<" ";
    for (int j = 0; j < y.size(); ++j) {
        cout<<y[j]<<" ";
    }
    cout<<'\n'<<z.size()<<" ";
    for (int j = 0; j < z.size(); ++j) {
        cout<<z[j]<<" ";
    }

    return 0;
}
