include <iostream>
#include <string>
using namespace std;
void appendDemo(string stra, string strb)
{
    stra.append(strb);
    cout << "Using append() : ";
    cout << stra << endl;
}
int main()
{
    string stra("ammu ");
    string strb("priya");
  
    cout << "Original String : " << stra << endl;
    appendDemo(stra, strb);
  
    return 0;
}
