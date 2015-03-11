/* 
* @Author: anchen
* @Date:   2015-01-23 16:21:07
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-23 16:27:48
*/

#include <iostream>

using namespace std;

void print(int i)
{
    cout<<i<<endl;
}

void print(int arr[2])
{
    for(int i=0;i!=2;++i)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){
    int i = 0, j[2] = {0, 1};
    print(i);
    print(j);
    return 0;
}