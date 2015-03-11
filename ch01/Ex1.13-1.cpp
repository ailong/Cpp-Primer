/* 
* @Author: anchen
* @Date:   2014-12-26 15:05:52
* @Last Modified by:   anchen
* @Last Modified time: 2014-12-26 15:08:37
*/

#include <iostream>

using namespace std;

int main(){
    int sum = 0;
    for(int i=50;i<=100;i++)
    {
        sum += i;
    }
    std::cout<<"The sum of 50 to 100 is "
             <<sum<<std::endl;
    return 0;
}