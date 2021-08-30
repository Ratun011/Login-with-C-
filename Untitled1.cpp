#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

int userlogin()
{
    string user;
    int count=0,ch;
    string passwd="";
    cout<<"\n\t\t\t    >>> WELCOME <<<"<<endl;
    cout<<"\t\t\t >>> Please Login <<<"<<endl;
wrong: //jump back from line 32
    cout<<"\t User Name: ";
    cin>>user;
    cout<<"\t Password: " ;
    while(ch=getch()) //assign Ascii value to ch
    {
        switch(ch)
        {
        case 13:  //check ch after press RETURN key;
            if((passwd == "hello")&&(user=="Chantha"))
            {
                cout<<endl<<endl <<"======================================" <<endl;
                cout<<"\t Hello " <<user <<endl;
                break;
            }
            //system("cls");
            cout<<"\n Wrong User Name or Password input again! \n\n";
            passwd = "";
            count += 1;
            if(count == 3)
            {
                cout<<"You have entered wrong 3 times system will shutdown";
                cout<<" in 3 seconds good bye!";
                //system("shutdown -s -t 03");//this will shutdown your PC;
                return 0;
            }
            goto wrong;
        case 8:  //check ch after press BACKSPACE key;
            if(passwd.length()>0) //set condition blocking error while input
            {
                cout<<"\b \b";//remove Mask * on screen;
                passwd.erase(passwd.length()-1); //erase String length
            }
        default:
            cout<<"*";
            passwd += ch; //the input password was assigned to variable passwd.
        }
    }
};
int main()
{
    userlogin();
    return 0;
}
