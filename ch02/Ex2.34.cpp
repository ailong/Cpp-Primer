/* 
* @Author: anchen
* @Date:   2015-01-04 15:12:44
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-04 15:14:38
*/

#include <iostream>

using namespace std;

int main(){
   int i = 0, &r = i;
   auto a = r;
   
   const int ci = i, &cr = ci;
   auto b = ci;
   auto c = cr;
   auto d = &i;
   auto e = &ci;
   auto &g = ci;
   
   std::cout <<"i:"<<i <<" "<<"r:"<<r<<" "<<"ci:"<<ci<<" "<<"cr:"<<" "<<cr<<std::endl;
   std::cout <<"a:" << a << " " << "b:"<<b<<" " << "c:" << c <<" " <<"*d:" <<*d<<" "<< "*e:"<<*e<<" "<<"g:"<<g<<std::endl; 
   a = 42; b = 42; c = 42;
   std::cout <<"i:"<<i <<" "<<"r:"<<r<<" "<<"ci:"<<ci<<" "<<"cr:"<<" "<<cr<<std::endl;
   std::cout <<"a:" << a << " " << "b:"<<b<<" " << "c:" << c <<" " <<"*d:" <<*d<<" "<< "*e:"<<*e<<" "<<"g:"<<g<<std::endl; 
   std::cout <<"a:" << a << " " << "b:"<<b<<" " << "c:" << c <<" " <<"*d:" <<*d<<" "<< "*e:"<<*e<<" "<<"g:"<<g<<std::endl;
   
    return 0;
}