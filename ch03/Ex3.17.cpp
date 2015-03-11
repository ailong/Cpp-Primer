/* 
* @Author: anchen
* @Date:   2015-01-08 14:37:34
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-08 15:30:15
*/

#include <iostream>
#include <vector>
using namespace std;
using std::vector;

int main(){
    std::vector<string> v{3};
    decltype(v.size()) n = 0;

    for(decltype(v.size()) i = 0;i!=v.size();i++)
    {
        cout<<"请输入第"<<i+1<<"个词:";
        cin>>v[i];
    }

    cout<<"输入的词组为："<<endl;
    while(n<v.size())
    {
        cout<<v[n]<<endl;
        n++;
    }
    cout<<endl;

    n=0;
    cout<<"输入的词组大写形式为："<<endl;
    while(n<v.size())
    {
        for(auto &c:v[n])
        {
            c = toupper(c);
        }
        cout<<v[n]<<endl;
        n++;
    }
    return 0;
}