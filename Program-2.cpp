#include<iostream>
using namespace std;

int main()
{
    int a; cin>>a;
    int x=1;
    for (int i = 0; i < a; i++)
    {
        cout<<x<<" "; x+=2;
    }
    
    return 1;
}