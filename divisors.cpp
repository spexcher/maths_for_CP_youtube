
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<int> factors;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        { // i | n
            factors.insert(i);
        }
    }
    for (int x : factors)
    {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}