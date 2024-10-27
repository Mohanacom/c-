#include<iostream>
using namespace std;
int main()
{
    int a,b,max,lcm;
    cout<<"enter a and b:";
    cin>>a>>b;
    max=a>b?a:b;
    while(true){
        if((max%a==0) && (max%b==0))
        {
            lcm=max;
            break;

        }
        max++;
    }
    cout<<(lcm);
    return 0;

}