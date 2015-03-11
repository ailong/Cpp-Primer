#include <iostream>
#include <string>
#include <vector>

using namespace std;

int LargerOne(const int _i,const int* _ip);


int main()
{
    int c=6;
    cout<<LargerOne(7,&c);


    return 0;
}


int LargerOne(const int _i, const int *_ip)
{
    return (_i > *_ip) ? _i : *_ip;
}
