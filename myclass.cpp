#include <iostream>
using namespace std;

class myclass
{
public:
    int num;
    string str;
};
int main()
{
    myclass obj1, obj2;
    obj1.num = 3;
    obj1.str = "jai shree ram";
    cout << obj1.num << endl
         << obj1.str << endl;
    obj2.num = 5;
    obj2.str = "jai bajaranbali";
    cout << obj2.num << endl
         << obj2.str << endl;
}