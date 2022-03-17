#include <bits/stdc++.h>
#define fu(i, n) for (int i = 0; i < n; ++i)
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> P;

int main()
{
    int n;
    cin >> n;
    vector<P> v;

    fu(i, n)
    {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    fu(i, n)
    {
        if (v[i].first > v[i].second)
            swap(v[i].first, v[i].second);

        if (v[i].second > 2 * v[i].first)
        {
            cout << "NO\n";
        }
        else
        {
            if ((v[i].first + v[i].second) % 3 == 0)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
}
