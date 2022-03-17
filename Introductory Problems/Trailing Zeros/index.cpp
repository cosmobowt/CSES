#include <iostream>
using namespace std;

int main()
{
    int n, count = 0, k = 5;
    cin >> n;
    // calculating number of 5's
    // 25 has two 5, 125 has three 5
    while (n >= k)
    {
        count += (n / k);
        k *= 5;
    }
    cout << count;
}