/* 
* @Author: anchen
* @Date:   2015-01-11 13:31:01
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-16 10:48:19
*/

#include <iostream>
#include <stdexcept>
using namespace std;

int main(){
   cout << "请输入两个整数:\n";
   int v1, v2;
   try{
           cin >> v1 >> v2;
           if(v2 == 0)
               throw runtime_error("除数为零！");
           cout << "v1 / v2 = " << v1 / v2 << endl;
           
   }catch(int i){
       
   }
    return 0;
}