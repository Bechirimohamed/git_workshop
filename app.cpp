
/*#include <iostream>
using namespace std;

int main()
{
    cout << "======================================\n";
    cout << "====calculate your age application====\n";
    cout << "======================================\n";

    int age;
    cin >> age;

    int age_by_days = age * 365;
    int age_by_hours = age_by_days * 24;
    int age_by_munites = age_by_hours * 60;
    int age_by_seconds = age_by_munites * 60;

    cout << "age by days is :" << age_by_days << "days\n";
    cout << "age by hours is :" << age_by_hours << "hours\n";
    cout << "age by hours is :" << age_by_munites << "munites\n";
    cout << "age by hours is :" << age_by_seconds << "seconds\n";

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    // Write Your Code Here
    int age = 40;
    int period = 10;
    // Do Not Edit The Next 2 Lines
    cout << "My Age Is: " << age << "\n";
    cout << period << " Years Ago My Age Was: " << age - period << "\n";
    cout << "After 10 Years My Age Will Be: " << age + period << "\n";

    // Add The Third Line Below

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    // Write Your One Line Code Here
    int a = 5; int b = 6; int c = 7;
    // Do Not Edit Below
    a = 10, b = 20, c = 70;
    cout << "Sum Of All Number Is: " << a + b + c;
    return 0;
}*/

/*
    name        [ Valid | Good Practice ]
    NAME        [ Valid | Bad Practice ]
    1name       [ ??? ] => Reason ?
    __name      [ ??? ] => Reason ?
    name@name   [ ??? ] => Reason ?
    name10name  [ ??? ] => Reason ?
    name!name   [ ??? ] => Reason ?
    first_NAME  [ ??? ] => Reason ?
    first_name  [ ??? ] => Reason ?
    firstName   [ ??? ] => Reason ?
    first name  [ ??? ] => Reason ?
    fn          [ ??? ] => Reason ?
    public      [ ??? ] => Reason ?
    Public      [ ??? ] => Reason ?


#include <iostream>
using namespace std;

int main()
{
    // Write my_text Variable Content Here
    string my_text = "============\n== Elzero ==\n============";

    // Do Not Edit Below
    cout << my_text;
    return 0;
}

// Needed Output

#include <iostream>
using namespace std;

int main()
{
    // Do Not Edit Below
    int a, b, c = 100;

    // Add Your Code Here
    a = b = c = 100;

    // Do Not Edit Below
    cout << a + b + c; // 300
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    // Do Not Edit Below
    int a = 210, b = -50, c = -40;

    // Write Your cout Code Here
    cout << a - b - c;
    return 0;
}

#include <iostream>
using namespace std;

int num = 50;

int read()
{
    int num = 100;
    cout << num;
    return 0;
}

int play()
{
    int num = 200;
    read();
    return 0;
}

int main()
{
    play();
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    // Edit Here To Fix The Error
    const int current_year = 2022;
    const int birth_year = 1982;

    // Do Not Edit Here

    int age_in_years = current_year - birth_year;
    cout << age_in_years;
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    // Write Your Code Here
int num = 10;
cout << num * num;
    // Num 10
    // Needed Output 100 [10 * 10]
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    // Write Your Code Here
    int Number_One = 10;
    int Number_Two = 100;
    cout << Number_One * Number_Two;
    // Number One => 10
    // Number Two => 100
    // Needed Output 1000 [10 * 100]
    return 0;
}*/

/*#include <iostream>
using namespace std;

int main()
{
    cout << "\"Bello\b\b\b\b\bHello Elzeroo\b";
    cout << " Web Schoolll\b\b";
    cout << " I Love Programming";
    cout << " Too Much";
    cout << " Specially C++\"";
    return 0;
}*/

/* Needed Output
"Hello Elzero Web School I Love Programming Too Much Specially C++"*/

/*#include<iostream>
using namespace std;

int main()
{
    int num = 10;
    string name = "mohamed";
    bool status = true;

    cout << sizeof(num) << "\n";
    cout << sizeof(name) << "\n";
    cout << sizeof(status) << "\n";

    return 0;
}*/

// ==============================================================

/*
// Example

false // bool => Boolean

'a' // char => character

'9' // char => character

9   // int => intiger

true // // bool => Boolean

100  // int => intiger

-10  // int => intiger

0    // int => intiger

false // bool => Boolean

10.9 // 10.9f => float*/

/*#include<iostream>
using namespace std;

int main()
{
    double salary = 5000.98;
    cout << sizeof(double) << " bytes\n";

    cout << sizeof(double) * sizeof(salary) << " bits\n";
    return 0;
}
// 8 Bytes
// 64 Bits*/

// Output Needed

