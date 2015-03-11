/* 
* @Author: anchen
* @Date:   2015-01-08 10:07:54
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-08 10:08:57
*/

#include <iostream>

using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(s1.size() == s2.size())
        cout<<s1<<"的长度等于"<<s2<<endl;
    else
    {
        if(s1.size() > s2.size())
            cout<<s1<<"的长度大于"<<s2<<endl;
        else
            cout<<s1<<"的长度小于"<<s2<<endl;
    }
    return 0;
}