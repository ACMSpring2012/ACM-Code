/* Marissa's Version */
#include<iostream>;
#include<cmath>;
#include<cstdlib>;
#include<fstream>;
using namespace std;
 
int main(){
 
       ifstream in;
       in.open("a.in");
       int input, count = 0, people = 0;
 
       do{
              in >> input;
        for(int i = input; i > 0; i--){
                     int n = input;
                     people = i;
                     while((n -1)%i == 0 && people-- > 0){
                           n -= ((n -1)/i)+1;
                     }
                     if(people == 0){
                           cout << input << " coconuts, " << i << " persons and 1 monkey" << endl;
                           break;
                     }
                     if(i == 1){
                           cout << input << " coconuts, no solution" << endl;
                     }
              }
       }while(input != -1);
 
       return 0;
}