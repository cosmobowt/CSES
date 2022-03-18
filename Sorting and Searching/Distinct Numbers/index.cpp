#include <bits/stdc++.h>
#define fu(i, n) for (int i = 0; i < n; i++)
#define fr(i, n) for (int i = 1; i < n; i++)
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> P;

int main()
{
    int n, count = 1;
    cin >> n;
    vector<int> v(n);
    fu(i, n) cin >> v[i];
    sort(v.begin(), v.end());
    fr(i, n)
    {
        if (v[i] != v[i - 1])
            count++;
    }
    cout << count;
}
