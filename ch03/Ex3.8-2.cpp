/* 
* @Author: anchen
* @Date:   2015-01-08 10:45:44
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-08 10:50:39
*/

#include <iostream>

using namespace std;

int main(){
    string s("Hello World!");
    cout<<"处理前："<<s<<endl;
    for(decltype(s.size()) size = 0;size<s.size();size++)
    {
        auto &c = s[size];
        if(!isspace(c) && isalpha(c))
            c = 'X';
    }
    cout<<"处理后："<<s<<endl;
    return 0;
}