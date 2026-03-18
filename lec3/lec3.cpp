//Conditional and Loops
//if-else
// #include<iostream>
// using namespace std;

// int main(){
//     int a;
//     cout << "Enter the number a : " << endl;
//     cin >> a ;
//     if(a < 0){
//         cout << "a is negative number.";
//     }else{
//         cout << "a is positive number.";
//     };
//     return 0;
// }

//if-else if-else
// #include<iostream>
// using namespace std;

// int main(){
//     int marks;
//     cout << "Enter Your Marks : " << endl;
//     cin >> marks;
//     if(marks >= 90){
//         cout << "A";
//     }else if(marks >= 80 && marks < 90){
//         cout << "B";
//     }else if(marks >= 70 && marks < 80){
//         cout << "C";
//     }else{
//         cout << "D";
//     }
//     return 0;
// }

//Ternary Statement
//condition ? stt1 : sttr2;
// #include<iostream>
// using namespace std;

// int main(){
//     int n = 45;
//     cout << (n >= 0 ? "positive" : "negative") << endl; 
//     return 0;
// }


//Loops
//while loop
// #include<iostream>
// using namespace std;

// int main(){
//     int i = 1;
//     while(i <= 5){
//         cout << i << " ";
//         i += 1;
//     }
//     return 0;
// }

//for loop
// #include<iostream>
// using namespace std;

// int main(){
//     // for(initialization; condition; updation;){
//     //     //work
//     // }
//     for(int i = 1; i <= 5; i++){
//         cout << i << " ";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int i = 1;
//     int n,sum;
//     cout << "Enter n: " << endl;
//     cin >> n;
//     sum = 0;
//     while(i <= n){
//         sum += i;
//         i += 1;
//     }
//     cout << "Sum is" << " " << sum << endl;
//     return 0;
// }


//Break in loop


//do-while loop
// #include<iostream>
// using namespace std;

// int main(){
//     int i = 1;
//     do {
//         cout << "Hi";
//     } while (2 < 1);  
//     return 0;
// }


//prime or not
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter n: " << endl;
//     cin >> n;
//     bool prime = true;
//     for(int i = 2; i <= n-1; i++){
//         if(n%i == 0){
//             prime = false;
//             break;
//         }
//     }
//     if(prime){
//         cout << "Prime Number";
//     }else{
//         cout << "Not Prime Number";
//     }
//     return 0;
// }


//Nested Loops
//Loop inside loop
// #include<iostream>
// using namespace std;

// int main(){
//     for(int i = 1; i <= 5; i++){
//         for(int j = 1; j <= 5; j++){
//             cout << "*";
//         }
//         cout << "\n";
//     }
//     return 0;
// }
