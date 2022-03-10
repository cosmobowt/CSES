#include <bits/stdc++.h>
#define fu(i, n) for (int i = 1; i <= n; i++)
using namespace std;
typedef long long int ll;
typedef pair<int, int> P;

int main()
{
    int n;
    cin >> n;
    int temp = n;
    vector<int> v;
    vector<int> v2;

    if ((n * ((n + 1) / 2)) % 2 == 0)
    {
        std::cout << "YES" << endl;
        if (temp % 4 == 0)
        {
            int x = 1, y = 1;
            while (x <= n)
            {
                v.push_back(x);
                x += 3;
                v.push_back(x);
                if (x >= n)
                    break;
                x += 2;
                v.push_back(x);
                x += 1;
                v.push_back(x);
            }
            while (y <= n)
            {
                v2.push_back(y);
                x += 1;
                v2.push_back(y);
                x += 1;
                v2.push_back(y);
                x += 2;
                if (y >= n)
                    break;
                v2.push_back(y);
                x += 3;
                v2.push_back(y);
            }
        }
        std::cout << v.size() << endl;
        for (auto i : v)
        {
            std::cout << i;
        }
        std::cout << endl;
        std::cout << v2.size() << endl;
        for (auto i : v2)
        {
            std::cout << i;
        }
        std::cout << endl;
    }
    else
    {
        std::cout << "NO";
    }
}