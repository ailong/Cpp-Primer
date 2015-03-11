/* 
* @Author: anchen
* @Date:   2015-01-09 09:27:28
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-09 09:32:05
*/

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main(){
    vector<int> arrry = {1,2,3,4,5};
 
    const int ArraySize = arrry.size();
   
    int arr[ArraySize];
   
    int i = 0;
    for(auto& it : arr){
        it = arrry.at(i);
        ++i;
    }
    
    for(auto it : arr){
        cout << it << endl;
    }

    return 0;
}