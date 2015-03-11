/* 
* @Author: anchen
* @Date:   2015-01-08 10:52:34
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-08 10:57:55
*/

#include <iostream>

using namespace std;

int main(){
    string s;
    string result;
    cout<<"请输入带标点字符串："<<endl;
    cin>>s;
    for(auto &c:s)
    {
        if(!ispunct(c))
            result += c;
    }
    cout<<"清除标点符号后："<<result<<endl;
    return 0;
}