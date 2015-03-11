/* 
* @Author: anchen
* @Date:   2015-01-27 14:19:26
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-27 14:29:18
*/

#include <iostream>

using namespace std;

void print(const int ia[10])
{
    for(size_t i=0;i!=10;i++)
        cout<<ia[i]<<endl;
}

int main(){
    const int a[10] = {10,10,10,10,10,10,10,10,10};
    print(a);
    return 0;
}