/* 
* @Author: anchen
* @Date:   2014-12-26 14:27:45
* @Last Modified by:   anchen
* @Last Modified time: 2014-12-26 14:46:40
*/

#include <iostream>

using namespace std;

int main(){
    int v1,v2;
    std::cout<<"请输入第一个整数：";
    std::cin>>v1;
    std::cout<<"请输入第二个整数：";
    std::cin>>v2;
    std::cout<<"两个整数范围内拥有的整数为："<<endl;

    while(v1 > v2) {
        std::cout<<v1<<",";
        v1--;
    }
    while(v1 <= v2) {
        std::cout<<v1<<",";
        v1++;
    }
    return 0;
}