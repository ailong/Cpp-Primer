/* 
* @Author: anchen
* @Date:   2015-01-27 17:43:01
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-27 18:03:44
*/

#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<string>* v)
{
    for(auto iter=v->begin();iter!=v->end();++iter)
    {
        cout<<*iter<<endl;
    }
}

int main(){
    vector<string> v{10,"A"};
    printVector(&v);
    return 0;
}