/* 
* @Author: anchen
* @Date:   2015-01-11 13:30:43
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-11 13:30:43
*/

#include <iostream>

using namespace std;

int main(){
    string buf;
    while (cin >> buf && !buf.empty()) {
        if (buf[0] < 'A' || buf[0] > 'Z')
            continue; 
    }
    
    return 0;
}