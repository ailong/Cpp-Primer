/* 
* @Author: anchen
* @Date:   2014-12-27 14:18:14
* @Last Modified by:   anchen
* @Last Modified time: 2014-12-27 15:04:20
*/

#include <iostream>
#include "Sales_item.h"
using namespace std;

int main(){
    Sales_item item,curreItem,itemSum;
    std::cout<<"请输入相同ISBN的书：";
    if(std::cin>>curreItem){
        itemSum = curreItem;
        while(std::cin>>item) {
            if(item.isbn() == curreItem.isbn())
                itemSum += item;
            else
            {
                std::cout<<itemSum<<std::endl;//输入不同的书则跳出
                break;
            }
        }
    }
    return 0;
}