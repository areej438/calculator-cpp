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
         bool valid1=true;
          bool valid2=true;
         for(int i=0;i<Num1.length();i++){
             if(i==0 && Num1[i] == '-'){
                 continue;
             }
              if(Num1[i] <'0' || Num1[i] > '9'){
                 valid1 =false;
                 break;
             }
         }
         for(int i=0;i<Num2.length();i++){
             if(i==0 && Num2[i] == '-'){
                 continue;
             }
              if(Num2[i] <'0' || Num2[i] > '9'){
                 valid2 =false;
                 break;
             }
         }
         if(!valid1 || !valid2){
             cout<<"invalid input"<<endl;
             continue;
         }
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