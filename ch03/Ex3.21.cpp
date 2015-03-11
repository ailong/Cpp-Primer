/* 
* @Author: anchen
* @Date:   2015-01-08 15:38:09
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-08 15:41:53
*/

#include <iostream>
#include <vector>
using namespace std;
using std::vector;

int main(){
    std::vector<string> v1{10,"hi"};
    cout<<"v1的元素个数为："<<v1.size()<<endl;
    if(v1.size()>0)
    {
        cout<<"v1的元素分别为：";
        for(auto iter=v1.cbegin();iter!=v1.cend();++iter)
            cout<<*iter<<",";
    }
    return 0;
}