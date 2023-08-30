#include<iostream>
using namespace std;
class test
{
    int x;
    public:
    test(int a=0):x(a){cout<<"1st";}
    test(const int &i):x(i){cout<<"2nd";}

};
int main()
{
    test m1=5;
    return 0;
}
