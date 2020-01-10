#include<iostream>
using namespace std;

int main(){
      string n;
      cout << "What is your name? : ";
      cin  >> n;
      
      double a;
      cout << "What is your GPA? :  ";
      cin  >> a;
      
      {
          if(a>= 3.5)
          {
              cout << n <<"Inw Jrim Jrim";
          }else{
              cout << "Try harder," << n << "!!!!";
          }
      }
	return 0;
}