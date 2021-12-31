//
// Created by sirope on 2021/12/28.
//
#include <iostream>

using namespace std;

string::size_type  find_char(const string &s, char c, string::size_type &occurs);

int main(int argc, char **argv)
{
    string::size_type cnt = 0;
    string test = "where are you from";
    char c = 'e';
    unsigned long retr = find_char(test, c, cnt);
    cout << "retr = " << retr << endl;
    cout << "cnt = " << cnt << endl;
    return 0;
}

string::size_type  find_char(const string &s, char c, string::size_type &occurs)
{
    auto ret = s.size();
    occurs = 0;
    for(decltype(ret) i = 0; i != s.size(); ++i)
    {
        cout <<"********** i = " << i << "********ret = " << ret << "**********s.size() = " << s.size() << endl;
        if(s[i] == c)
        {

            if (ret == s.size()) {
                cout << "====ret = " << ret << endl;
                ret = i;
                cout << "====ret = " << ret << endl;
            }
            ++occurs;
        }
    }
    return ret;
}
