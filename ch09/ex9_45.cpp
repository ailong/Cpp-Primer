#include <iostream>
#include <string>

std::string
pre_suffix(const std::string &name, const std::string &pre, const std::string &su);

int main()
{
    std::string name("alan");
    std::cout << pre_suffix(name, "Mr.", ",Jr.");

    return 0;
}


inline std::string
pre_suffix(const std::string &name, const std::string &pre, const std::string &su)
{
    std::string ret(name);
    ret.insert(0, pre);
    ret.append(su);

    return ret;
}
