#include <bits/stdc++.h>
#define ll long long
using namespace std;
/*
 * A. To My Critics
 * Problem link : https://codeforces.com/problemset/problem/1850/A
 * Solved by : Youssef Mohamed (MegumiinUwU)
 */

// 0ms solution

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {

    int a, b, c, sum = 0;
    cin >> a >> b >> c;
    if ((a >= b && b >= c) || (b >= a && a >= c)) {
        sum = a + b;
    }
    if ((a >= b && c >= b) || (c >= a && a >= b)) {
        sum = a + c;
    }

    if ((b >= a && c >= a) || (c >= a && b >= a)) {
        sum = b + c;
    }
    if (sum >= 10) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
   }

    return 0;
}
