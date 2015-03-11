#include <iostream>
#include <string>

using namespace std;

inline bool isShorter(const string &s1, const string &s2) // defining in the header more better.
{
    return s1.size() < s2.size();
}

int main()
{
    std::cout << isShorter("long", "chen") << std::endl;
}
