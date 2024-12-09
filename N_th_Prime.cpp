#include <iostream>
#include <cmath>
using namespace std;

int nthPrime(int n)
{
    // initially
    int res = 2;
    int cur = 0;

    while (cur < n)
    {
        if (res == 2 || res % 2 != 0)
        {
            bool isPrime = true;

            for (int i = 3; i <= sqrt(res); i += 2)
            {
                if (res % i == 0)
                {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime)
            {
                cur++;
            }
        }
        res++;
    }

    return res - 1;
}

int main()
{
    int n;
    cin >> n;

    cout << nthPrime(n) << endl;

    return 0;
}
