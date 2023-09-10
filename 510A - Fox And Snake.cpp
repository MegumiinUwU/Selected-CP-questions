#include <bits/stdc++.h>
#define ll long long
using namespace std;
/*
 * A. Fox And Snake
 * Problem link : https://codeforces.com/problemset/problem/510/A
 * Solved by : Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int jojo=0;
    bool flag=true;
    while (n--){
        if (jojo%2==0){
            for (int i = 0; i < m; ++i) {
                cout<<'#';
            }
            cout<<'\n';

        } else{
            if (flag){
                for (int i = 0; i < m-1; ++i) {
                    cout<<'.';
                }
                cout<<'#'<<'\n';
                flag = false;
            } else{
                cout<<'#';
                for (int i = 0; i < m-1; ++i) {
                    cout<<'.';
                }
                cout<<'\n';
                flag = true;

            }
        }

        jojo++;
    }

    return 0;
}
