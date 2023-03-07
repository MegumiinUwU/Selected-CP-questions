#include <bits/stdc++.h>
#define ll long long

/*
 * Problem link : https://codeforces.com/contest/467/problem/A
 * George and Accommodation
 * By : Youssef Mohamed (MegumiinUwU)
 */

//jojo bizarre adventure is the best anime




using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n,jojo,dio,rooms=0;
cin>>n;
    while (n--){
       cin>>jojo>>dio;

       if((dio-jojo)>=2){
           rooms+=1;
       }

    }
cout<<rooms;

    return 0;
}
