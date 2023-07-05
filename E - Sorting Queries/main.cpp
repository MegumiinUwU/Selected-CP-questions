#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
 * E - Sorting Queries
 * problem link : https://atcoder.jp/contests/abc217/tasks/abc217_e
 * By Youssef Mohamed (MegumiinUwU)
 */




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
ll n;
cin>>n;
priority_queue<int, vector<int>, greater<int>> jojo;
queue<int> jojo2;
    int i = 0;
int t = 0;
    while (n--){
        int a,x;
        cin>>a;
        if (a==1){
            cin>>x;
            jojo2.emplace(x);

        } else if (a==2){
            if (jojo.empty()){
                cout<<jojo2.front()<<'\n';
                jojo2.pop();
            } else{
                cout<<jojo.top()<<'\n';
                jojo.pop();
            }

        } else{
            while (!jojo2.empty()){
                jojo.emplace(jojo2.front());
                jojo2.pop();
            }

        }




    }

    return 0;
}
