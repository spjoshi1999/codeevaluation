# include <iostream>
#include <cmath>
using namespace std;

int main() {

  char op;
  float num1, num2;
  int count=0;
  float result=0;

  cout << "Enter operator: +, -, *, /,for squre root =s,to find power of no=p \n ";
  cin >> op;

 //cout << "Enter first no ";
 //cin >> num1 ;
 //cout << "Enter second number: ";
 //cin >> num2;

//In this calculator num1 and num2 are main variables to calculate all possible cases.
  switch(op) {

    case '+':
               cout << "How many no you want to add  ";//in case adding multiple numbers.
               cin >> count;         //count taken from user
               while(count>0)
               {
                    cout << "enter number  ";
                    cin >> num1;
                    result+=num1;        
                    count--;
                
               }
               cout << " addition = " << result;
               count=0;
      break;

    case '-':
              cout << "Enter first no ";
              cin >> num1 ;
              cout << "Enter second number: ";
              cin >> num2;
              result=num1-num2;
               cout << "substraction = " << result;
               count=0;
      break;

    case '*':
      cout << "How many no you want to multiply  "; // in case to multiply more than two numbers
               cin >> count;
               result=1;
               while(count>0)
               {     
                    cout << "enter number  ";
                    cin >> num1;
                    result=result*num1;
                    count--;
                
               }
               cout << "  multiplication  = " << result;
               count=0;
      break;

    case '/':
         cout << "Enter first no ";
         cin >> num1 ;
         cout << "Enter second number: ";
         cin >> num2;
         if(num2>0)         // To avoid divide/0 condition
         {
         cout << num1 << " / " << num2 << " = " << num1 / num2;
         }
         else
         {
             cout << " wrong num entered";
         }
         
      break;
   case 's':
             cout << "Enter no to find squre root ";
              cin >> num1 ;
             result=sqrt(num1);      // inbuilt squrt function is used to calculate squre root
             cout << " squre root of "<< num1 << " =" << result;
             break;
     case 'p':
             cout << "Enter no to find power "; // to calculate power of given no
              cin >> num1 ;
              cout << "Enter  power ";
               cin >> num2;
             result=pow(num1,num2);
             cout <<num1<<"^"<< num2 << " = "<< result;
             break;
    default:
      
      cout << "incorrect operator entered";
      break;
  }

  return 0;
}