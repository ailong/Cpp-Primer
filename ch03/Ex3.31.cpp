/* 
* @Author: anchen
* @Date:   2015-01-08 17:38:58
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-08 17:45:17
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
 
    for(auto it : arr){
        cout << it << endl;
    }
    return 0;
}