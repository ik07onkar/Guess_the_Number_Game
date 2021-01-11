#include<bits/stdc++.h>
using namespace std;

int main()
{
    system("color B");
    int x,cnt=1,num = rand()%100;
    cout<<"You have only 7 Chances to Guess the integer:- "<<"\n"<<"Guess the Number b/w [1 - 100]"<<"\n\n";
    for(int i=1;i<=7;i++)
    {
        cout<<"Guess a number : ";
        cin>>x;
        if(x == num)
        {
            cout<<"Congratulations you did it in "<<cnt<<" try."<<"\n";
            return 0;
        }
        else if(x < num)
        {
            cout<<"You Guessed too small !!"<<"\n";
            cnt++;
        }
        else
        {
            cout<<"You Guessed too high !!"<<"\n";
            cnt++;
        }
    }
    cout<<"\n"<<"!! Better luck Next Time !!"<<"\n";

    return 0;
}
