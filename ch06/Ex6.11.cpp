/* 
* @Author: anchen
* @Date:   2015-01-22 15:31:15
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-22 15:45:33
*/

#include <iostream>

using namespace std;

void reset(int &i)
{
    i = 0;  
}

int main(){
    int i= 10;
    cout<<"原值："<<"i="<<i<<endl;
    reset(i);
    cout<<"reset后："<<"i="<<i<<endl;
    return 0;
}