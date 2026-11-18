#include <iostream>
#include <set>
#include <string>

using namespace std;

int
main()
{
    string s;
    cin >> s;
    set<char> chars;
    for (char c : s) {
        chars.insert(c);
    }
    if (chars.size() % 2 == 0) {
        cout << "CHAT WITH HER!\n";
    } else {
        cout << "IGNORE HIM!\n";
    }
    return 0;
}
