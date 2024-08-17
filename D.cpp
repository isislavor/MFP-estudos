#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < n; i++)
 
int main()
{
    ll n;
    cin >> n;
    ll val = 1;
    ll k = 0;
    
    while (((ll)1 << k) <= n)
    {        
        k++;
    }
    cout << k-1 << endl;
    return 0;
}