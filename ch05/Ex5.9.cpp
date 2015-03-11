/* 
* @Author: anchen
* @Date:   2015-01-11 09:28:34
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-11 09:36:02
*/

#include <iostream>

using namespace std;

int main(){
    char c;
    cout << "请输入字符: " << endl;
    auto sum = 0;
    while(cin >> c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            ++sum;
        }
    }
    cout << "元音数量为： " << sum << endl;
    return 0;
}