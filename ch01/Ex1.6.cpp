/* 
* @Author: anchen
* @Date:   2014-12-26 10:54:14
* @Last Modified by:   anchen
* @Last Modified time: 2014-12-26 11:00:26
*/

#include <iostream>

using namespace std;

int main(){
    std::cout<<"Enter two numbers:"<<std::endl;
    int v1=0,v2=0;
    std::cin>>v1>>v2;
    std::cout<<"The sum of "<<v1
             <<" and "<<v2
             <<" is "<<v1+v2<<std::endl;
    return 0;
}