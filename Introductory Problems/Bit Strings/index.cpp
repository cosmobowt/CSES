#include <bits/stdc++.h>
#define fu(i, n) for (int i = 1; i <= n; i++)
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> P;

int main()
{
    ll n;
    cin >> n;
    ll ans = 1;
    fu(i, n)
    {
        ans *= 2;
        ans %= MOD;
    }
    cout << ans;
}
