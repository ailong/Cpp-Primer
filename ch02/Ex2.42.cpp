/* 
* @Author: anchen
* @Date:   2015-01-04 15:35:32
* @Last Modified by:   anchen
* @Last Modified time: 2015-01-04 17:29:00
*/

#include <iostream>
 
using namespace std;

struct Sales_data{
   std::string book_Num;
   unsigned sold_Num = 0;
   double inCome = 0.0;
};

int main()
{ 
   Sales_data book1;
   Sales_data book2;
   
   double price = 0.0;
   
   std::cin >> book1.book_Num >> book1.sold_Num >> price;
   
   book1.inCome = book1.sold_Num * price;
   
   
   while(std::cin >> book2.book_Num >> book2.sold_Num >> price)
   {
       book2.inCome = book2.sold_Num * price;
       
       if(book1.book_Num == book2.book_Num){    
           book1.sold_Num += book2.sold_Num;
           book1.inCome += book2.inCome;
       
       }else{
           std::cout << book1.book_Num << " " << book1.sold_Num << " " << book1.inCome << " ";
           
           if(book1.sold_Num != 0){
               std::cout << book1.inCome / book1.sold_Num << std::endl;
           }
           else{
               std::cout << "No sales"<< std::endl;
           }
           
           book1.book_Num = book2.book_Num;
           book1.sold_Num = book2.sold_Num;
           book1.inCome = book2.inCome;
       }
   }
   
   std::cout << book1.book_Num << " " << book1.sold_Num << " " << book1.inCome << " ";
           
   if(book1.sold_Num != 0){
       std::cout << book1.inCome / book1.sold_Num << std::endl;
   }
   else{
       std::cout << "No sales"<< std::endl;
   }
           
   return 0;
}