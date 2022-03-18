#include <bits/stdc++.h>
#define fu(i, n) for (int i = 1; i <= n; i++)
#define MOD 1000000007
using namespace std;
typedef long long int ll;
typedef pair<int, int> P;

int main()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << "1\t";
    }
    else if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        int n1 = 2;
        while (n1 <= n)
        {
            cout << n1 << "\t";
            n1 += 2;
        }
        int n2 = 1;
        while (n2 <= n)
        {
            cout << n2 << "\t";
            n2 += 2;
        }
    }
}