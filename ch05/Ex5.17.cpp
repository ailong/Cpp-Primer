/* 
* @Author: anchen
* @Date:   2015-01-11 13:29:20
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-11 13:29:20
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
bool isSubArray( vector<int>& iv1,  vector<int>& iv2)
{
    decltype(iv1.size()) i = 0;
    while(i < iv1.size() && i < iv2.size()){
        if(iv1.at(i) == iv2.at(i)){
            ++i;
        }else{
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> ivec1 = {1,2,2,3};
    vector<int> ivec2 = {1,2,2,3,4,5,6};
   
    cout << isSubArray(ivec1, ivec2) << endl;
    return 0;
}