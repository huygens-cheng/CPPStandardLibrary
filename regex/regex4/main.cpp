#include <iostream>
#include <regex>
#include <string>

using namespace std;

/**
 * \chapter{The Standard Template Library}%
 * \index{STL}%
 * \MAININDEX{standard template library}%
 * \SEEINDEX{standard template library}{STL}%
 *
 * @brief main
 * @return
 */
int main()
{
    string pat1=R"(^\\.*index\{([^}]*)\})";
    string pat2=R"(^\\.*index\{(.*)\}\{(.*)\})";
    regex pat (pat1+"\n"+pat2,regex_constants::egrep|regex_constants::icase);
//    regex pat (pat1,regex_constants::egrep|regex_constants::icase);

    string data=string("\\index{STL}%\n")+
            "\\MainINDEX{standard template library}%\n"+
            "\\SEEINDEX{standard template library2}{STL}%\n";

//    string data((istreambuf_iterator<char>(cin)), istreambuf_iterator<char>());

    cout<<data<<endl;
    smatch m;
    auto pos=data.cbegin();
    auto end=data.cend();
    for(;regex_search(pos,end,m,pat);pos=m.suffix().first){
        cout<<"match: "<<m.str()<<endl;
        cout<<"value: "<<m.str(1)+m.str(2)<<endl;
        cout<<"  see: "<<m.str(3)<<endl<<endl;
    }

    cout << "Hello World!" << endl;
    return 0;
}
