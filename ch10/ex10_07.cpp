#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

void print(Sequence const& seq)
{
    for (const auto& i : seq)
        cout << i << " ";
    cout << endl;
}

int main()
{
    // (a)
    vector<int> vec;
    list<int> lst;
    int i;
    while (cin >> i)
        lst.push_back(i);
    vec.resize(lst.size());

    copy(lst.cbegin(), lst.cend(), vec.begin());
    
    // (b)
    vector<int> v;
    v.reserve(10);
    fill_n(v.begin(), 10, 0);

    
    print(v);
    print(vec);
}
