
#include <bits/stdc++.h>
using namespace std;
vector<int> spf(1e5 + 10);
int main()
{
    // precompute section
    for (int i = 1; i <= 1e5; i++)
    {
        spf[i] = i;
    }
    for (int i = 2; i <= 1e5; i++)
    {
        if (spf[i] == i)
        {
            for (int k = 2 * i; k <= 1e5; k += i)
            {
                if (spf[k] == k)
                    spf[k] = i;
            }
        }
    }
    int tc;
    cin >> tc;
    // cout<<tc;
    for (int TT = 0; TT < tc; TT++)
    {
        int n;
        cin >> n;
        vector<int> res;
        while (n > 1)
        {
            int div = spf[n];
            while (n % div == 0)
            {
                res.push_back(div);
                n /= div;
            }
        }
        for (int x : res)
        {
            cout << x << " ";
        }
        cout << '\n';
    }

    return 0;
}