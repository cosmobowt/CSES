#include <bits/stdc++.h>
#define fu(i, n) for (int i = 1; i < n; i++)
using namespace std;
typedef long long int ll;
typedef pair<int, int> P;
typedef vector<int, int> V;
typedef vector<pair<int, int>> VP;

int main()
{
    string s;
    cin >> s;
    int pre = 1, max = 1;
    fu(i, s.length())
    {
        if (s[i] == s[i - 1])
        {
            pre += 1;
        }
        else
        {
            if (pre > max)
                max = pre;
            pre = 1;
        }
    }
    pre >= max ? cout << pre : cout << max;
}
