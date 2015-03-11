/* 
* @Author: anchen
* @Date:   2015-01-22 15:46:31
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-22 15:47:56
*/

#include <iostream>

using namespace std;

void swap(int &val1,int &val2)
{
    int temp = val1;
    val1 = val2;
    val2 = temp;
}

int main(){
   int i=1,j=2;
   cout<<"原值："<<"i="<<i<<"   "<<"j="<<j<<endl;
   swap(i,j);
   cout<<"转换后："<<"i="<<i<<"   "<<"j="<<j<<endl;
   return 0;
}