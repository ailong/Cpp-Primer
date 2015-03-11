/* 
* @Author: anchen
* @Date:   2015-01-11 09:28:07
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-11 09:33:01
*/

#include <iostream>

using namespace std;

int main(){
    int sum = 0, val = 1;
 
    while (val <= 10) 
       sum += val, ++val;
 
    std::cout << "1-10的和是： "<< sum << std::endl;
    return 0;
}