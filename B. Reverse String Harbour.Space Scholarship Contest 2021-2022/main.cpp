#include <bits/stdc++.h>
#define ll long long

/*
 * Problem link : https://codeforces.com/contest/1553/problem/B
 * B. Reverse String
 * By : Youssef Mohamed (MegumiinUwU)
 */

//jojo bizarre adventure is the best anime

using namespace std;

string rev(string s) {
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

int t;
cin>>t;
    while (t--){
        string s1,s2;
        bool  flag = 0;
        cin>>s1>>s2;

        for (int i = 0; i < s1.size(); i++)

            if (s1[i] == s2[0]) {
                for (int j = 0; j < s2.size() && j + 1 <= s1.size() - i; j++) {
                    if (s2.substr(1, j) == s1.substr(i + 1, j)) {
                        int jojoforward = i + j;          //taken part (el mta5ed fi el forward move to left) from s1
                        int jojobackward = s2.size() - j - 1;    //reminder part (el mtba2y)

                        if (jojobackward <= jojoforward && s2.substr(1 + j) == rev(s1.substr(jojoforward - jojobackward, jojobackward))) {
                            flag = 1;
                        }





                    }

                }

            }






        if(flag){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }

    }



    return 0;
}
