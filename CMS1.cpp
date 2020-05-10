#include<iostream>
#include<string.h>
#include<conio.h>
#include<fstream>
#include<windows.h>

#define ENTER 13
#define SPACE 32
#define TAB 9
#define BKSP 8

using namespace std;
class Registration;
class Employee_mgmt;
class Customer_mgmt;
class Login
{
	char c;
	char uname[20];
	char password[20];

public:
    void get()
    {
system("cls");

	cout<<"\n\n\n\t\t\t\t\t\t-------------------------------------------------";
	cout<<"\n\t\t\t\t\t\t\t\t WELCOME TO LOGIN PAGES \n"<<endl;
	cout<<"\t\t\t\t\t\t*******************************************************";

	cout<<"\n\n\n\t\t\t\t\t\t\t USER NAME ";
	cin>>uname;
int i=0;

  cout<<"\n\t\t\t\t\t\t\tPASSWORD ::- ";
	while(1)
	{

		c=getch();
		if(c==ENTER)
		{
			password[i]='\0';
			break;
		}
		else if(c==TAB || c==SPACE)
		{
			continue;
		}
		else if(c==BKSP)
		{
			if(i>0)
			{
				i--;
				cout<<"\b \b";
			}
		}
		else
		{
			password[i]=c;
			i++;
			cout<<"*";
	}	}

check();
    }
    void check()
    {


	if(strcmp(password,"8002")==0 && strcmp(uname,"CMS")==0)
	{
		cout<<"\n\n\t\t\t\t\t Login Successfull....";
		getch();


	}
	else
	{
		cout<<"\n\n\t\t\t\t\t Invalid User Or Password...";
		getch();
		get();

	}
    }

};
class Registration
{
public:
	char fnm[10],lnm[10],sh[20];
	char password[10];
	char cpass[10];
	char c;
	int i;
	public:
	void get1()
	{
	    system("cls");
	int i=0;
	cout<<"\n\n\n\n\t\t\t\t\t------------------------------------------------------------------";
	cout<<"\n\t\t\t\t\t\t\t\t REGISTER OR SIGN UP NEW USER";
	cout<<"\n\t\t\t\t\t************************************************************************";
	cout<<"\n\n\n\t\t\t\t\t\t\t\t FIRST NAME ";;
	cin>>fnm;
	cout<<" \n\t\t\t\t\t\t\t\t LAST NAME ";
	cin>>lnm;
	cout<<"\n\t\t\t\t\t\t\t\t PASSWORD ";
	do
	{
		c=getch();
		if(c==13)
		{
			break;
		}
		password[i]=c;
			cout<<"*";
			++i;
	}while(1);

		cout<<"\n\t\t\t\t\t\t\t\t CONFIRM PASSWORD ";
		do
	{
		c=getch();
		if(c==13)
		{
			break;
		}
		cpass[i]=c;
		cout<<c;
		++i;
	}while(1);
    if (strcmp(password,cpass)!=0)
	{
		cout<<"\n\t\t\t\t\t\t\t\t data is saved successfully ";
		display();
	}
	else
		cout<<"\n\t\t\t\t\t\t\t\t password is not matched...";
		getch();
		}
		void display()
		{
		    cout<<"\n\n\n\n\t\t\t\t\t\t\t\t Your Details Are......";
		    cout<<"\n\n \t\t\t\t\t\t\t\tFirst Name : "<<fnm;
		    cout<<"\n \t\t\t\t\t\t\t\tLast Name : "<<lnm;
		    cout<<"\n \t\t\t\t\t\t\t\tPassword : "<<password;
		}
};
class Employee_mgmt
{
public:
int n;
int c;
int eid,eno;
	string enm,eaddr;
public:
    void Add_employee()
    {
        {
    system("cls");
	cout<<"\n\n\n\t\t\t------------------------------------------------------------------------------";
	cout<<"\n\t\t\t\t\t\t WELCOME TO EMPLOYEE REGISTRATION...";
	cout<<"\n\t\t\t******************************************************************************";
	cout<<"\n\n\n\t\t\t\t\t Enter Employee id  ";
	cin>>eid;
	cout<<"\n\t\t\t\t\t Enter Employee name  ";
	cin>>enm;
	cout<<"\n\t\t\t\t\t Enter Employee address  ";
	cin>>eaddr;
	cout<<"\n\t\t\t\t\t Enter Employee phone number  ";
	cin>>eno;
     }
     cout<<"\n\n\t\t\t\t\t\tEmployee is Registratered successfully ";
      getch();
       system("cls");
       Employee_mgmt();
    }
    void displaydetail1()
    {
       cout<<"\n\n\n\t\tEmployee Id\t\tEmployee Name\t\tEmployee Address\tPhone number \n";
        cout<<"\t\t\t"<<eid<<" \t\t  "<<enm<<"\t\t\t"<<eaddr<<"\t\t"<<eno<<"\n\n";
     }
      int getempid()
    {
        return eid;
    }
};
class Customer_mgmt
{
public:
int n;
int c;
int cid,cno;
string cnm,caddr;
public:
    void Add_customer()
    {
        {
    system("cls");
	cout<<"\n\n\n\t\t\t------------------------------------------------------------------------------";
	cout<<"\n\t\t\t\t\t\t WELCOME TO CUSTOMER REGISTRATION...";
	cout<<"\n\t\t\t******************************************************************************";
	cout<<"\n\n\n\t\t\t\t\t Enter Customer id  ";
	cin>>cid;
	fflush(stdin);
	cout<<"\n\t\t\t\t\t Enter Customer name  ";
	cin>>cnm;
	cout<<"\n\t\t\t\t\t Enter Customer address  ";
	cin>>caddr;
	cout<<"\n\t\t\t\t\t Enter Customer phone number  ";
	cin>>cno;
     }
     cout<<"\n\n\t\t\t\t\t\tCustomer is Registratered successfully ";
      getch();
       system("cls");

    }
    void displaydetai2()
    {
        cout<<"\n\n\n\t\t  Customer Id \t  :  "<<cid;
        cout<<"\n\t\t Customer Name    :  "<<cnm;
        cout<<"\n\t\t Customer Address :  "<<caddr;
        cout<<"\n\t\t Phone number     :  "<<cno<<"\n\n";

     }
      int getcustid()
    {
        return cid;
    }
};
class Food_mgmt
{
public:
int n;
int c;
int fid,price;
	string fnm;
public:
    void Add_food()
    {
        {
    system("cls");
	cout<<"\n\n\n\t\t\t------------------------------------------------------------------------------";
	cout<<"\n\t\t\t\t\t\t ADD FOOD...";
	cout<<"\n\t\t\t******************************************************************************";
	cout<<"\n\n\n\t\t\t\t\t Enter Food id  ";
	cin>>fid;
	cout<<"\n\t\t\t\t\t Enter Food name  ";
	cin>>fnm;
	cout<<"\n\t\t\t\t\t Enter Price  ";
	cin>>price;

     }
     cout<<"\n\n\t\t\t\t\t\t Food is Registratered successfully ";
      getch();
       system("cls");
       Food_mgmt();
    }
    void displaydetail3()
    {
       cout<<"\n\n\n\t\tFood Id\t\tFood Name\t\tPrice\n";
        cout<<"\t\t  "<<fid<<" \t\t"<<fnm<<"\t\t       \t"<<price<<"\n\n";
     }
      int getfoodid()
    {
        return fid;
    }
};
class About
{
public:
 void menu4()
    {
	system("cls");
	cout<<"\n\n\n\n\t\t\t________________________________________________________________________________________________________________________";
	cout<<"\n\t\t\t\t\t\t\t\t\t\t ABOUT US\n";
	cout<<"\t\t\t************************************************************************************************************************";
	cout<<"\n\n\n\n";
	cout<<"\t\t\t\t 1: Canteen Management System Software create for Managing and Automating Food Sources.\n";
	cout<<"\n\t\t\t\t 2: It is One Of The Solution Provided For The Problems Faced in the Field Of Food Source Management\n";
	cout<<"\n\t\t\t\t 3: The purpose of the canteen management system is to automate the existing manual system ";
	cout<<"\n\t\t\t\t  by the help of computerized equipments and full fledged computer software,fullfilling their";
	cout<<"\n\t\t\t\t  requirements for a longer period with easy accessing and manipulation of the same..";
	cout<<"\n\n\t\t\t------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n\n\t\t\t\t => Our main class is CMS class ...";
	cout<<"\n\n\t\t\t\t => it has many functions like Login management,Food management,Sales management,Employee management,";
	cout<<"\n\t\t\t\t Customer Management .\n\n\t\t\t\t => All functions have some sub functions like additems, solditems,displayitems,";
	cout<<"\n\t\t\t\t deleteitems,registration,login,employee details,customer details";
	cout<<"\n\n\t\t\t*************************************************************************************************************************";
	cout<<"\n\n\t\t\t\t How to work in this software ";
	cout<<"\n\n\t\t\t\t 1: Go to my computer.. ";
	cout<<"\n\t\t\t\t 2: Install Dev-C++ 5.11 ";
	cout<<"\n\t\t\t\t 3: Go to E:/cpp_prgm/CMS/CMS.cpp ";
	cout<<"\n\t\t\t\t 4: Double click on the file named- CMS.cpp ";
	cout<<"\n\t\t\t\t stack: Dev_c++ 5.11 , windows , c++ ,OOPs  ";
	getch();
    }
};
void menu1();
void menu2();
void menu3();
void menu4();
class Welcome:public Registration,public Employee_mgmt,public Customer_mgmt,public About
{
	private:
	char c;
	int ch;
	public:
      void  menu()
        {
            system("cls");
	cout<<"\n\n\n\n\t\t\t\t\t______________________________________________________________________________";
	cout<<"\n\t\t\t\t\t\t\t\t WELCOME TO CANTEEN MANAGEMENT SYSTEM "<<endl;
	cout<<"\t\t\t\t\t***********************************************************************************"<<endl;
    cout<<"\n\n \t\t\t\t\t\t\t\t\t MENU \n\n\n";
    cout<<"\t\t\t\t\t\t\t\t 1: REGISTRATION NEW USER \n";
    cout<<"\t\t\t\t\t\t\t\t 2: FOOD MANAGEMENT \n";
    cout<<"\t\t\t\t\t\t\t\t 3: EMPLOYEE MANAGEMENT \n";
    cout<<"\t\t\t\t\t\t\t\t 4: CUSTOMER MANAGEMENT \n";
    cout<<"\t\t\t\t\t\t\t\t 5: ABOUT \n";
    cout<<"\t\t\t\t\t\t\t\t 6: EXIT \n";

    cout<<"\n\t\t\t\t\t\t\t\t ENTER YOUR CHOICE ";
    cin>>c;
    switch(c)
    {
    	case'1':{
    	    Registration R;
    fstream f;
    f.open("Registration.dat",ios::in|ios::out|ios::app);
    R.get1();
    f.write((char *)&R,sizeof(R));
    f.close();
    }
    getch();
    menu();
    	break;
    	case '2':menu1();
    	break;
    	case '3':menu2();
    	break;
    	case '4':menu3();
    	break;
    	case '5':menu4();
    	break;
    	case '6':exit(1);
    	break;
    	default:cout<<"\n\t\t\t\t\t invalid choice... ";
    	menu();
    }
    menu();
}
};

