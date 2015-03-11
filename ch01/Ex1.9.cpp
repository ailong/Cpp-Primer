/* 
* @Author: anchen
* @Date:   2014-12-26 14:17:54
* @Last Modified by:   anchen
* @Last Modified time: 2014-12-26 14:20:38
*/

#include <iostream>

using namespace std;

int main(){
    int sum = 0, val = 50;
    while(val <= 100) {
        sum += val;
        ++val;
    }
    std::cout<<"Sum of 50 to 100 inclusive is "
             << sum << std::endl;
    return 0;
}