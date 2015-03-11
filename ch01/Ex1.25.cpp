/* 
* @Author: anchen
* @Date:   2014-12-27 15:23:53
* @Last Modified by:   anchen
* @Last Modified time: 2014-12-27 15:34:33
*/

#include <iostream>
#include "Sales_item.h"
using namespace std;

int main(){
    Sales_item total;//保存下一条交易记录的变量
    //读取第一条交易记录，并确保有数据可以处理
    if(std::cin>>total){
        Sales_item trans;   //保存和的变量
        //读取并处理剩余交易记录
        while(std::cin>>trans) {
            if(trans.isbn() == total.isbn())
                total += trans;   //更新纵销售额
            else{
                //打印前一本书的结果
                std::cout<<total<<std::endl;
                total = trans;
            }
        }
        std::cout<<total<<std::endl;   //打印最后一本书的结果
    }else{
            //没有输入，警告用户
            std::cerr<<"没有正确输入数据~！"<<std::endl;
            return -1;  //表示失败
    }
    return 0;
}