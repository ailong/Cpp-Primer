/* 
* @Author: anchen
* @Date:   2015-01-09 09:45:57
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-09 10:05:52
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
 
    typedef int ArrayPointer[4]; 

    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 4; ++j){
            cout << ia[i][j] << " ";
        }
        cout << endl;
    }

   return 0;
}