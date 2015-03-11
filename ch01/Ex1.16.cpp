/* 
* @Author: anchen
* @Date:   2014-12-26 16:01:45
* @Last Modified by:   anchen
* @Last Modified time: 2014-12-26 16:10:37
*/

#include <iostream>

using namespace std;

int main(){
    int sum = 0, val = 0;
    std::cout<<"请输入需要求和的整数："<<std::endl;
    while(std::cin>>val) {
        sum += val;
    }
    std::cout<<" The Sum is: "<<sum<<std::endl;
    return 0;
}