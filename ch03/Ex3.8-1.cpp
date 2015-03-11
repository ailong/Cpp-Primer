/* 
* @Author: anchen
* @Date:   2015-01-08 10:45:31
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-08 10:49:30
*/

#include <iostream>

using namespace std;

int main(){
    string s("Hello World!");
    cout<<"处理前："<<s<<endl;
    decltype(s.size()) size = 0;
    while(size < s.size())
    {
        auto &c = s[size];
        if(!isspace(c) && isalpha(c))
            c = 'X';
        size += 1;
    }
    cout<<"处理后："<<s<<endl;
    return 0;
}