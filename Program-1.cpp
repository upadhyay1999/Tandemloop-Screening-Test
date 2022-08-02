#include<bits/stdc++.h>
using namespace std;

class Calculator{
    double a,b;
public:

    float Addition(double a,double b)
    {
        return a+b;
    }

    float Subtraction(double a,double b)
    {
        return a-b;
    }
    
    float Multiplication(double a,double b)
    {
        return a*b;
    }

    float Division(double a,double b)
    {
        if(b==0){
        cout<<"division by zero is not defined."<<'\n';
        return INFINITY;
        }
        else return a/b;
    }


};


int main()
{
    double a,b; char s;
    Calculator C;
    cin>>a>>b>>s;
    if(s=='+'){
        cout<<C.Addition(a,b);
    }
    else if (s=='-')
    {
        cout<<C.Subtraction(a,b);
    }
    else if (s=='*')
    {
        cout<<C.Multiplication(a,b);
    }
    else
    {
        cout<<C.Division(a,b);
    }
    
}