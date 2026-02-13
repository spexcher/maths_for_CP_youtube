
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    // if n is prime
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not prime";
            return 0;
        }
    }
    cout << "Prime";
    return 0;
}