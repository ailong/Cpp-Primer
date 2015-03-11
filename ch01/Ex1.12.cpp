/* 
* @Author: anchen
* @Date:   2014-12-26 14:56:18
* @Last Modified by:   anchen
* @Last Modified time: 2014-12-26 15:00:55
*/

#include <iostream>

using namespace std;

int main(){
    int sum = 0;
    for(int i=-100;i<=100;i++){
        sum += i;
        std::cout<<"now,sum is: "
                 <<sum<<std::endl;
    }
    std::cout<<sum<<std::endl;
    return 0;
}