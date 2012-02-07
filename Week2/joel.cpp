/*
Joel's Version
Look out for the sneekyness
*/
 
#include <iostream>
#include <fstream>
 
using namespace std;
 
int main(){
       int input;
       int persons = 0;
       ifstream fin;
       fin.open("a.in");
       fin >> input;
       while(input >= 0){
 
              for (int x = input; x > 0; x--)
              {
                     int n = input;
                     int sleepers = x;
                     while( --n % x == 0 && sleepers-- > 0){
                           n-=n/x;
                     }
                     if (sleepers == 0){
                           cout << input << " coconuts, " << x << " persons and 1 monkey"<< endl;
                           break;
                     }
                     if (x == 1){
                           cout << input << " coconuts, no solution" << endl;
                     }
              }
              fin >> input;
 
       }
       return 0;
}