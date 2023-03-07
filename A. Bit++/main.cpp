#include <bits/stdc++.h>
#define ll long long

/*
 * Problem link : https://codeforces.com/problemset/problem/282/A
 * A. Bit++
 * By : Youssef Mohamed (MegumiinUwU)
 */

//jojo bizarre adventure is the best anime




using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int jojo,x=0;
cin>>jojo;
string s;
    while (jojo>0){
        cin>>s;

        if (s== "X++" || s== "++X" || s=="++X"){

            x++;

        }

        else{
            x--;
        }

    jojo--;
    }
cout<<x;

    return 0;
}
