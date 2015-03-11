/* 
* @Author: anchen
* @Date:   2014-12-26 16:12:43
* @Last Modified by:   anchen
* @Last Modified time: 2014-12-26 16:18:02
*/

#include <iostream>

using namespace std;

int main(){
    int currVal = 0, val = 0;
    if(std::cin>>currVal)
    {
        int cnt = 1;
        while(std::cin>>val) {
            if(val == currVal)
                ++cnt;
            else
                std::cout<<currVal<<" occurs "
                         << cnt <<" times "<<std::endl;
        }
    }   
    return 0;
}