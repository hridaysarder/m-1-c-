#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int mn = min(a, b);
    int mx = max(a, b);
    swap(a, b);
    cout << "Minimum Number: " << mn << endl
         << "Maximum Number: "
         << mx << endl;
    cout << a << " " << b << endl;
    return 0;
}