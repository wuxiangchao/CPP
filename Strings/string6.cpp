//
// Created by WUXIANGCHAO on 2021/11/24.
//
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    string content_input;
    int count = 0;
    getline(cin, content_input);
    if(content_input.length())
    {
        int content_length = content_input.length();
        if(content_length % 2 == 0)
        {
            for(int index = 0; index < content_length / 2 ; ++ index)
            {
                if(content_input[index] == content_input[content_length - 1 - index]) count++;
            }
            if(count == content_length / 2)
                cout << content_input << " is palindrome." << endl;
            else
                cout << content_input << " is not palindrome." << endl;
        }
        else{
            for(int index = 0; index < (content_length - 1) / 2; ++ index){
                if(content_input[index] == content_input[content_length - 1 - index]) count++;
            }
            if(count == (content_length -1) / 2)
                cout << content_input << " is palindrome." << endl;
            else
                cout << content_input << " is not palindrome." << endl;
        }
    }
    else
    {
        cout << "Nothing input..." << endl;
    }
    return 0;
}

