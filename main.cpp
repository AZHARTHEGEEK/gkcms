#include<iostream>
#include<string>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<cwchar>
#include<windows.h>

using namespace std;

void mainloop();
void administrator();

int main()
{
    system("CLS");
    system("Color 5F");
    system("mode con COLS=700");
    mainloop();
}

void mainloop()
{
    system("CLS");
    char classselection;

    cout<<endl<<endl;
    cout<<"************************************************************************************************************************";
    cout<<"************************************************************************************************************************";
    cout<<"************************************************************************************************";
    cout<<"\n\n\t\t\t\t\t\t\tGreen Karachi Complain Management System (GKCMS)"<<endl;
    cout<<"\n\n************************************************************************************************************************";
    cout<<"************************************************************************************************************************";
    cout<<"************************************************************************************************";
    cout<<endl<<endl;
    cout<<"\t\tMember Names:";
    cout<<"\t\t\t\t\t\t\t\t\t\t\tRoll # / ID #"<<endl;
    cout<<"\t\t=============\t\t\t\t\t\t\t\t\t\t\t=============="<<endl;
    cout<<"\t\tMuhammad Azhar";
    cout<<"\t\t\t\t\t\t\t\t\t\t\tCSC-19F-069"<<endl;
    cout<<"\t\tKirshan Lal";
    cout<<"\t\t\t\t\t\t\t\t\t\t\tCSC-19F-046"<<endl;
    cout<<"\t\tMehar Khan Niazi";
    cout<<"\t\t\t\t\t\t\t\t\t\tCSC-19F-050"<<endl;
    cout<<"\t\tManohar Lal";
    cout<<"\t\t\t\t\t\t\t\t\t\t\tCSC-19F-"<<endl<<endl;
    cout<<"\t\tSection : 2B";
    cout<<"\t\t\t\t\t\t\t\t\t\t\tShift: Morning"<<endl;
    cout<<"\t\tDepartment: Computer Science";
    cout<<"\t\t\t\t\t\t\t\t\tProgram: BS (CS) (4 Years)"<<endl;
    cout<<"\t\tCourse Instructor: Mr. Zubair uddin Shaikh"<<endl;

    cout<<endl<<endl;
    cout<<"************************************************************************************************************************";
    cout<<"************************************************************************************************************************";
    cout<<"************************************************************************************************";
    cout<<"\n\t\t\t\t\t\t\t\tWe feeling the joy of Serving you Best!"<<endl;
    cout<<"\n************************************************************************************************************************";
    cout<<"************************************************************************************************************************";
    cout<<"************************************************************************************************"<<endl;


    cout<<"\n\t\t\tSelect An Option to Continue:"<<endl<<endl;

    cout<<"\t\t\t1. Administrator Log in"<<endl;
    cout<<"\t\t\t2. Register Complain"<<endl;
    cout<<"\t\t\t3. Check Complain Status"<<endl;
    cout<<"\t\t\t4. Exit"<<endl;

    cout<<endl<<endl<<"\t\t\tEnter the Selected Number To Continue : ";
    cin>>classselection;
    if (classselection == '1')
    {
        system("CLS");

    }
    else if (classselection == '2')
    {
        system("CLS");

    }
    else if (classselection == '3' )
    {
        system("CLS");

    }
     else if (classselection == '4' )
    {
        system("CLS");

    }

}


void administrator()
{

}
