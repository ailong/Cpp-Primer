/* 
* @Author: anchen
* @Date:   2015-01-11 09:28:23
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-11 09:33:54
*/

#include <iostream>

using namespace std;

int main(){
    int grade = 0;
    cout << "请输入成绩: " << endl;
    cin >> grade;
    if(grade < 60)
        cout << "Fail" << endl;
    else if(grade < 75)
        cout << "Low Pass" << endl;
    else
        cout << "Hight pass " << endl;
    return 0;
}