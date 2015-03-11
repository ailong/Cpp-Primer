/* 
* @Author: anchen
* @Date:   2015-01-09 09:28:08
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-09 10:08:12
*/

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int ia[3][4] = {
   {0, 1, 2, 3},
   {4, 5, 6, 7},
   {8, 9, 10, 11}
   };
 
int main()
{
    for(auto& p : ia){
        for(auto i : p){
            cout << i << " ";
        }
        cout << endl;
    }
    
    return 0;
}