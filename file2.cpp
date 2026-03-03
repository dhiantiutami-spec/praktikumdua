// library
#include <iostream>
using namespace std;
 
// deklarasi global
 int p, l, luas;

 //implementasi prosedur dan fungsi
 void input(){
    cout << "Masukkan panjang = ";
    cin >> p;
    cout << "Masukkan lebar = ";
    cin >> l;
 }

 int luasPersegi (){
    return p * l;
 }