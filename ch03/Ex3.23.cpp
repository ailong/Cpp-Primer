/* 
* @Author: anchen
* @Date:   2015-01-08 15:50:34
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-08 15:56:04
*/

#include <iostream>
#include <vector>
using namespace std;
using std::vector;

int main(){
    std::vector<int> v(10,42);
    cout<<"Vector的内容为：："<<endl;
    for(auto iter=v.begin();iter!=v.end();++iter)
    {
        *iter = 2*(*iter);
        cout<<*iter<<endl;
    }

    return 0;
}