#include <bits/stdc++.h>
#define fu(i, n) for (ll i = 0; i < n; i++)
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> P;

int main()
{
    ll n;
    cin >> n;
    vector<ll> y(n), x(n);
    fu(i, n)
    {
        cin >> y[i];
        cin >> x[i];
    }
    fu(i, n)
    {
        if (x[i] > y[i])
        {
            if (x[i] % 2 == 1)
            {
                cout << ((x[i] * x[i]) - y[i] + 1) << endl;
            }
            else
            {
                x[i]--;
                cout << ((x[i] * x[i]) + y[i]) << endl;
            }
        }
        else
        {
            if (x[i] % 2 == 0)
            {
                cout << ((y[i] * y[i]) - x[i] + 1) << endl;
            }
            else
            {
                y[i]--;
                cout << ((y[i] * y[i]) + x[i]) << endl;
            }
        }
    }
}
