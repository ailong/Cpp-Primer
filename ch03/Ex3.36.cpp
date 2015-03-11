/* 
* @Author: anchen
* @Date:   2015-01-09 09:14:19
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-09 09:15:13
*/

#include <iostream>
#include <vector>
using namespace std;
using std::vector;

int compare_array(int *array1, int *array1_end,  int* array2, int* array2_end)
{
   for(auto p1 = array1, p2 = array2; (p1 != array1_end&&p2 != array2_end); ++p1, ++p2){
       if (*p1 < *p2){
           return -1;
       }else if(*p1 > *p2){
           return 1;
       }
   }
   return 0;
}
 
int main()
{
   int arr1[5] = {1,2,3,4};
   int arr2[4] = {2,3,4,5};
   
   if(compare_array(begin(arr1), end(arr1),  begin(arr2), end(arr2)) == 1){
       cout << "arr1 > arr2" << endl;
   }else if(compare_array(begin(arr1), end(arr1),  begin(arr2), end(arr2)) == -1){
       cout << "arr1 < arr2" << endl;
   }else{
       cout << "arr1 = arr2" << endl;
   }
   
   vector<int> iv1 = {1,2,3,4};
   vector<int> iv2 = {1,2,3,4};
   if(iv1 > iv2){
       cout << "iv1 > iv2" << endl;
   }else if(iv1 < iv2){
       cout << "iv1 < iv2" << endl;
   }else{
       cout << "iv1 = iv2" << endl;
   }
    
    return 0;
}