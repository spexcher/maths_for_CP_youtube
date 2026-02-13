
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll N;
    cin >> N;
    vector<bool> prime(N, true);
    prime[0] = prime[1] = false;
    for (int n = 2; n <= N; n++)
    {
        if (prime[n])
        {
            for (int i = n * n; i <= N; i+=n)
            {
                prime[i] = false;
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