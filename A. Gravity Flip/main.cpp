#include <bits/stdc++.h>
#define ll long long
using namespace std;




/*
 * Problem link : https://codeforces.com/problemset/problem/405/A
 * A. Gravity Flip
 * By : Youssef Mohamed (MegumiinUwU)
 */


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n,x;
deque<int> jojo;
cin>>n;
while(n--){
    cin>>x;
    jojo.emplace_back(x);

}
    std::sort(jojo.begin(), jojo.end());
    for (int i = 0; i <jojo.size() ; ++i) {
        cout<<jojo[i]<<" ";
    }

    return 0;
}
