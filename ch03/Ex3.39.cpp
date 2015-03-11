/* 
* @Author: anchen
* @Date:   2015-01-09 09:16:43
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-09 09:18:17
*/

#include <iostream>
#include <vector>
using namespace std;
using std::vector;

int compare_array(char *array1, char *array1_end,  char* array2, char* array2_end)
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
    char arr1[] = "Acmder";
    char arr2[] = "Acmdert";
   
   if(compare_array(begin(arr1), end(arr1),  begin(arr2), end(arr2)) == 1){
       cout << "arr1 > arr2" << endl;
   }else if(compare_array(begin(arr1), end(arr1),  begin(arr2), end(arr2)) == -1){
       cout << "arr1 < arr2" << endl;
   }else{
       cout << "arr1 = arr2" << endl;
   }
   
   string s1 = "Acmder";
   string s2("Acmdert");
   if(s1 > s2){
       cout << "s1 > s2" << endl;
   }else if(s1 < s2){
       cout << "s1 < s2" << endl;
   }else{
       cout << "s1 = s2" << endl;
   }
    
    return 0;
}