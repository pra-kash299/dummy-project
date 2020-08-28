#include <iostream>

using namespace std;

int main()
{

    while(1){
     int i;
    cout<<"enter a number";
    cin>>i;
    if(i/10==0)
    cout<<i<<"ia a one digit number\n";
    else
    {if(i/100==0)
    cout<<i<<"is two digit number\n";
    else
    cout<<i<<"is three or more digit number\n";}
    char j;
    cout<<"enter'e'for end and 'c'for continue the program\n";
    cin>>j;
    if(j=='e')
    break;
    else
    continue;}
    return 0;
}
