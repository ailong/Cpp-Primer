#include <iostream>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <string>
#include <list>


void
r_print(const std::vector<std::string> &v);


void
r_withOrdinary_print(const std::vector<std::string> &v);


std::list<int>::iterator
find_last_0(std::list<int> &l);


void
vec2list_3_7_reverse(const std::vector<int> &v, std::list<int> &l);

int main()
{

    std::vector<std::string> v={"aa","bb","cc"};

    r_print(v);
    std::cout << "\n";

    r_withOrdinary_print(v);
    std::cout << "\n";
	
    std::list<int>  l = {1,2,3,4,0,5,6};
    auto it = find_last_0(l);
    std::cout << *it << "\n";
	
    std::vector<int> vi = {1,2,3,4,5,6,7,8,9,10};
    std::list<int>  lst;
    vec2list_3_7_reverse(vi,lst);
    for(auto e : lst)
        std::cout << e <<" ";
    std::cout << std::endl;

    return 0;
}

inline void
r_print(const std::vector<std::string> &v)
{
    std::for_each(v.crbegin(), v.crend(), [](const std::string &s)
    {
        std::cout << s << " ";
    });
}

inline void
r_withOrdinary_print(const std::vector<std::string> &v)
{
    for (auto it = std::prev(v.cend()); it != std::prev(v.cbegin()); --it)
        std::cout << *it << " ";
}

inline std::list<int>::iterator
find_last_0(std::list<int> &l)
{
    auto r_it = std::find(l.rbegin(), l.rend(), 0);

    auto it = r_it.base();

    return std::prev(it);

}

inline void
vec2list_3_7_reverse(const std::vector<int> &v, std::list<int> &l)
{
    std::copy(v.crbegin() + 3, v.crbegin() + 8, std::back_inserter(l));
}
