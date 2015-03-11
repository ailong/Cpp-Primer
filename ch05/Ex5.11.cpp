/* 
* @Author: anchen
* @Date:   2015-01-11 09:29:01
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-11 09:44:26
* @Last Modified time: 2015-01-11 09:44:26
*/

#include <iostream>

using namespace std;

int main(){
    char c;
    cout << "请输入字符: " << endl;
    auto sum = 0;
    while(cin >> std::noskipws >> c){
        if(c == ' ' || c == '\t' || c == '\n')
            ++sum;
        }
    cout << "空格总数为： " << sum << endl;
    return 0;
}