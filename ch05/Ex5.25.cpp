/* 
* @Author: anchen
* @Date:   2015-01-11 15:31:14
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-16 10:49:02
*/

#include <iostream>
#include <stdexcept>
using namespace std;

int main(){
cout << "请输入两个整数:\n";
   int v1, v2;
 
   while (cin >> v1 >> v2)
   {
       try{
           if(v2 == 0){
               throw runtime_error("除数为零！");
           }else{
               cout << "v1 / v2 = " << v1 / v2 << endl;
               break;
           }
       }catch(runtime_error err){
           cout <<err.what() << "请重新输入！" << endl;
           continue;
       }
   }
    return 0;
}