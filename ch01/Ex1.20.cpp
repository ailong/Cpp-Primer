/* 
* @Author: anchen
* @Date:   2014-12-26 17:47:36
* @Last Modified by:   anchen
* @Last Modified time: 2014-12-26 17:55:50
*/

#include <iostream>
#include "Sales_item.h"
using namespace std;

int main(){
    Sales_item item1,item2,item3;
    std::cout<<"请输入第一本书："<<std::endl;
    std::cin>>item1;
    std::cout<<"请输入第二本书："<<std::endl;
    std::cin>>item2;
    std::cout<<"请输入第三本书："<<std::endl;
    std::cin>>item3;
    std::cout<<"第一本书:";
    std::cout<<item1<<std::endl;
    std::cout<<"第二本书:";
    std::cout<<item2<<std::endl;
    std::cout<<"第三本书:";
    std::cout<<item3<<std::endl;
    return 0;
}