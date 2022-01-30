//
// Created by WUXIANGCHAO on 2021/11/24.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    string s1("As time by ..."), s2("goes ");
    int pos = s1.find("by");
    if (pos != string::npos)
        s1.insert(pos, s2);
    cout << s1 << endl;
    pos = s1.find("by");
    s1.erase(pos + 3);
    cout << s1 << endl;

    pos = s1.find("time");
    if(pos != string::npos)
        s1.replace(pos, 4, "Bill");
    cout << s1 << endl;
    return 0;
}