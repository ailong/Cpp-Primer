/* 
* @Author: anchen
* @Date:   2015-01-09 09:45:57
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-09 10:05:30
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

    for(ArrayPointer *p = ia; p != ia + 3; ++p){
       for(int *q = *p; q != (*p + 4); ++q){
           cout << *q << " ";
       }
       cout << endl;
    }

    return 0;
}