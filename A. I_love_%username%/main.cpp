#include <bits/stdc++.h>
#define ll long long
using namespace std;




/*
 * Problem link : https://codeforces.com/problemset/problem/155/A
 * A. I_love_%username%
 * By : Youssef Mohamed (MegumiinUwU)
 */






int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int x,n,counter=0,maxx=0,minn=50000;
deque<int> jojo;
cin>>n;
    while (n--){
        cin>>x;
        jojo.emplace_back(x);
    }
    for (int i = 0; i < jojo.size(); ++i) {

        if(i==0){
            maxx = max(maxx,jojo[i]);
            minn = min(minn,jojo[i]);
            continue;
        } else if(maxx>=jojo[i]){
            counter+=0;
        } else{
            counter++;
            maxx = max(maxx,jojo[i]);


        }

        if (minn<=jojo[i]){
            counter+=0;
        } else{
            counter++;
            minn = min(minn,jojo[i]);
        }


    }
    cout<<counter;

    return 0;
}
