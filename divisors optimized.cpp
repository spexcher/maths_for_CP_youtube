
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    set<ll> factors;
    for (ll i = 1; (i * i) <= n; i++)
    {
        if (n % i == 0)
        { // i | n
            factors.insert(i);
            if (n / i != i)
                factors.insert(n / i);
        }
    }
    for (ll x : factors)
    {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}