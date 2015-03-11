/* 
* @Author: anchen
* @Date:   2015-01-08 10:12:48
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-08 10:20:26
*/

#include <iostream>

using namespace std;

int main(){
    int n = 0;
    string s;
    string result;
    while(n < 3) {
        cin>>s;
        result += s;
        n+=1;
    }
    cout<<result<<endl;
    return 0;
}