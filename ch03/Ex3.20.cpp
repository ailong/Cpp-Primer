/* 
* @Author: anchen
* @Date:   2015-01-08 15:00:29
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-08 15:26:49
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
    for(decltype(v.size()) j = 0;j!=v.size()-1;j++)
    {
        cout<<v[j]+v[j+1]<<endl;
    }

    cout<<"首尾相加结果分别为："<<endl;
    for(decltype(v.size()) k = 0;k!=v.size();k++)
    {
        cout<<v[k]+v[v.size()-1-k]<<endl;
    }
    return 0;
}