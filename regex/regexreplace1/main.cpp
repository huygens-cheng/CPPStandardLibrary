#include <iostream>
#include <regex>
#include <iterator>
#include <string>
using namespace std;

int main()
{
    string data="<person>\n <first>Nico</first>\n <last>Josuttis</last>\n</person>\n";
//    regex reg("<(.*)>(.*)</(\\1)>");
    regex reg(R"(<(.*)>(.*)</(\1>))");

    cout<<data<<endl;
    string rpat=R"(<$1 value="$2"/>)";
    cout<<regex_replace(data,reg,rpat)<<endl;
//    cout<<regex_replace(data,reg,"<$1 value=\"$2\"/>")<<endl;
    cout<<regex_replace(data,reg,"<\\1 value=\"\\2\"/>",regex_constants::format_sed)<<endl;

    string res2;
    regex_replace(back_inserter(res2),
                        data.cbegin(),data.cend(),
                        reg,"<$1 value=\"$2\"/>",
                        regex_constants::format_no_copy | regex_constants::format_first_only);
    cout<<res2<<endl;
    cout << "Hello World!" << endl;
    return 0;
}
