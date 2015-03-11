/* 
* @Author: anchen
* @Date:   2015-01-09 09:27:40
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-09 09:44:56
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

for(int (*p)[4] = ia; p != ia + 3; ++p){
   for(int *q = *p; q != (*p + 4); ++q){
       cout << *q << " ";
   }
   cout << endl;
}
 
}