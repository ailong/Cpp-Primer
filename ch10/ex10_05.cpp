#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

int main()
{
    std::vector<const char *> roster1{"Mooophy", "long", "chen"};
    std::list<const char *>  roster2{"Mooophy", "long", "chen", "shbling", "evan617"};
    std::cout << std::equal(roster1.cbegin(), roster1.cend(), roster2.cbegin());
}

