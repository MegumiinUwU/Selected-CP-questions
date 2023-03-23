#include <bits/stdc++.h>
#define ll long long
using namespace std;


/*
 * problem link : https://codeforces.com/contest/1650/problem/D
 * D. Twist the Permutation
 * By : Youssef Mohamed (MegumiinUwU)
 */


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
    while (t--) {
        int n;
        cin>>n;
        deque<int>jojo,jojo2;
        for (int i = 0; i < n; ++i) {
            int x;
            cin>>x;
            jojo.emplace_back(x);
        }
        for (int i = n-1; i >0 ; --i) {
            int position = find(jojo.begin(),jojo.end(),i+1) - begin(jojo);
            int shift = (position+1) % (i+1);
            jojo2.emplace_front(shift);
            rotate(jojo.begin(),jojo.begin()+shift,jojo.begin()+i+1);
        }
        jojo2.emplace_front(0);

        for (int i = 0; i < jojo2.size(); ++i) {
            cout<<jojo2[i]<<" ";
        }
cout<<'\n';



    }

    return 0;
}


