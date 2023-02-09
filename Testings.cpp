#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Starting Program" << endl;
    
    string address = "www.turingscraft.com";
    address = "http://" + address;

    cout << boolalpha << address;

    cout << endl << "Ended Program" << endl;
    return 0;
}

/*
*   double m = 2342;
*   cout << setprecision(3) << fixed << m; // prints 2342.000
*/

/*
* int age = 22;
* cout << boolalpha << (age >= 21);
*/


/*
* int distance = 21, speed = 2;
* double Value = (static_cast<double>(distance) / speed);
* cout << static_cast<double>(distance) / speed;
*/

/*
* float test;
* cout << "Starting Program" << endl;
* test = 2.0e38 * 1000; // should overflow test
* cout << test << endl;
* test = 2.0e-38 / 2.0e38; // should underflow test
* cout << test << endl;
* return 0;
*/
// 1. {//string num = "num";
    //string cost = "cost";
    //cout << num << endl << " " << endl << cost;
//}

/*
* int fu = 66934;
* sizeof(fu);
* return 0; 
*/

/*
*    long double apple;
*    cout << "The size of an integer is " << sizeof(int) << endl;
*    cout << "The size of an long integer is " << sizeof(long) << endl;
*    cout << "The size of an apple is " << sizeof(apple) << endl;
*/