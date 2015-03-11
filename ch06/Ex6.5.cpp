/* 
* @Author: anchen
* @Date:   2015-01-16 15:22:42
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-16 15:33:08
*/

#include <iostream>

using namespace std;
unsigned abs(int n)
{
    if(n>=0)
        return n;
    else if(n<0)
        return -n;
}
int main(){
    int val=0;
    unsigned ret=0;
    cout<<"请输入一个负整数：";
    cin>>val;
    ret=abs(val);
    cout<<val<<"的绝对值是："<<ret<<endl;
    return 0;
}