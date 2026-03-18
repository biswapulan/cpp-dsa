//variables, data types & operators
//g++ lec2.cpp
//./a.exe 

//Boiler plate code
// #include<iostream>
// using namespace std;

// int main() {

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     cout << "hello biswa" << endl;
//     cout << "hi" << "\n";
//     cout << "hey\n";
//     cout << "namaskaram!";
//     return 0;
// }

//Variables, Data Types
//Primitive Data Types
//int - 4 Bytes  ( 1 Byte = 8 Bits)
//char - 1 Bytes
//float - 4 Bytes
//string, long,
// double - 8 Bytes
//bool - 1 Byte 
//ASCII(Americal Standard code) Value
// #include<iostream>
// using namespace std;

// int main() {
//     int age = 25;
//     char grade = 'A';
//     float PI = 3.14f; //write f after float value
//     bool isSafe = false;
//     double price = 100.99;
//     // cout << sizeof(age) << endl;
//     cout << age << endl;
//     cout << grade << endl;
//     cout << PI << endl;
//     cout << isSafe << endl;
//     return 0;
// }


//Type Casting
//Conversion - implicit
//casting - explicit

// #include<iostream>
// using namespace std;

// int main() {
//     //Type Conversion
//     // char grade = 'A'; //ascii value of A is 65
//     // int value = grade;
//     // cout << value << endl;

//     //Type Casting
//     // double price = 100.99;
//     // int newPrice = (int)price;
//     // cout << newPrice << endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int age;
//     cout << "Enter you age:" << endl;
//     cin >> age;
    
//     cout << "You entered age =" << age << endl;
//     return 0;
// }

//Operators
//Arithmetic
//Relational
//Logical
//Unary 

// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;
//     cout << a << endl;
//     // int b = a++;
//     int b = ++a;
//     cout << b << endl;
    
//     return 0;
// }


//Basic Calculator
// #include<iostream>
// using namespace std;

// int main(){
//     int a, b;
//     cout << "Enter a: " << endl;
//     cin >> a;
//     cout << "Enter b: " << endl;
//     cin >> b;
//     string op;
//     cout << "Enter Operation you want to do \n" << "Addition: +\n" << "Substraction: -\n" << "Multiplication: *\n" << "Division: /\n" << "Modulo: %\n" ;
//     cin >> op;
//     if(op == "+"){
//         cout << a + b;
//     } else if (op == "-"){
//         cout << a - b;
//     }else if(op == "*"){
//         cout << a * b;
//     }else if (op == "/"){
//         cout << a / b;
//     }else if (op == "%"){
//         cout << a % b;
//     }else{
//         cout << "Invalid Input !, Kindly choose from availabel options.";
//     };
//     return 0;
// }