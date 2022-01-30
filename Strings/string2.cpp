//
// Created by WUXIANGCHAO on 2021/11/24.
//
#include <iostream>
#include <string>

#define PROMPT    (cout << "Please enter some text!" << endl)
#define NOTE      (cout << "Terminate the input with an empty line" << endl)

using namespace std;

int main(int argc, char ** argv)
{
    PROMPT;
    NOTE;
    string text, line;
    while(true)
    {
        getline(cin, line);  // get line_content from cin to line
        if(line.length() == 0) break;
        text = line + '\n' + text;
    }

    cout << line << "\n"
         << "Your line of text in reverse order:"
         << '\n' << line << endl;
    cout << text << endl;
    return 0;
}