//FOOD MANAGEMENT SYSTEM
void menu1()
{
    int n;
     Food_mgmt Fm;
system("color 6a");
system("cls");
    cout<<"\n\n\n\t\t\t_________________________________________________________________________";
	cout<<"\n\t\t\t\t\t\t\t WELCOME TO FOOD MANAGEMENT \n";
	cout<<"\t\t\t*******************************************************************************"<<endl;
	cout<<"\n\n\t\t\t_________________________________________________________";
	cout<<"\n\n\n\t\t\t\t\t\t\t\t 1: ADD FOOD ";
	cout<<"\n\t\t\t\t\t\t\t\t 2: SEARCH FOOD";
	cout<<"\n\t\t\t\t\t\t\t\t 3: DELETE  FOOD ";
	cout<<"\n\t\t\t\t\t\t\t\t 4: FOOD DETAILS";
	cout<<"\n\t\t\t\t\t\t\t\t 5: EXIT ";
	cout<<"\n\t\t\t***********************************************************";
	cout<<"\n\n\t\t\t\t\t ENTER YOUR CHOICE WHAT U WANT TO DO ";
	cin>>n;
	fstream f;
	switch(n)
	{
		case 1:{f.open("Food.dat",ios::in|ios::out|ios::app);
		    Fm.Add_food();
		    f.write((char *)&Fm,sizeof(Fm));
		    f.close();}
		    menu1();
		    break;
		case 2://searching
		    {
        {
    int fid;
    char ch = 'n';

    ifstream f("Food.dat", ios:: in); // this file should already exist

    cout << "\n\n\t\t\t\t\t Enter the Food id to be searched for : " <<endl;
    cin >> fid;

    while(!f.eof())
    {
        f.read((char *)&Fm, sizeof(Fm));

        if(Fm.getfoodid()==fid)
        {
            Fm.displaydetail3();
            ch = 'y';
            break;
        }
    }

    if(ch =='n')
        cout << "\n\n\t\t\t\t\t Record Not Found !!" << endl;
    f.close();}
    getch();
    menu1();
    break;
}
		case 3://deletion
		 {
		    int no,z=0;
	cout<<"\n\n\n\t\t\t\t Delete Record....";
	cout<<"\n\n\t\t\t\t\tplease enter the Food ID to delete:  ";
	cin>>no;
	f.open("Food.dat",ios::in);
	fstream f2;
	f2.open("temp.dat",ios::out);
	while(f.read((char*)&Fm,sizeof(Fm)))
	{
		if(Fm.fid!=no)
		{
			f2.write((char*)&Fm,sizeof(Fm));
			cout<<"\n\n\t\t\t No record to find......";
		}
	}
	f2.close();
	f.close();
		remove("Food.dat");
		cout<<"\n\n\t\t\t Record Deleted Successfully....";
		rename ("temp.dat","Food.dat");
	getch();
	menu1();
		}
        break;
		case 4:{f.open("Food.dat",ios::in|ios::out|ios::binary|ios::app);
                f.seekg(0);
                while(f.read((char *) &Fm,sizeof(Fm)))
                {
                    Fm.displaydetail3();
                }
                f.close();}
                getch();
                menu1();
                break;
		// case 5:menu();
		default:cout<<"\n\n\t\t\t\t\t\t\t\t\tinvalid choice ";
		       getch();
		      system("cls");
	}
}

