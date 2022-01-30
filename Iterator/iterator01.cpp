//
// Created by WUXIANGCHAO on 2021/12/10.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string a = "test iterator";
    for (auto it = a.begin(); it != a.end() && !isspace(*it); ++ it){
        *it = toupper(*it);
    }
    cout << a << endl;

    string test = "test some";
    for (string::iterator it = test.begin(); it != test.end() && !isspace(*it); ++it) {
        cout << typeid(it).name() << endl;
        cout << "===============================" << endl;
    }

    vector<string> vv{"wwd", "qwqwq"};
    cout << typeid(vv).name() << endl;
    return 0;
}