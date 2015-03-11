/* 
* @Author: anchen
* @Date:   2015-01-08 17:39:08
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-08 17:46:16
*/

#include <iostream>
#include <vector>
using namespace std;
using std::vector;

int main(){
    int arr[10] = {0};
   
    int index = 1;
    for(auto &it : arr){
        it = index;
        ++index;
    }
 
    int carr[10];
    auto i = 0;
    for(auto &crit : carr){
        crit = arr[i];
        ++i;
    }
   
    for(auto it : carr){
        cout << it << endl;
    }
    return 0;
}