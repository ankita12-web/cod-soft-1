#include<iostream>
#include<stdio.h>
using namespace std;
int a,b,c;
 void get()
{
  cout<<"enter any two numbers:";
  cin>>a>>b;
}
void cal()
{
    char c;
    cout<<"+ for addition";
    cout<<"- for subtraction";
    cout<<"* for multiplication";
    cout<<"/ for division";
    cout<<"choose your choice\n";
    cin>>c;
    switch(c)
    {
        case '+':
        {
        cout<<"the result is"<<a+b;
        break;
        }
    
        case '-':
        {
        cout<<"the result is"<<a-b;
        break;
        }
        case '*':
        {
        cout<<"the result is"<<a*b;
        break;
        }
        case '/':
        {       
        cout<<"the result is"<< a/b;
        break;
       }
        default:cout<<"invalid choice";
        break;

    }   
        
}   
 int main()
 {
    get();
    cal();
    return 0;
 }


