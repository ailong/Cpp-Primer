/* 
* @Author: anchen
* @Date:   2015-01-08 16:22:40
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-08 17:16:47
*/

#include <iostream>
#include <vector>
using namespace std;
using std::vector;

int main(){
    std::vector<int> v(6);

    for(decltype(v.size()) i = 0;i!=v.size();i++)
    {
        cout<<"请输入第"<<i+1<<"个数:";
        cin>>v[i];
    }

    cout<<"邻数相加结果分别为："<<endl;
    for(auto iter=v.cbegin();iter!=v.cend()-1;++iter)
    {
        cout<<*iter+*(iter+1)<<endl;
    }

    cout<<"首尾相加结果分别为："<<endl;
    auto mid = v.begin() + v.size()/2;
    int n=0;
    for(auto iter=v.begin();iter!=mid;++iter)
    {
        cout<<*iter+*(iter + (v.size() - n -1))<<endl;
        n++;
    }
    return 0;
}