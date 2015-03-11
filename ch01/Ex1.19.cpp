/* 
* @Author: anchen
* @Date:   2014-12-26 16:25:39
* @Last Modified by:   anchen
* @Last Modified time: 2014-12-26 16:32:10
*/

#include <iostream>

using namespace std;

int main(){
    int v1 = 0, v2 = 0;
    start:
    std::cout<<"请输入第一个整数：";
    std::cin>>v1;
    std::cout<<"请输入第二个整数：";
    std::cin>>v2;
    if(v1<v2)
    {
        std::cout<<"两个整数范围内拥有的整数为："<<endl;
        while(v1<=v2) {
                std::cout<<v1<<",";
                v1++;
        }
    } 
    else
    {
        std::cout<<"第一个整数比第二个整数大，请重新输入……"<<endl;
        goto start;
    }
    return 0;
}