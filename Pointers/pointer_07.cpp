#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int *p = 0;
    if(p){
        cout << p << endl;
    }
    else{
        cout << "null pointer..." << endl;
    }

    if(*p){
        cout << *p << endl;
    }
    else{
        cout << "=========" << *p << endl;
    }
    return 0;
}