/*#include<iostream>
using namespace std;

int main()
{
    cout  << " Maximum Integer Number Is => " << INT_MAX << "\n";
    cout  << " Minimum Integer Number Is => " << INT_MIN << "\n";
    cout  << " Maximum Short Integer Number Is => " << SHRT_MAX << "\n";
    cout  << " Minimum Short Integer Number Is => " << SHRT_MIN << "\n";
    return 0;
}*/

// Edit Line To Make 8 Become 4

/*#include<iostream>
using namespace std;

int main()
{
    cout << sizeof(10.5f + 5 + 20.5f + 10) << "\n"; // 8
}*/

/*#include<iostream>
using namespace std;

int main()
{
char a = '~';
char b = '&';
char c = '%';
char d = 'A';

// Output Needed

cout <<  "ASCII Value of ~ Is " << int('~') << "\n";
cout <<  "ASCII Value of & Is " << int('&') << "\n";
cout <<  "ASCII Value of % Is " << int('%') << "\n";
cout <<  "ASCII Value of A Is " << int('A') << "\n";

cout <<  "ASCII Value of ~ Is " << int(a) << "\n";
cout <<  "ASCII Value of & Is " << int(b) << "\n";
cout <<  "ASCII Value of % Is " << int(c) << "\n";
cout <<  "ASCII Value of A Is " << int(d) << "\n";
}*/

/*#include<iostream>
using namespace std;

int main()
{
    int a = 69;
    int b = 108;
    int c = 122;
    int d = 101;
    int e = 114;
    int f = 111;

    // Output Needed

    cout << "Character Of This ASCII Value 69 Is " << char(a) << "\n";
    cout << "Character Of This ASCII Value 108 Is " << char(b) << "\n";
    cout << "Character Of This ASCII Value 122 Is " << char(c) << "\n";
    cout << "Character Of This ASCII Value 101 Is " << char(d) << "\n";
    cout << "Character Of This ASCII Value 114 Is " << char(e) << "\n";
    cout << "Character Of This ASCII Value 111 Is " << char(f) << "\n";

    // Output Needed In Last Line
        cout << "\"" << char(a);
        cout << char(b);
        cout << char(c);
        cout << char(d);
        cout << char(e);
        cout << char(f) << "\"";
    // "Elzero"
}*/

/*#include<iostream>
using namespace std;

int main()
{
    int a = 1;
    int b = 13;
    int c = 17;
    int d = 70;

        // cout << "\"" << int('e') << "\n";
        // cout << int('w') << "\n";
        // cout << int('s') << "\"";

        // cout << "\"" << int('E') << "\n";
        // cout << int('W') << "\n";
        // cout << int('S') << "\"";

        cout << "\"" << char(a+b+c+d);
        cout << char(a+a+b+c+c+d);
        cout << char(a+a+b+b+c+d) << "\"" << "\n";
        // Output Needed
        // "ews"

        cout << "\"" << char(d-a);
        cout << char(c+d);
        cout << char(b+d) << "\"";
    // Output Needed
    // "EWS"
}*/

// Edit Anything Except Values

/*#include<iostream>
using namespace std;

int main()
{
    short int a = 100;
    double b = 15001500;
    long double c = 100.54565746;

    // Do Not Edit
    cout << sizeof(a) << " Bytes\n"; // 2 Bytes
    cout << sizeof(b) << " Bytes\n"; // 8 Bytes
    cout << sizeof(c) << " Bytes\n"; // 16 Bytes
}*/

/*#include<iostream>
using namespace std;

int main()
{
    // Edit Anything Except Values
    unsigned int a = 100;
    int b = -100;
    short c = 100;
    float d = 500.550f;

    // Do Not Edit
    cout << a << "\n"; // 100
    cout << b << "\n"; // -100
    cout << c << "\n"; // 100
    cout << d << "\n"; // 500.550
}*/

/*#include<iostream>
using namespace std;

int main()
{
    // Add Type Alias Here
    // using lli = long long int;
    typedef long long int lli;
    lli num = 150050005;
    // Do Not Edit
    // lli num = 150050005; // This Is Long Long Int
    cout << num << "\n"; // 150050005
    return 0;
}*/

/*#include<iostream>
using namespace std;

int main()
{
    // Do Not Edit Here
short int a = 100;
float b = 98.5f;
double c = 1.7;

// Edit This Line And Use Type Casting To Get The Output
cout << int(a + b + c) << "\n"; // 200
}*/

#include<iostream>
using namespace std;

int main()
{
    // Do Not Edit Here
    short a = 1000;
    int b = 10000;
    long double c = 5.560000505012;

    // Change ??? To Something Else To Get The Output
    cout << sizeof(c) - sizeof(b) << "\n"; // 12
    cout << sizeof(b) + sizeof(c) << "\n"; // 20
    cout << sizeof(a) * sizeof(c) << "\n"; // 32
    cout << a * 5 << "\n"; // 5000
    cout << int('P') << "\n"; // 80
    cout << char(char(b + c) * char(b)) << "\n"; // P
}

