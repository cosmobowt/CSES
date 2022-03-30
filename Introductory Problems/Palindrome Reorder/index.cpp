#include <bits/stdc++.h>
#define fu(i, n) for (int i = 0; i < n; i++)
#define fr(i, n) for (int i = n - 1; i >= 0; i--)
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> P;

int main()
{
    string s;
    cin >> s;
    vector<int> alphabets(26);
    string temp;
    fu(i, alphabets.size()) alphabets[s[i] - 'A']++;
    int count = 0;
    fu(i, alphabets.size())
    {
        if (alphabets[i] % 2 == 1)
            count++;
    }
    if (count > 1)
        cout << "NO SOLUTION";
    else
    {
        fu(i, alphabets.size())
        {
            if (alphabets[i] % 2 == 0)
            {
                fu(j, (alphabets[i] / 2))
                {
                    temp.push_back(i + 'A');
                }
            }
        }
        fu(i, alphabets.size())
        {
            if (alphabets[i] % 2 == 1)
            {
                fu(j, alphabets[i])
                {
                    temp.push_back(i + 'A');
                }
            }
        }
        fr(i, alphabets.size())
        {
            if (alphabets[i] % 2 == 0)
            {
                fu(j, (alphabets[i] / 2))
                {
                    temp.push_back(i + 'A');
                }
            }
        }
        cout << temp;
    }
}
