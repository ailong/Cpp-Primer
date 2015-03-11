/* 
* @Author: anchen
* @Date:   2014-12-26 11:08:57
* @Last Modified by:   anchen
* @Last Modified time: 2014-12-26 11:15:20
*/

#include <iostream>

using namespace std;

int main(){
    /*
     *注释对/* 嵌套注释*/非法
     */
    std::cout<<"Enter two numbers:"<<std::endl;
    int v1=0,v2=0;
    std::cin>>v1>>v2;
    std::cout<<"The sum of "<<v1
             <<" and "<<v2
             <<" is "<<v1+v2<<std::endl;
    return 0;
}