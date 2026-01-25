#include <iostream>
#include <string>
using namespace std;
void calculator(){
     string Num1;
     string Num2;
     char Oper;
     while(true){
         cout<<"enter first number : "<<endl;
         getline(cin,Num1);
         cout<<"enter second number : "<<endl;
         getline(cin,Num2);
          cout<<"enter operation you want to perform : "<<endl;
         cin>>Oper;
         cin.ignore();
         int n1 = stoi(Num1);
         int n2 = stoi(Num2);
         int ans;
         switch (Oper){
             case '+':
              ans=n1 + n2;
             
             break;
             case '-':
              ans=n1 - n2;
             break;
             case '*':
              ans=n1 * n2;
             break;
             case '/':
              ans=n1 / n2;
             break;
             case '%':
              ans=(n1 / n2)*100;
             break;
             default:
             cout<<"invalid operator";
             break;
         }
         cout<<ans<<endl;
     }
    
}

int main(){
    calculator();
    return 0;
}