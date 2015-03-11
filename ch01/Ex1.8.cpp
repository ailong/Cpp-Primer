/* 
* @Author: anchen
* @Date:   2014-12-26 11:23:35
* @Last Modified by:   anchen
* @Last Modified time: 2014-12-26 14:14:29
*/

#include <iostream>

using namespace std;

int main(){
    std::cout<<"/*"<<std::endl;//正确   输出“ /* ”
    std::cout<<"*/"<<std::endl;//正取   输出“ */ ”
    //嵌套错误,错误信息readme Ex1.8
    //std::cout<</* "*/" */<<std::endl;
    std::cout<</* "*/" /* "/*" */;//正确   输出“ /* ”
    return 0;
}