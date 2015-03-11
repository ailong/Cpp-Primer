/* 
* @Author: anchen
* @Date:   2015-01-16 14:43:55
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-16 15:22:12
*/

#include <iostream>

using namespace std;
int fact(int n)
{
    int t = 1;
    while(n>1)
    {
        t *= n--;
    }
    return t; 
}

int main(){
    int val = 6,ret = 0;
    cout<<"请输入一个整数：";
    cin>>val;
    ret = fact(val);
    cout<<val<<"! 是："<<ret<<endl;
    return 0;
}