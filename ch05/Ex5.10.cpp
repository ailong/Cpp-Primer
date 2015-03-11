/* 
* @Author: anchen
* @Date:   2015-01-11 09:28:45
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-11 09:39:01
*/

#include <iostream>

using namespace std;

int main(){
    char c;
    cout << "请输入字符: " << endl;
    auto sum = 0;
    while(cin >> c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'|| c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            ++sum;
        }
    }
    cout << "元音数量为： " << sum << endl;
    return 0;
}