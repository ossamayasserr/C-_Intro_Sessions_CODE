#include <iostream> // library used for cin and cout

using namespace std; // default namespace

/*

// Function Syntax 
returnedDataType FunctionName(){
    CODE  that will be executed when you call FunctionName()
}


*/

// A fuction print Hello World!
void printText(){ // void mean that the function return nothing
    cout << "Hello World!";
}

// A function print Hello and the name it taked
void greeting(string name)(){
    cout << "Hello " << name;
}

// A function that print the sum of 2 numbers
void Add2Numbers(int n1, int n2){
    int sum = n1 + n2;
    cout << sum;
}

// A function that return the sum of 2 numbers instead of printing them
int Add2Numbers_returnVersion(int n1, int n2){ // void changed to int (data type of returned value)
    int sum = n1 + n2;
    return sum; // instead of using cout
}

// A function print Hello and the name it taked (but print World if it doesnt take name)
void greeting_defaultVersion(string name = "World")(){
    cout << "Hello " << name;
}

void multiply_2(int num){ // Added & symbol so the fuction multiply the passed variable not its value
    num = num * 2;
}

// Passing Parameters by Reference
void multiply_2_refVersion(int &num){ // Added & symbol so the fuction multiply the passed variable not its value
    num = num * 2;
}

// Task: take a person's name and birth year as input, and make a function to print the name and age of the person and return if he is adult(+18) or not.
// 
void printNameAndAge(string name, int year){
    cout << name << endl;
    int age = 2022 - year;
    cout << age << endl;
    if (age >= 18)
        cout << "Adult";
    else
        cout << "Not Adult";
}

int main()
{
// FUNCTION
    // How would you call those fuctions↑↑ in your program
    printText(); // call the declared function with its name and () and ;
    
    string name = "Ossama";
    greeting(name);         // pass name as a variable
    // or
    greeting("ahmed");      // pass name as a value
    
    Add2Numbers(10, 20);    // print sum of 2 integers
    
    // save the returned value in a variable then print it
    int result = Add2Numbers_returnVersion(10, 20);
    cout << result;

    // make a default value that is used if i didn't pass a value
    greeting_defaultVersion();          // Hello World
    greeting_defaultVersion("Ali");     // Hello Ali

    // make function that change the original value not a copy of it (by passing the variable to a parameter with & (like in line 43))
    int x = 5;
    multiply_2(x); // now x still 5
    multiply_2_refVersion(x); // but this function make changes to x not a copy of it so x equal 10 now

    // Task
    string name;
    cin >> name;
    int year;
    cin >> year;
    printNameAndAge(name, year); // will print name and age(not year) and he is adult or not





// STRING
    string fname = "Ahmed";
    string lname = "Salem";
    // concatenation
    string full_name = fname + ' ' + lname;
    cout << full_name; // Ahmed Salem

    // String Methods

    // append
    string fname = "Ahmed";
    fname = fname.append("Salem");
    cout << fname; // AhmedSalem   (without Space)

    // length
    string fname = "Ah";
    cout << fname.length(); // 2
    fname = "Ahmed Salem";
    cout << fname.length(); // 11

    // find
    int pos;
    string fname = "Ahmed Salem";
    pos = fname.find("A"); // 0 not 1
    pos = fname.find("med"); // 2  position of first character
    pos = fname.find("e"); // 3    position of first e found
    pos = fname.find("Z"); // large Number because it not found
    // that large number is equal to   string::npos   this value is built-in in C++

    // substr(a, b) --> a is start position, b is length of characters you want
    string fname = "Ahmed Salem";
    cout << fname.substr(2, 7); // med Sal
    cout << fname.substr(2,fname.find(" ")); // med S

    // getting 1 character from the string
    string fname = "Ahmed Salem";
    cout << fname[0]; // A      first character
    cout << fname[1]; // h
    cout << fname[2]; // m
    cout << fname[fname.length()-1]; // m   last charcter in the string

    // Task: take string as input and print every character and its position in a line

    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++){
        cout << i << " : " << s[i] << endl;
    }


    return 0; // the return statement of main function
}
