/* 
* @Author: anchen
* @Date:   2015-01-11 09:29:11
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-11 09:54:37
*/

#include <iostream>

using namespace std;

int main(){
    char c;
    cout << "请输入字符: " << endl;
    auto sum = 0;
    while(cin >> std::noskipws >> c){
        if(c == 'f'){
            cin >> std::noskipws >> c;
            if(c == 'f' || c == 'l' || c == 'i')
                sum++;
        }
    }
    cout << "含有ff、fl、fi总数为：" << sum << endl;
    return 0;
}