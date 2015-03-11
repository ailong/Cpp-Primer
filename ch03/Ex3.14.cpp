/* 
* @Author: anchen
* @Date:   2015-01-08 11:57:44
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-08 14:21:46
*/

#include <iostream>
#include <vector>
using namespace std;
using std::vector;

int main(){
    std::vector<int> v;
    int vec = 0;
    int n = 0;
    while(n<3){
        cin>>vec;
        v.push_back(vec);
        n++;
    }
    return 0;
}