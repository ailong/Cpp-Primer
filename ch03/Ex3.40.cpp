/* 
* @Author: anchen
* @Date:   2015-01-09 09:20:27
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-09 09:23:09
*/

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
using std::vector;

int main(){
    char arr1[] = "abc123";
    char arr2[] = "def";
   
   const int sz = sizeof(arr1) + sizeof(arr2);
   char arr3[sz];
   
   strcpy(arr3, arr1);
   strcat(arr3, arr2);
   
   cout << arr3 << endl;
    return 0;
}