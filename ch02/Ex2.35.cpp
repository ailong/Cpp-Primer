/* 
* @Author: anchen
* @Date:   2015-01-04 15:19:20
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-04 15:23:59
*/

#include <iostream>

using namespace std;

int main(){
    const int i = 42;
    auto j = i;
    const auto &k = i; 
    auto *p = &i;
    const auto j2=i,&k2 = i;

    return 0;
}