#include <iostream>

using namespace std;

int
main()
{
    int x;
    cin >> x;
    int steps = 0;
    int size = 5;
    while (x > 0) {
        steps += x / size;
        x = x % size;
        --size;
    }
    cout << steps << endl;
    return 0;
}
