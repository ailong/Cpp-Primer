/* 
* @Author: anchen
* @Date:   2015-01-08 08:52:08
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-08 08:52:59
*/

#include <iostream>
using std::cout;
using std::endl;

int main(){
    int sum = 0, val = 50;
    while(val <= 100) {
        sum += val;
        ++val;
    }
    cout<<"Sum of 50 to 100 inclusive is "
             << sum << endl;
    return 0;
}