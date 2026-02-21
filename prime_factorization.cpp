
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 12
    //  2 2 3
    int N;
    cin >> N;

    vector<bool> sieve(sqrt(N) + 1, true);
    sieve[1] = false;
    for (int n = 1; n <= sqrt(N); n++)
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                sieve[n] = false;
            }
        }
    }
    vector<int> res;
    for (int i = 2; i <= sqrt(N); i++)
        if (sieve[i])
            while (N % i == 0)
                res.push_back(i), N /= i;
    for(int x:res){
        cout<<x<<" ";
    }
    return 0;
}