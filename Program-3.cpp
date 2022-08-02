#include<iostream>
using namespace std;

void print(int a)
{
    int x=1;
    for (int i = 0; i < a; i++)
    {
        cout<<x<<" "; x+=2;
    }
    
}

int main()
{
    int a; cin>>a;
    if(a&1){
        print(a);
    }
    else
    {
        print(a-1);
    }
    
    return 1;
}