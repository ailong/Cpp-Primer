/* 
* @Author: anchen
* @Date:   2015-01-04 09:49:33
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-04 10:10:58
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i)
        sum += i;
    std::cout << i << " " << sum << std::endl;
    return 0;
}