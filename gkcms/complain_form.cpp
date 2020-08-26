#include"complain_form.h"
using namespace std;

Complain::Complain()//constuctor
{
}
    void Complain::customer_StoreComplain()
    {
    system("cls");
    cout<<"\n\t\t ================================================\n";
	cout<<"\t\t|   Complaint Management System - GKCMS |\n";
	cout<<"\t\t ================================================\n\n\n";
	cout <<"\n Add Your Complaint Details\n";
	cout <<"________________________________\n\n";

	datausingstruct *temp;
	temp = new datausingstruct;
	cout << "Type Complaint no: ";
    	cin >> temp->complaint_number;
	cout<< "Enter Your Name: ";
	cin.ignore();
	getline(cin, temp->customerName);
	cout<<"Enter Date : ";
	cin>>temp->date;
	cout << "Complaint Description:";
	cout<<"( 1000 words maximum ) \n";
	cin.ignore();
	getline(cin, temp->x);

	cout<<"==========================================================================="<<endl;
    	cout << "Complaint added Successfully"<<endl;
    	cout<<"==========================================================================="<<endl;

	system ("PAUSE");

    	temp->next=NULL;
	if(start_ptr!=NULL)
	{
		temp->next=start_ptr;
	}
	start_ptr=temp;
	system("cls");
    }
    void Complain::create_complain()
    {

    }
    void Complain::cancel_complain()
    {

    }
    void Complain::update_complain()
    {

    }
	void Complain::print_complain()
	{

	}
	void Complain::view_complain()
	{

	}
	void Complain::exit()
	{

	}
