#include <iostream>
using namespace std;

int main() {
 // your code goes here
 int I = 0;
 string palabra;
 cin >> palabra;
 int J = palabra.length() - 1;
 int mitad = J / 2;
 while(palabra[I] == palabra[J]){
  if(mitad == I){
   cout << "Es palindromo";
   break;
  }
 J--;
 I++;
 }
 if(mitad != i) cout << "No es palindromo";
 return 0;
}