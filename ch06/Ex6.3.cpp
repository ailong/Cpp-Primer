/* 
* @Author: anchen
* @Date:   2015-01-16 14:25:38
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-16 14:43:37
*/

#include <iostream>

using namespace std;

int fact(int val)
{
    int ret=1;
    while(val>1)
    {
        ret *= val--;
    }
    return ret; 
}

int main(){
    int val = 10;
    int j = fact(val);
    cout<<val<<"! 是："<<j<<endl;
    return 0;
}