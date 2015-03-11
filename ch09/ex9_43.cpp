#include <iostream>
#include <string>

using namespace std;

void func(string &s, const string &oldVal, const string &newVal)
{
    for (string::size_type i=0; i!=s.size(); ++i)
        if (s.substr(i, oldVal.size()) == oldVal)
            {
                s.erase(i, oldVal.size());
                s.insert(i, newVal);
            }
}

int main()
{
    string str{"To drive straight thru is a foolish, tho courageous act."};
    func(str, "tho", "though");
    func(str, "thru", "through");
    cout << str << endl;

    return 0;
}
