/* 
* @Author: anchen
* @Date:   2015-01-16 15:35:14
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-16 15:37:55
*/

#include <iostream>

using namespace std;
size_t count_calls()
{
    static size_t ctr=0;
    return ++ctr;   
}

int main(){
    for(size_t i=0;i!=10;i++)
    {
        cout<<count_calls()<<endl;
    }
    return 0;
}