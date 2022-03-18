#include <bits/stdc++.h>
#define fu(i, n) for (int i = 0; i < n; i++)
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> P;

int main()
{
    ll n, m, k;
    cin >> n >> m >> k;

    vector<ll> peeps(n);
    vector<ll> apart(m);

    fu(i, n) cin >> peeps[i];
    fu(i, m) cin >> apart[i];

    sort(peeps.begin(), peeps.end());
    sort(apart.begin(), apart.end());

    ll count = 0, i = 0, j = 0;

    while (i < n && j < m)
    {
        if (abs(peeps[i] - apart[j]) <= k)
        {
            count++;
            i++;
            j++;
        }
        else if (peeps[i] > apart[j])
        {
            j++;
        }
        else if (peeps[i] < apart[j])
        {
            i++;
        }
    }
    cout << count;
}
