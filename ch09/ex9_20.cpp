#include <iostream>
#include <deque>
#include <list>

using namespace std;

int main()
{
    list<int> l{1,2,3,4,5,6,7,8,9,10};
    deque<int> d_odd, d_even;
    for (auto iter = l.cbegin(); iter != l.cend(); ++iter)
        (*iter & 0x1 ? d_odd : d_even).push_back(*iter);

    for (auto i : d_odd)
        cout << i << " ";
    cout << endl;
    for (auto i : d_even)
        cout << i << " ";
    cout << endl;

    return 0;
}
