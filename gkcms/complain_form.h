
#ifndef complain_form_H
#define complain_form_H
#include<iostream>
using namespace std;
class Complain
{
private:
    struct datausingstruct //construct node
{
	//int complaint_number;
	string userName;
	string date;
	string cnic;
	string ContactNumber;
	string EmailAddress;
	string detail;



	/*

i.	Name
ii.	F.Name
iii.	NIC #
iv.	Date (Automatically Update)
v.	Contact #
vi.	Email Address
vii.	District (LIST)
viii.	Town (LIST)
ix.	Street #
x.	House #
xi.	Department (LIST)
xii.	Complagn’s Subject
xiii.	Remarks




	*/




	datausingstruct *prev;
	datausingstruct *next;
	datausingstruct *link;

}*temp;				//pointer declaration


datausingstruct *start_ptr = NULL;
datausingstruct *head = NULL;
datausingstruct *last = NULL;
public:
    Complain(); //constuctor
    void customer_StoreComplain();
    void create_complain();
    void cancel_complain();
    void update_complain();
	void print_complain();
	void view_complain();
	void exit();

};
#endif
