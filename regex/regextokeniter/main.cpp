#include <iostream>
#include <string>
#include <algorithm>
#include <regex>
using namespace std;

int main()
{
    string data="<person>\n <first>Nico</first>\n <last>Josuttis</last>\n </person>\n";
    regex reg("<(.*)>(.*)</(\\1)>");
    sregex_token_iterator pos(data.cbegin(),data.cend(),reg,{0,2});
    sregex_token_iterator end;
    for(;pos!=end;++pos){
        cout<<"match: "<<pos->str()<<endl;
    }
    cout << endl;
    string names="nico, jim , helmut , pul  , tim, john paul, rita";
//    regex sep("[ \t\n]*[,;:.][ \t\n]*");
//    regex sep("[[:space:]]*[,;:.][[:space:]]*");
    regex sep("[\s]*[,;:.][\s]*");
    sregex_token_iterator pn(names.cbegin(),names.cend(),sep,{-1});
    sregex_token_iterator en;
    for(;pn!=en;++pn){
        cout<<"name: "<<pn->str()<<endl;
    }

    cout << "Hello World!" << endl;
    return 0;
}
