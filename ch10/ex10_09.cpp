#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

inline std::ostream& println(Sequence const& seq)
{
    for(auto const& elem : seq)
        std::cout << elem << " ";
    std::cout << std::endl;
    return std::cout;
}

void elimdups(std::vector<std::string> &vs)
{
    println(vs);

    std::sort(vs.begin(), vs.end());
    println(vs);

    auto new_end = std::unique(vs.begin(),vs.end());
    println(vs);

    vs.erase(new_end, vs.end());
    println(vs);
}

int main()
{
    std::vector<std::string> vs{"a","v","a","s","a","a","a"};
    std::cout << "ex 10.9:\n";
    elimdups(vs);
    return 0;
}
