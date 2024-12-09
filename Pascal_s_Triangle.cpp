#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << 0;
    }
    else
    {

        cout << (1 << (n - 1)) << endl;
    }
    return 0;
}