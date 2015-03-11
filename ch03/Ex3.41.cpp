/* 
* @Author: anchen
* @Date:   2015-01-09 09:23:52
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-09 09:25:13
*/

#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
 
int main()
{
   int arr[] = {1,2,3,4,5};
   vector<int> array(begin(arr), end(arr));
 
   for(auto it : array){
       cout << it << endl;
   }
    
    return 0;
}