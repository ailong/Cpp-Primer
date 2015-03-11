/* 
* @Author: anchen
* @Date:   2015-01-09 08:53:45
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-09 08:54:39
*/

#include <iostream>
#include <vector>
using namespace std;
using std::vector;

int main(){
   int arr[10] = {1,2,3,4,5,6,7,8,9,10};
 
   for(int i = 0; i < 10; ++i){
       *(arr + i) = 0;
   }
   
   for(auto it : arr){
       cout << it << endl;
    }
    return 0;
}