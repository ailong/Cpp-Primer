/* 
* @Author: anchen
* @Date:   2015-01-04 11:24:24
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-04 11:28:32
*/

#include <iostream>

using namespace std;

int main(){
    int i = 100,j=50;
    int *p = &i;
    std::cout<<*p<<std::endl;
    p = &j;
    std::cout<<*p<<"------"<<i<<std::endl;
    *p = 10;
    std::cout<<*p<<"------"<<j<<std::endl;
    return 0;
}