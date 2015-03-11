/* 
* @Author: anchen
* @Date:   2015-01-08 10:35:34
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-08 10:41:28
*/

#include <iostream>

using namespace std;

int main(){
    string s("Hello World!");
    cout<<"处理前："<<s<<endl;
    for(auto &c : s)
    {
        if(!isspace(c) && isalpha(c))
            c = 'X';
    }
    cout<<"处理后："<<s<<endl;
    return 0;
}