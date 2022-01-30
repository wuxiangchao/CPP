#include <iostream>

using namespace std;


/**
 * 
 */
int main(int argc, char const *argv[])
{
    /*
     *引用为对象起了另一个名字，引用类型引用零一一种类型，引用必须在定义的同时初始化
     */
    int iVal = 1024;
    int &refVal = iVal;

    cout << "iVal = " << iVal << endl;
    cout << "refVal = " << refVal << endl;

    /*
     *一般在初始化变量时，初始值会被拷贝到新建的对象中。然而在定义引用时，
     *程序把引用和他的初始值绑定在一起，而不是将初始值拷贝给引用。
     *一旦初始化完成，引用将和它的初始值一直绑定在一起。
     *因为无法引用重新绑定到另外一个对象，因此引用必须初始化。
     *
     */

    // Note: 引用即别名，引用并非对象，相反的，它只是为一个已经存在的对象起的
    // 另外一个名字

    /*
     * 定义一个引用之后，对其进行的所有操作都是再与之绑定的对象上进行的
     */
    refVal = 2; // 把2赋给refVal指向的对象, 等同于iVal = 2

    cout << "iVal = " << iVal << endl;
    cout << "refVal = " << refVal << endl;

    int ii = refVal;

    cout << "ii = " << ii << endl;

    /*
     *为引用赋值, 实际上是把值付给了与引用绑定的对象。获取引用的值，
     *实际上是获取了与引用绑定的对象的值。以引用作为初始值，实际上是以与引用绑定
     *的对象作为初始值:
     */
    int &refVal3 = refVal;
    int i = refVal;

    cout << "refVal3 = " << refVal3 << endl;
    cout << "i = " << i << endl;

    // 因为引用本身不是一个对象，所以不能定义引用的引用

    /**
     * 允许在一条语句中定义多个引用，其中每个引用标识符都必须以符号&开头
     */

    int i3 = 1024, i2 = 2048;
    int &r = i3, r2 = i2; // 其中r是i的引用(i的别名)，与i绑定，任何对r的操作等同于对i的操作， r2是int

    cout << "r = " << r << endl;

    r += 1;

    cout << "r = " << r << endl;

    cout << "i3 = " << i3 << endl;


    return 0;
}
