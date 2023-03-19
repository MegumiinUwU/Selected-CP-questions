#include <bits/stdc++.h>
#define ll long long
using namespace std;


/*
 * Problem link : https://codeforces.com/problemset/problem/490/A
 * A. Team Olympiad
 * By : Youssef Mohamed (MegumiinUwU)
 */




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n,t1=0,t2=0,t3=0,tt=0;
cin>>n;

deque<int> jojo1,jojo2,jojo3;
    for (int i = 0; i < n; ++i) {
        int q;
        cin>>q;
        if (q==1){
            t1++;
        }
        if (q==2){
            t2++;
        }
        if (q==3){
            t3++;
        }
        if (t1>0 && t2>0 && t3>0){
            tt++;
            t1--;
            t2--;
            t3--;
        }
        if (q==1){
            jojo1.emplace_back(i+1);
        }
        if (q==2){
            jojo2.emplace_back(i+1);
        }
        if (q==3){
            jojo3.emplace_back(i+1);
        }
    }
    cout<<tt<<'\n';

    while (tt--){

        cout<<jojo1[0]<<" "<<jojo2[0]<<" "<<jojo3[0]<<" "<<'\n';
        jojo1.pop_front();
        jojo2.pop_front();
        jojo3.pop_front();

    }

    return 0;
}
