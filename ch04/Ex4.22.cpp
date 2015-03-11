/* 
* @Author: anchen
* @Date:   2015-01-11 09:03:47
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-11 09:10:43
*/

#include <iostream>

using namespace std;

int main(){
    cout << "请输入成绩" << endl;
   int ival;
   cin >> ival;
  
   string report;
   if(ival < 60){
       report = "Fail";
   }else if(ival < 75){
       report = "Low Pass";
   }else{
       report = "High Pass";
   }
 

   report =  (ival > 60 ) ? ((ival < 75) ? "LowPass" : "HeighPass") : "Fail";
 
   cout << report << endl;
    return 0;
}