#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*
 * A. Shaass and Oskols
 * problem link : https://codeforces.com/problemset/problem/294/A
 * By Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int wires;
    cin>>wires;
    int jojo[wires];
    for (int i = 0; i < wires; ++i) {
        cin>>jojo[i];
    }
    int m;
    cin>>m;
    for (int i = 0; i < m; ++i) {
        int jj,shot,tmp1,tmp2;
        cin>>jj>>shot;
        tmp1=jojo[jj-1]-shot;
        tmp2 = jojo[jj-1] - tmp1-1;
        if (jj-1 !=0 && jj-1 != wires-1){
            jojo[jj]+=tmp1;
            jojo[jj-2]+=tmp2;
            jojo[jj-1]=0;
        } else if (jj-1 == 0 && jj-1 != wires-1){
            jojo[jj]+=tmp1;
            jojo[jj-1]=0;
        } else if (jj-1 !=0 && jj-1 == wires-1){
            jojo[jj-2]+=tmp2;
            jojo[jj-1]=0;
        } else{
            jojo[jj-1]=0;
        }

    }
    for (int i = 0; i < wires; ++i) {
        cout<<jojo[i]<<'\n';
    }

    return 0;
}