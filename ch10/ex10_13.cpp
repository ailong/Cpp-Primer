#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

inline
bool isLongerThan5(const std::string &s)
{
    return s.size() >= 5;
}

void partition_words(std::vector<std::string> &v)
{
    auto iter_longerLast = std::partition(v.begin(), v.end(), isLongerThan5);

    for(auto it = v.begin(); it != iter_longerLast; ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

int main()
{
    std::vector<std::string> v{"a","as","aasss","aaaaassaa","aaaaaabba","aaa"};
    partition_words(v);

    return 0;
}



