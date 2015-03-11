/* 
* @Author: anchen
* @Date:   2015-01-23 15:53:07
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-23 16:18:02
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
    int val1=1,val2=2;
    int *p1=&val1,*p2=&val2;
    cout<<"交换前："<<"p1 = "<<val1<<"   "<<" p2= "<<val2<<endl;
    swap(*p1,*p2);
    cout<<"交换后："<<"p1 = "<<val1<<"   "<<" p2= "<<val2<<endl;
    return 0;
}