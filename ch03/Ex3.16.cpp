/* 
* @Author: anchen
* @Date:   2015-01-08 14:30:31
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-08 14:36:37
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
        for(decltype(v1.size()) i=0;i<v1.size();i++)
            cout<<v1[i]<<",";
    }
    return 0;
}