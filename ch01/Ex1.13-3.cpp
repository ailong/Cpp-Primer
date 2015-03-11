/* 
* @Author: anchen
* @Date:   2014-12-26 15:14:49
* @Last Modified by:   anchen
* @Last Modified time: 2014-12-26 15:33:02
*/

#include <iostream>

using namespace std;

int main(){
    int v1,v2,maxer,miner;
    std::cout<<"请输入第一个整数：";
    std::cin>>v1;
    std::cout<<"请输入第二个整数：";
    std::cin>>v2;
    maxer=v1>=v2?v1:v2;
    miner=v1<v2?v1:v2;
    std::cout<<miner<<"-"<<maxer<<"之间的整数有："<<std::endl;
    for(int i = miner;miner<=maxer;miner++)
    {
        std::cout<<miner<<","<<std::endl;
    }
    return 0;
}