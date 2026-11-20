#include <iostream>
#include <string>

using namespace std;

int
main()
{
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        for (unsigned i = 0; i < s.size() / 2; i += 2) {
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
