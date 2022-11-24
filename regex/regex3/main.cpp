#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main()
{
    string data="<person>\n <first>Nico</first>\n <last>Josuttis</last>\n </person>\n";
//    string data="<person><first>Nico</first><last>Josuttis</last></person>";
    regex reg("<(.*)>(.*)</(\\1)>");
//    regex reg("<(.*)>([^>]*)</(\\1)>");
//    auto pos=data.cbegin();
//    auto end=data.cend();
//    smatch m;
    //需要把传进去的迭代器为const
//    for(; regex_search(pos,end,m,reg);pos=m.suffix().first){
//        cout<<"match: "<<m.str()<<endl;
//        cout<<"  tag: "<<m.str(1)<<endl;
//        cout<<"value: "<<m.str(2)<<endl<<endl;
//    }
    sregex_iterator pos(data.cbegin(),data.cend(),reg);
    sregex_iterator end;
    for(;pos!=end;++pos){
        cout<<"match: "<<pos->str()<<endl;
        cout<<"  tag: "<<pos->str(1)<<endl;
        cout<<"value: "<<pos->str(2)<<endl<<endl;
    }

    cout << endl << "Hello World!" << endl;
    return 0;
}

int main1()
{
//    string data="<person>\n <first>Nico</first>\n <last>Josuttis</last>\n </person>\n";
    string data="<person><first>Nico</first><last>Josuttis</last></person>";
//    regex reg("<(.*)>(.*)</(\\1)>");
    regex reg("<(.*)>([^>]*)</(\\1)>");
    auto pos=data.cbegin();
    auto end=data.cend();
    smatch m;
    //需要把传进去的迭代器为const
    for(; regex_search(pos,end,m,reg);pos=m.suffix().first){
        cout<<"match: "<<m.str()<<endl;
        cout<<"  tag: "<<m.str(1)<<endl;
        cout<<"value: "<<m.str(2)<<endl<<endl;
    }

    cout << endl << "Hello World!" << endl;
    return 0;
}
