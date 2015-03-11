/* 
* @Author: anchen
* @Date:   2014-12-26 14:22:31
* @Last Modified by:   anchen
* @Last Modified time: 2014-12-26 14:26:46
*/

#include <iostream>

using namespace std;

int main(){
    int val = 10;
    while(val >= 0) {
        std::cout<<"now,val is "
                 << val << std::endl;
        --val;
    }
    return 0;
}