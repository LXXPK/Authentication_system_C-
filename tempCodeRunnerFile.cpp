#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

void login();
void registration();
void forgot();

int main()
{
    int c;
    cout<<"\t\t\t________________________________________________________________\n\n\n";
    cout<<"\t\t\t                       Welcome to the Login Page                 \n\n\n";
    cout<<"\t\t\t_________________________________Menu_____________________________\n\n\n";
    cout<<"                                                                           \n\n";
    cout<<"\t|  Press 1 to Login                    |"<<endl;
    cout<<"\t|  Press 2 to Register                 |"<<endl;
    cout<<"\t|  Press 3 if you forgot your Password |"<<endl;
    cout<<"\t|  Press 4 to Exit                     |"<<endl;
    cout<<"\n\t\t\t Please enter your choice : ";

    cin>>c;

    switch(c)
    {
        case 1: 
                login();
                break;
        case 2:
                registration();
                break;
        case 3:
                forgot();
                break;
        case 4: 
                cout<<"\t\t\t Thank You!  \n\n";
                break;
        default:
                system("cls");
                cout<<"\t\t\t Please select from the option given above \n"<<endl;
                main();


    }
}

void login()
{
    int count=0;
    string userId, password , id, pass;
    system("cls");
    cout<<"\t\t\t Please enter the username and passowrd : "<<endl;
    cout<<"\t\t\t USERNAME "<<endl;
    cin>>userId;
    cout<<"\t\t\t PASSWORD "<<endl;
    cin>>password;

    ifstream input("record.txt");

    while(input>>id>>pass)
    {
        if(id==userId && pass == password)
        {
            count = 1;
            system("cls");
            
        }
    }

    input.close();

    if(count==1)
    {
        cout<<userId<<"\n Your LOGIN is succesfull \n Thanks for Logging in ! \n";
        main();

    }
    else{
        cout<<"\nLOGIN ERROR \n Please check yout username and password \n";
        main();
    }
}


void registration()
{
    string ruserId, rpassword, rid, rpass;
    system("cls");
    cout<<"\t\t\t Enter the username : ";
    cin>>ruserId;
    cout<<"\t\t\t Enter the passowrd : ";
    cin>>rpassword;

    ofstream f1("record.txt", ios:: app);
    f1<<ruserId<<' '<<rpassword<<endl;

    system("cls");
    cout<<"\n\t\t\t Registration is succesfull! \n";

    main();

}


void forgot()
{
    int option;
    system("cls");
    cout<<"\t\t\t You forgot the passowrd? no worries \n";
    cout<<"Press 1 to search your if by username "<<endl;
    cout<<"Press 2 to go back to the main menu   "<<endl;
    cout<<"\t\t\t Enter your choice : ";
    cin>>option;

    switch(option)
    {
        case 1 :
        {
            int count = 0;
            string suserId, sId, spass;
            cout<<"\n\t\t\t Enter the username which you remembered :";
            cin>>suserId;

            ifstream f2("record.txt");
            while(f2>>sId>>spass)
            {
                if(sId==suserId)
                {
                    count=1;
                }
            }
            f2.close();
            if(count == 1)
            {
                cout<<"\n\n Your account is found ! \n";
                cout<<"\n\n Your Password is : "<<spass;
                main();
            }
            break;

        }
        case 2:
        {
            main();
            
        }
        default:
        {
            cout<<"\t\t\t Wrong choice ! Please try again "<<endl;
            forgot();
        }


    } 
}
