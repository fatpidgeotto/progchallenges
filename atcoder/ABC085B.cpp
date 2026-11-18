#include <iostream>
#include <set>

using namespace std;

int
main()
{
    int n;
    cin >> n;
    set<int> pile;
    while (n--) {
        int d;
        cin >> d;
        pile.insert(d);
    }
    cout << pile.size() << endl;
    return 0;
}
