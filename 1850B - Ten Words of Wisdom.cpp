#include <bits/stdc++.h>
#define ll long long
using namespace std;
/*
 * B. Ten Words of Wisdom
 * Problem link : https://codeforces.com/problemset/problem/1850/B
 * Solved by : Youssef Mohamed (MegumiinUwU)
 */



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--){

        int k,a,b,jojo=0,jojo2=0,indx=0;
        cin>>k;
        for (int i = 0; i < k; ++i) {
            cin>>a>>b;
            if (a<=10){
                jojo2=jojo;
                jojo= max(jojo,b);
                if (jojo>jojo2){
                    indx=i+1;
                }
            }
        }
        cout<<indx<<'\n';

   }

    return 0;
}
