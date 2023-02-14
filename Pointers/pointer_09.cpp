#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /*
     * 指针是指向另外一种类型的复合类型。与引用类似，
     * 指针也实现了对其他对象的间接访问。
     * 指针与引用相比有不同点: 
     * 1、指针本身就是一个对象，允许对指针赋值和拷贝，
     *    指针在其生命周期内可以先后指向几个不同的对象
     * 2、指针无须在定义时赋初值，与其他内置类型一样，在
     *    块作用域内定义的指针如果没有被初始化，也许将拥有一个
     *    不确定的值。 
     */

    int *ip1, *ip2; // 学会用语言描述一个指针: ip1、ip2都是指向int型对象的指针
    double dp, *dp2; // dp是一个double类型的对象，dp2是一个指向double类型对象的指针

    /*
     * 指针存放某个对象的地址，要想获取该地址，需要使用取地址符(&)
     */

    int iVal = 30;
    int *ipVal = &iVal; // 指针存放变量的地址，通过&获取地址，赋给指针
    cout << "ipVal = " << ipVal << endl; // 打印地址
    cout << "*ipVal = " << *ipVal << endl; // 解引符获取对象值

    double dVal;
    double *pd = &dVal;
    double *pd2 = pd;

    //int *pi = pd; // 错误: 指针pi的类型和pd的类型不匹配
    /*
     * 因为在生命语句中指针的类型实际上被用于指定它所指向对象的类型
     * 所以二者必须匹配，如果指针指向了一个其他类型的对象，对
     * 该对象的操作将发生错误
     */

    /*
     * 指针的值应是下列4种状态之一:
     * 1、指向一个对象
     * 2、指向紧邻对象所占空间的下一位置
     * 3、空指针，意味着指针没有指向任何对象
     * 4、无效指针： 
     */


    //int i_val = 42;
    //int *p = &i_val; // p存放着变量i_val的地址， 或者或p是指向i_val的指针
    //cout << p << " " << *p << endl;

    int i = 42;
    cout << "i = " << i << "; &i" << &i << endl;
    int &r = i;
    cout << "r = " << r << "; &r = " << &r << endl;
    int *p;
    p = &i;
    *p = i;
    cout << "p = " << p << "; *p = " << *p << endl;
    int &r2 = *p;
    cout << "r2 = " << r2 << "; &r2 = " << &r2 << endl;
    
    return 0;
}
