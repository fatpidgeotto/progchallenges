#include <cmath>
#include <iostream>
using namespace std;

int
main()
{
    int a, b;
    cin >> a >> b;
    cout << floor(1 + log((double)b / (double)a) / log(1.5)) << endl;
    return 0;
}
