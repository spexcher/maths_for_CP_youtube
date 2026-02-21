
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll N;
    cin >> N;
    vector<bool> prime(N, true);
    prime[1]=false;
    for (int n = 1; n <= N; n++)
    {
        for (ll i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                prime[n] = false;
            }
        }
    }
    for (int n = 1; n <= N; n++)
    {
        if (prime[n] == true)
        {
            cout << n << " is prime\n";
        }
        else
            cout << n << " is not a prime\n";
    }
    return 0;
}