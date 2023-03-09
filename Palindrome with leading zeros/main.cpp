#include <bits/stdc++.h>
#define ll long long

/*
 * Problem link : https://atcoder.jp/contests/abc198/tasks/abc198_b
 * Palindrome with leading zeros
 * By : Youssef Mohamed (MegumiinUwU)
 */

//jojo bizarre adventure is the best anime

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, jojo;
    cin>>s;

    while (s.back()=='0'){
        s.pop_back();
    }

    jojo =s;
    std::reverse(jojo.begin(), jojo.end());
      if (s == jojo ){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }


    return 0;
}
