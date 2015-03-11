/* 
* @Author: anchen
* @Date:   2015-01-27 16:45:03
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-27 17:05:11
*/

#include <iostream>
#include <initializer_list>
using namespace std;

int add(initializer_list<int> iterList)
{
    int sum = 0;
    for(auto i:iterList)
    {
        sum+=i;
    }
    return sum;
}

int main(){
    int result = add({1,2,1,3,1,0,1,4,1,5,1,6});
    cout<<"initializer_list Num is : "<<result<<endl;
    return 0;
}