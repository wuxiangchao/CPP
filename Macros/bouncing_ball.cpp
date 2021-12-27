//
// Created by WUXIANGCHAO on 2021/11/24.
//
#include <iostream>
#include <string>

using namespace std;

#include <ncurses.h>
#include "myMacros.h"

#define ESC            27

unsigned long my_delay = 5000000;

int main(int argc, char **argv)
{
    int x = 2, y = 2, dx = 1, speed = 0;
    bool end = false;
    string floor(80, '-'),
           header = " **** BOUNCING BALL **** ",
           commands = "[Esc] = 结束"
                      "[+] = 加速         [-] = 减速";
    COLOR(WHITE, BLUE);
    CLS;
    LOCATE(1, 25);
    cout << header;
    LOCATE(24, 1);
    cout << floor;
    LOCATE(25, 10);
    cout << commands;

    while (!end)
    {
        LOCATE(y, x);
        cout << 'O';
        for (long wait = 0; wait < my_delay; ++wait);
        if(x == 1 || x == 79) dx = -dx;
        if(y == 23)
        {
            speed = -speed;
            if(speed == 0) speed = -7;
        }
        speed += 1;

        LOCATE(y, x);
        cout << ' ';
        y += speed;
        x += dx;

        if(getch() != '0')
        {
            switch (getchar()) {
                case '+': my_delay -= my_delay / 5;
                break;
                case '-':
                    my_delay += my_delay / 5;
                    break;
                case ESC:
                    end = true;
            }
        }
    }
    NORMAL;
    CLS;
    return 0;
}
