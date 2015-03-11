/* 
* @Author: anchen
* @Date:   2014-12-27 15:05:41
* @Last Modified by:   anchen
* @Last Modified time: 2014-12-27 15:22:00
*/

#include <iostream>
#include "Sales_item.h"
using namespace std;

int main(){
   Sales_item currItem, item;
   std::cout << "请输入多本书：" << std::endl;
   if(std::cin >> currItem){
       int cnt = 1;
       while(std::cin >> item){
           if(currItem.isbn() == item.isbn()){
               cnt++;
           }else{
               std::cout << "ISBN为: " << "'"  << currItem.isbn() << "'" << " 的书的数目是: " << cnt << std::endl;
               cnt = 1;
               currItem = item;
               //break;
           }
       }
       //std::cout << "ISBN为: " << "'"  << item.isbn() << "'" << " 的书的数目是: " << cnt << std::endl;
   }
    return 0;
}