//EMPLOYEE MANAGEMENT SYSTEM
void menu2()
{
    int n;
     Employee_mgmt Em;
system("cls");
    cout<<"\n\n\n\t\t\t_________________________________________________________________________";
	cout<<"\n\t\t\t\t\t\t\t WELCOME TO EMPLOYEE MANAGEMENT \n";
	cout<<"\t\t\t*******************************************************************************"<<endl;
	cout<<"\n\n\t\t\t_________________________________________________________";
	cout<<"\n\n\n\t\t\t\t\t\t\t\t 1: ADD EMPLOYEE ";
	cout<<"\n\t\t\t\t\t\t\t\t 2: SEARCH EMPLOYEE";
	cout<<"\n\t\t\t\t\t\t\t\t 3: DELETE EMPLOYEE  ";
	cout<<"\n\t\t\t\t\t\t\t\t 4:  EMPLOYEE DETAILS";
	cout<<"\n\t\t\t\t\t\t\t\t 5: EXIT ";
	cout<<"\n\t\t\t***********************************************************";
	cout<<"\n\n\t\t\t\t\t ENTER YOUR CHOICE WHAT U WANT TO DO ";
	cin>>n;
	fstream f;
	switch(n)
	{
		case 1:{f.open("Employee.dat",ios::in|ios::out|ios::app);
		    Em.Add_employee();
		    f.write((char *)&Em,sizeof(Em));
		    f.close();}
		    menu2();
		    break;
		case 2://searching
		     {
{
    int eid;
    char ch = 'n';

    ifstream f("Employee.dat", ios:: in); // this file should already exist

    cout << "\n\n\t\t\t\t\t Enter the employee id to be searched for : " <<endl;
    cin >> eid;

    while(!f.eof())
    {
        f.read((char *)&Em, sizeof(Em));

        if(Em.getempid()==eid)
        {
            Em.displaydetail1();
            ch = 'y';
            break;
        }
    }

    if(ch =='n')
        cout << "\n\n\t\t\t\t\t Record Not Found !!" << endl;
    f.close();}
    getch();
    menu2();
    break;
}

		case 3://deletion
		 {
		    int no,z=0;
	cout<<"\n\n\n\t\t\t\t Delete Record....";
	cout<<"\n\n\t\t\t\t\tplease enter the Employee ID to delete:  ";
	cin>>no;
	f.open("Employee.dat",ios::in);
	fstream f2;
	f2.open("temp.dat",ios::out);
	while(f.read((char*)&Em,sizeof(Em)))
	{
		if(Em.eid!=no)
		{
			f2.write((char*)&Em,sizeof(Em));
			cout<<"\n\n\t\t\t No record to find......";
		}
	}
	f2.close();
	f.close();
		remove("Employee.dat");
		cout<<"\n\n\t\t\t Record Deleted Successfully....";
		rename ("temp.dat","Employee.dat");
	getch();
	menu2();
		}
        break;
		case 4:{f.open("Employee.dat",ios::in|ios::out|ios::binary|ios::app);
                f.seekg(0);
                while(f.read((char *) &Em,sizeof(Em)))
                {
                    Em.displaydetail1();
                }
                f.close();}
                getch();
                menu2();
                break;
		//case 5:menu();break;
		default:cout<<"\n\n\t\t\t\t\t\t\t\t\tinvalid choice ";
		       getch();
		      system("cls");
		      menu2();
	}
}
//CUSTOMER MANAGEMENT SYSTEM
void menu3()
{
    int n;
     Customer_mgmt Cm;
     system("cls");
    cout<<"\n\n\n\t\t\t_________________________________________________________________________";
	cout<<"\n\t\t\t\t\t\t\t WELCOME TO CUSTOMER MANAGEMENT \n";
	cout<<"\t\t\t*******************************************************************************"<<endl;
	cout<<"\n\n\t\t\t_________________________________________________________";
	cout<<"\n\n\n\t\t\t\t\t\t\t\t 1: ADD CUSTOMER ";
	cout<<"\n\t\t\t\t\t\t\t\t 2: SEARCH CUSTOMER";
	cout<<"\n\t\t\t\t\t\t\t\t 3: DELETE CUSTOMER  ";
	cout<<"\n\t\t\t\t\t\t\t\t 4: CUSTOMER DETAILS";
	cout<<"\n\t\t\t\t\t\t\t\t 5: EXIT ";
	cout<<"\n\t\t\t***********************************************************";
	cout<<"\n\n\t\t\t\t\t ENTER YOUR CHOICE WHAT U WANT TO DO ";
	cin>>n;
	fstream f;
	switch(n)
	{
		case 1:{f.open("Customer.dat",ios::in|ios::out|ios::app);
		    Cm.Add_customer();
		    f.write((char *)&Cm,sizeof(Cm));
		    f.close();}
		    menu3();
		    break;
		case 2: {
{
    int cid;
    char ch = 'n';

    ifstream f("Customer.dat", ios:: in); // this file should already exist

    cout << "\n\n\t\t\t\t\t Enter the Customer id to be searched for : " <<endl;
    cin >> cid;

    while(!f.eof())
    {
        f.read((char *)&Cm, sizeof(Cm));

        if(Cm.getcustid()==cid)
        {
            Cm.displaydetai2();
            ch = 'y';
            break;
        }
    }

    if(ch =='n')
        cout << "\n\n\t\t\t\t\t Record Not Found !!" << endl;
    f.close();}
    getch();
    menu3();
    break;
}
		case 3://deletion
		 {
		    int no,z=0;
	cout<<"\n\n\n\t\t\t\t Delete Record....";
	cout<<"\n\n\t\t\t\t\tplease enter the Customer ID to delete:  ";
	cin>>no;
	f.open("Customer.dat",ios::in);
	fstream f2;
	f2.open("temp.dat",ios::out);
	while(f.read((char*)&Cm,sizeof(Cm)))
	{
		if(Cm.cid!=no)
		{
			f2.write((char*)&Cm,sizeof(Cm));
			cout<<"\n\n\t\t\t No record to find......";
		}
	}
	f2.close();
	f.close();
		remove("Customer.dat");
		cout<<"\n\n\t\t\t Record Deleted Successfully....";
		rename ("temp.dat","Customer.dat");
	getch();
	menu3();
		}
        break;
        case 4:f.open("Customer.dat",ios::in|ios::out|ios::binary|ios::app);
                f.seekg(0);
                while(f.read((char *) &Cm,sizeof(Cm)))
                {
                    Cm.displaydetai2();
                }
                f.close();
                getch();
                menu3();
                break;
		//case 5:menu3();break;
		default:cout<<"\n\n\t\t\t\t\t\t\t\t\tinvalid choice ";
		       getch();
		      system("cls");
		      menu3();
	}
}

main()
{
    Login L;
    L.get();
    Welcome W;
    W.menu();
}
