/* 
* @Author: anchen
* @Date:   2015-01-08 15:57:02
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-08 16:03:16
*/

#include <iostream>
#include <vector>
using namespace std;
using std::vector;

int main(){
   vector<string> text = {"Hello", "Mottor"};
   for(auto iter = text.begin(); iter != text.end() && !iter->empty(); ++iter){
       for(auto &c : *iter){
           c = toupper(c);
       }
   }
   
   for(auto c : text){
       cout << c << " ";
   }
   cout << endl;
    return 0;
}