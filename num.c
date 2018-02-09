#include <iostream>
#include <string>
using namespace std;
void appendDemo(string str)
{
 append(str);
    cout << "Using append() : ");
}
int main()
{
    string str("priya");
    cout << "Original String : " << str << endl;
    return 0;
}
