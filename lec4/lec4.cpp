//Pattern Problems

//Square Pattern
// #include<iostream>
// using namespace std;

// int main(){
//     for(int i = 1; i < 5; i++){
//         for(int j = 1; j < 5; j++){
//             cout << j << " " ;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     for(int i = 0; i < 4; i++){
//         char ch = 'A';
//         for(int j = 0; j < 4; j++){
//             cout << ch << " ";
//             ch += 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int num = 1;
//     for(int i = 0; i < 3; i++){
//         for(int j = 1; j < 4 ; j++){
//             cout << num << " ";
//             num += 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     for(int x = 0; x < 4; x++){
//         for(int y = 0; y <= x; y++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     for(int i = 1; i < 5; i++){
//         for(int j = 1; j < i+1; j++){
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     char ch = 'A';
//     for(int i = 0; i <= 4; i++){
//         for(int j = 0; j < i+1; j++){
//             cout << ch << " ";
//         }
//         cout << endl;
//         ch += 1;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     for(int i = 1; i <= 4; i++){
//         for(int j = i; j > 0 ; j--){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


//floyd's triangle pattern
// #include<iostream>
// using namespace std;

// int main() {
//     int num = 0;
//     for(int i = 1; i < 5; i++){
//         for(int j = 1; j < i+1; j++){
//             num += 1;
//             cout << num << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     for(int i = 1; i <= 4; i++){
//         for(int j = 1; j <= 4; j++){
//             if(i <= j){
//                 cout << i << " ";
//             }else{
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main() {
//     int n = 4; 
//     for(int i = 1; i <= n; i++){
//         int counter = 0;
//         for(int j = 1; j <= n; j++){
//             if(j > n-i){
//                 cout << "*";
//                 counter += 1;
//             }else{
//                 cout << " ";
//             }
//         }
//         for(int k = 1; k < counter; counter--){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n = 4;
//     for(int i = 1; i <= n; i++){
//         int counter = 0;
//         for(int j = 1; j <= 4; j++){
//             // if(j > n-i){
//             //     counter++;
//             //     cout << counter;
//             // }else{
//             //     cout << " ";
//             // }
//             (j > n-i) ? (cout << ++counter) : (cout << " ");
//         }
//         for(int k = counter - 1; k >= 1; k--){
//             cout << k;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     for(int i = 1; i <= n; i++){
//         for (int j = 1; j <= n; j++){
//             (j == n + 1 - i) ? (cout << "*") : (cout << " ");
//         }
//         for(int k = 1; k <= n; k++){
//             (k == i-1) ? (cout << "*") : (cout << " ");
//         }
//         cout << endl;
//     }
//     for(int i = 2; i <= n; i++){
//         for(int j = 1; j <= n; j++){
//             (j == i) ? (cout << "*") : (cout << " ");
//         }
//         for(int k = 1; k <= n; k++){
//             (i + k == n) ? (cout << "*") : (cout << " ");
//         }
//         cout << endl;
//     }
//     return 0;
// }


//Butterfly Pattern

// #include<iostream>
// using namespace std;

// int main() {
//     int n = 4;
//     for(int i = 1; i <= n ; i++){
//         for(int j = 1; j <= n; j++){
//             if(i >= j){
//                 cout << "*";
//             }else{
//                 cout << " ";
//             }
//         }
//         for(int k = 1; k <= n; k++){
//             if(i + k > n){
//                 cout << "*";
//             }else{
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     for(int i = 1; i <= n ; i++){
//         for(int k = 1; k <= n; k++){
//             if(i + k <= n+1){
//                 cout << "*";
//             }else{
//                 cout << " ";
//             }
//         }
//         for(int j = 1; j <= n; j++){
//             if(i <= j){
//                 cout << "*";
//             }else{
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }