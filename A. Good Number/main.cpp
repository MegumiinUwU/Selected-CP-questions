#include <bits/stdc++.h>
#define ll long long

/*
 * Problem link : hhttps://codeforces.com/problemset/problem/365/A
 * A. Good Number
 * By : Youssef Mohamed (MegumiinUwU)
 */

//jojo bizarre adventure is the best anime



/*             LAW
 * convert from char digit to int digit
 * char - '0' = int
 *
 */

using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
ll k,n,points=0;
cin>>n>>k;
string s;
    while (n--){
        ll jojo=0;
        cin>>s;
        for (char i = '0'; i <='0'+k ; ++i) {

            for (int j = 0; j < s.size(); ++j) {

                if (i == s[j]){
                    jojo++;
                    break;
                }

            }

        }
        
        if(jojo-1==k){
            points++;
        }


    }
cout<<points;
    return 0;
}
