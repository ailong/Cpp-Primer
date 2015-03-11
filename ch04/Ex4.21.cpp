/* 
* @Author: anchen
* @Date:   2015-01-11 09:03:35
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-11 09:08:37
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 8};
   
    for(auto& e : ivec){
        cout << "数 " << e << " 载数组中" << " 是 " << ((e % 2 != 0) ? "奇数" : "偶数") << endl;
        if(e % 2 != 0){
            e *= 2;
        }
    }
    cout << endl;
    for(auto& e : ivec){
        cout << e << " ";
    }
    return 0;
}