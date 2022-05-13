#include <iostream>         // main library for input and output

#define high_value 1000     // Used for a constant variable

using namespace std;        // default namespace which have cin and cout

int main()                  // main function --> the code inside is executed
{

// Comments
    // Single Line Comment
    /*  Multi
        Line
        Comment
    */

// Output
    cout << "Hello World!";                                     // print Hello World! to the console
    cout << "print" << "more than a string with one cout <<";   // print more than a string(text) with 1 cout only
    // String is surrounded with " , but one character with ' --> "Hello", 'A'
    
    cout << endl << "\n" << '\n';                               // print new line in 3 different ways

    // Task 1: print your full name, age, country. Every point on a line. using 1 cout.
    cout << "Ossama Yasser\n" << "20" << "\n" << "Egypt\n";
    // Task 2: print your full name, age, country. Every point on a line.  using 3 cout.
    cout << "Ossama Yasser\n"; 
    cout << 20 << endl;
    cout << "Egypt" << endl;
    /* Output on Console
        Ossama Yasser
        20
        Egypt
    */

// Variables & Data Types
    // How to declare a variable -->   DataType VariableName = value;
    int var_name = 7;       // declare a variable that store integer.
    var_name = 3;           // change the variable value.
                            // OR    
    int x;                  // declare without value
    x = 10;                 // then give a value

    // Data Types
    int INTEGER = 5;                // Integer
    float DecimalNumber = 3.7;      // Decimal Number
    char myCharacter = 'A';         // Letter or Character
    string text = "Hello World!";   // Text (named STRING in programming)
    bool TrueOrFalse = true;        // True or False  #use only one bit in memory
    bool bad = false;               // false not False or FALSE
    // For more data types and specifications --> Google: data types c++
    
    // Naming a variable
    int onlyLetters = 5;            // name with letters  
    int LettersAnd1234 = 5;         // and numbers
    int LettersAnd_And1234 = 5;     // and Underscore(_)
    int _StartWithUnderscore = 5;   // start with underscore is accepted
    int 6_CantStartWithNumber = 5;  // but with number is rejected
    string myPhoneNumber = "01012345678"; // camelCase --> first letter is small and other words start with Capital letters
    string MyPhoneNumber = "###########"; // PascalCase --> first letter of every word is Capital

    // Task 3: print your first name as chars, last name as string, age as int using variables.

    char a1 = 'O', a2 = 's';                        // declare 2 variables in one line
    char a3 = 's', a4 = 'a', a5 = 'm', a6 = 'a';    // declare 4 variables in one line
    // Note: use , not ; between variables. ; is used at end of line only.
    
    string last_name = "Yasser";
    int my_age = 20;
    // Output
    cout << a1 << a2 << a3 << a4 << a5 << a6 << " ";
    cout << last_name << "\n";
    cout << my_age;
    /*Output to Console
        Ossama Yasser
        20
    */
// Input
    string x;           // declare a variable with datatype of what the user will use
    cin >> x;           // input is 1 word
    int x;              // for storing integer number
    cin >> x;           // input is integer number
    cout << x;          // print the value of x
    string x;           // variable for saving the input in it
    getline(cin, x);    // use this function to get more that 1 word, it take full line of input
    cout << x;          // print the full line input
    cout << "\n" << "\t" << "Omar said \" Hi \" "; // print new line ---then--> print tab(4 spaces) ---then--> Omar said " Hi "
    // Task 4: take your first name, and age as input and print both.
    string name;                    // store input here
    int age;                        // store input here
    cout << "Enter your name: ";    // print #######
    cin >> name;                    // store your input to the variable name
    cout << "Enter your age: ";     // print #######
    cin >> age;                     // store your input to the variable age
    cout << name << "\n" << age;    // print the name and age on new line
    /*Output to console
        Enter your name: Ossama
        Enter your age: 20
        Ossama
        20
    */

    long long x; // long long is a data type, use it instead of int when the value is greater than ~10^9
    x = 1234567891011;
// Operators
    // +, -, *, / --> Arithmetic
    int x = 5;              // variable with random value
    int y = 2;              // variable with random value
    int sum = x + y;        // calculate x + y and store to sum // sum = 7
    sum = x - y;            // change the sum to the x-y        // sum = 3
    sum = x * y;                                                // sum = 10
    sum = x / y;                                                // sum = 2 not 2.5 because the data type used is int not float or double
    
    // Modulus(%) --> Division Remainder --> X % Y --> it removes Y from X till X doesnt have Y again.
    int x;
    x = 10%1; // 0
    x = 10%2; // 0
    x = 10%3; // 1
    x = 10%4; // 2
    x = 10%5; // 0
    x = 10%6; // 4
    x = 10%7; // 3
    x = 10%8; // 2
    x = 10%9; // 1
    x = 10%10;// 0
    
    // +=, -=, *=, /=, %= --> X += y; is same as X = X + Y;
    int a;
    a = 10;     // 10
    a += 3;     // 13
    a -= 1;     // 12
    a *= 2;     // 24
    a /= 3;     // 8
    a %= 3;     // 2
    // ++, --  ==> Increment, Decrement ==> Add 1, Subtract 1
    a++;        // 3
    a--;        // 2

    // &&, ||, !
    bool result;
    // && --> AND >> the 2 operands must be true to equal true
    result = (true && true);    // true
    result = (true && false);   // false
    result = (false && true);   // false
    result = (false && false);  // false
    
    // || --> OR >> at least one of the operands must be true so the result be true
    result = (true && true);    // true
    result = (true && false);   // true
    result = (false && true);   // true
    result = (false && false);  // false
    // في العادي الترو والفولس دول مش بنكتبهم.. احنا بنكتب مكانهم شرط زي هل أ اكبر من ب او ا تساوي ب
    // وفي حالة ان الشرط صح يبقى كاننا كتبنا ترو ولو غلط كاننا كتبنا فولس
    // الشرط مشروح بعد شرح NOT



    // ! --> NOT >> it inverse the value
    result = !true;             // false
    result = !false;            // true

    // >, <, >=, <=, ==
    /*
        >   : greater than
        <   : less than
        >=  : greater than or equal
        <=  : less than or equal
        ==  : equal
    */
    int x = 3, y = 100;
    bool result;
    result = (x >  y);  // false
    result = (x <  y);  // true
    result = (x >= y);  // false
    result = (x <= y);  // true
    result = (x == y);  // false

// Extra Notes
    // const, #define --> for declaring a constant variable
    // const dataType VariableName = value; // now you can't change the value
    const int ConstVar = 5;
    // #define VarName Value         --> note that there is no semi-colon(;) --> and you must write it before the "int main()"
    int x = high_value;     // high_value is defined in line 3 in this file // int x = 1000;


    // ASCII table --> every character has a number, for example A == 65 , B == 66 , Z == 90.   SEE THIS --> https://ascii.cl/
    char x = 65; // char x = 'A'

    // e --> is equal to *(10^)     for example  AeB == A*(10^B)
    int x = 3e3; // int x = 3*10^3;  // int x = 3000;
    
    // You can declare multi value in single line
    int a = 3, b = 10, c = 150;
    // OR
    int a, b, c; // declare only
    a = b = c = 5; // assign them a value in a single line. // same as -->  a = 5; b = 5; c = 6;

    // cin.ignore(); --> it is needed when you take input using "cin >>" then using "getline(cin, )"
    // add it before getline(cin, ) if you used cin before it.
    int x;
    cin >> x; // take input with cin
    string tmp;
    cin.ignore(); // because we are going to use getline(cin, ) after cin
    getline(cin, tmp); // take input with getline(cin, )

    return 0; // must be in the end of function(int main()) which is in line 7
}


// BY ossamayasserr @ GitHub and LinkedIn ♥♥♥