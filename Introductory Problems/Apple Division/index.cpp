#include <bits/stdc++.h>
#define fu(i, n) for (int i = 0; i < n; i++)
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> P;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    vector<int> v1;
    vector<int> v2;
    int diff = 0;
    fu(i, n)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.rbegin(), v.rend());
    fu(i, n)
    {
        if (diff - v[i] < 0)
        {
            v1.push_back(v[i]);
            diff += v[i];
        }
        else
        {
            v2.push_back(v[i]);
            diff -= v[i];
        }
    }
    cout << diff;
}