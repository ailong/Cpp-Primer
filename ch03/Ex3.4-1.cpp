/* 
* @Author: anchen
* @Date:   2015-01-08 10:01:57
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-08 10:05:45
*/

#include <iostream>

using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(s1 == s2)
        cout<<s1<<"等于"<<s2<<endl;
    else
    {
        if(s1 > s2)
            cout<<s1<<"大于"<<s2<<endl;
        else
            cout<<s1<<"小于"<<s2<<endl;
    }
    return 0;
}