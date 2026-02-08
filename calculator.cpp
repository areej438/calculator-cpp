#include <iostream>
#include <string>
using namespace std;

void addHistory(int ansArr[],int &ansCount,int ans);
void printHistory(int ansArr[],int ansCount);
void calculator(int ansArr[],int &ansCount){
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
             cout<<"invalid operator"<<endl;
             continue;
         }
         addHistory(ansArr,ansCount,ans);
         cout<<"your answer is: ";
         cout<<ans<<endl;
         string choice;
         cout<<"do you want to print history?"<<endl;
         cin>>choice;
         cin.ignore();
         if(choice == "yes" ){
             printHistory(ansArr,ansCount);
         }
     }
}
 void addHistory(int ansArr[],int &ansCount,int ans){
     ansArr[ansCount]=ans;
     ansCount++;
 }
 void printHistory(int ansArr[],int ansCount){
     for(int i=0;i<ansCount;i++){
         cout<<i+1<<" "<<ansArr[i]<<endl;
     }
 }
 


int main(){
    int ansArr[100];
    int ansCount=0;
    calculator(ansArr,ansCount);
    return 0;
}