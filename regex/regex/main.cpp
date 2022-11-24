#include <iostream>
#include <regex>
using namespace std;

int main()
{
    regex reg("<.*>.*</.*>");
    bool bMatch=regex_match("<tag>value</tag>",reg);

    cout<<"match result: "<<boolalpha<<bMatch<<endl;
    cout << "Hello World!" << endl;
    return 0;
}
