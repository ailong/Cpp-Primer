/* 
* @Author: anchen
* @Date:   2015-01-11 13:29:49
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-11 13:29:49
*/

#include <iostream>

using namespace std;

int main(){
    string str1;
    string str2;
    char y;
   
    do{
        cout << "请输入两个字符串：" << endl;
        cin >> str1 >> str2;
        cout << str1 << " 比 " << str2 << (str1 > str2 ? "大" : "小") << endl;
        cout << "输入Y继续!" << endl;
        cin >> y;
       
    }while(y == 'Y' || y == 'y');

    return 0;
}