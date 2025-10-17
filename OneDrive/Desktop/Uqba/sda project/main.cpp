#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <cstring>
#include <windows.h>

using namespace std;

// Global customer ID counter
int cid = 0;

// ? Welcome Screen
void welcomeScreen() {
	cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
	cout << "\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
	cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
	cout << "\t\t\t\t\t@@|                                        WELCOME TO                                     |@@\n";
	cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
	cout << "\t\t\t\t\t@@|                                    THE CAKE CHRONICLES                                |@@\n";
	cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
	cout << "\t\t\t\t\t@@|                                  BAKERY MANAGEMENT SYSTEM                             |@@\n";
	cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
	cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
	cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
	cout << "\t\t\t\t\t@@|                                          Made by ZUNAIRA KHATOON AND UQBA GULZAR      |@@\n";
	cout << "\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
	cout << "\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
	cout << "Press any key to continue...";
	getch();
}


// ? Cake Menu
void menu() {
	system("color E0");
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Welcome to the CAKE CHRONICLES menu ***" << endl << endl;
	cout << "\t\t\t\t\t\t-------------------------------------------------------------------------------" << endl << endl;
	cout << "\t\t\t\t\t\t\t      Read the menu CAREFULLY before your order" << endl << endl;
	cout << "\t\t\t\t\t\t-------------------------------------------------------------------------------" << endl << endl;
	cout << "\t\t\t\t\t\tNumber count        Cakes                      size/price           size/price" << endl << endl;
	cout << "\t\t\t\t\t\t<1>                 red velvet cake            1 pound/RS 1500       2 pound/RS 2000" << endl;
	cout << "\t\t\t\t\t\t<2>                 pineapple cake             1 pound/RS 1200       2 pound/RS 1700" << endl;
	cout << "\t\t\t\t\t\t<3>                 black forest cake          1 pound/RS 2000       2 pound/RS 2500" << endl;
	cout << "\t\t\t\t\t\t<4>                 coffee cake                1 pound/RS 1250       2 pound/RS 1750" << endl;
	cout << "\t\t\t\t\t\t<5>                 cheesecake                 1 pound/RS 1700       2 pound/RS 2300" << endl;
	cout << "\t\t\t\t\t\t<6>                 kitkat cake                1 pound/RS 1850       2 pound/RS 2450" << endl;
	cout << "\t\t\t\t\t\t<7>                 choclate lava cake         1 pound/RS 1800       2 pound/RS 2400" << endl;
	cout << "\t\t\t\t\t\t<8>                 marble cake                1 pound/RS 1100       2 pound/RS 1600" << endl << endl << endl;
	cout << "\n\t\t\t\t\t***enhance the taste of your buds by freshly made juicy, creamy and yummy cakes***" << endl;
	cout << endl << endl;
	cout << "\t\t\t\t\t\t-------------------------------------------------------------------------------" << endl;
	cout << "\t\t\t\t\t\tPress any key to continue...";

	getch();
}

// Base abstract class
class empty {
public:
	virtual void order() = 0;
};

// Base class for customer/admin shared fields
class declaration : public empty {
public:
	string ID, name, age, gender, address, contact, cake, prize, ord_no, ord_type, pound;
	void order() {}
};

// Customer class
class customer : public declaration {
public:
	declaration m[10];
	string back;
	int status1;

	void get_data();

	void show_data();

	void order();

	void edit();

	void delet();

	void alldata();
};

void customer::get_data()
{
	system("color E0");
	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "\t\t\t\t\t\t\t\tFill the entries";
	cout << endl << endl;
	getline(cin, m[cid].name);
	cout << "\t\t\t\t\t\t\t\tID                        : ";
	getline(cin, m[cid].ID);
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t\tName                      : ";
	getline(cin, m[cid].name);
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t\tAge                       : ";
	getline(cin, m[cid].age);
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t\tGender                    : ";
	getline(cin, m[cid].gender);
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t\tAddress                   : ";
	getline(cin, m[cid].address);
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t\tContact                   : ";
	getline(cin, m[cid].contact);
	cout << endl << endl;
back:
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t\tProceed Forward[Y/y]      : ";
	cin >> back;
	if (back == "Y" || back == "y")
	{
		cout << endl << endl;
		cout << "\t\t\t\t\t\t\t\tYou filled all Entries of customer successfully...";
		getch();
	}
	else
	{
		cout << "\n\t\t\t\t\t\t\t\tWrong Input";
		goto back;
	}
}

void customer::show_data()
{
	system("color E0");
	system("cls");
	string n;
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tEnter the CUSTOMER ID  to display Record: ";
	cin >> n;
	system("cls");
	if (n == "0")
	{
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tOOPS!!!!" << endl;
		cout << "\t\t\t\t\t\t\t\t\tNote: No Record To Display  Plz Go Back And Enter Some Entries...";
	}
	else
	{
		int i;
		for (i = 0; i < cid; i++)
		{
			status1 = 0;
			if (n == m[i].ID)
			{
				status1 = 1; //here 1 is considered as bool true
				break;
			}
		}
		if (status1)
		{
			cout << "\n\n\n\n\n\n\n\n\n\n";
			cout << "\t\t\t\t\t\t\t\t------------------------------------" << endl << endl;
			cout << "\t\t\t\t\t\t\t\tID                   :" << m[i].ID << endl << endl;
			cout << "\t\t\t\t\t\t\t\tName                 :" << m[i].name << endl << endl;
			cout << "\t\t\t\t\t\t\t\tAge                  :" << m[i].age << endl << endl;
			cout << "\t\t\t\t\t\t\t\tGender               :" << m[i].gender << endl << endl;
			cout << "\t\t\t\t\t\t\t\tAddress              :" << m[i].address << endl << endl;
			cout << "\t\t\t\t\t\t\t\tContact              :" << m[i].contact << endl << endl;
			cout << "\t\t\t\t\t\t\t\torder number         :" << m[i].ord_no << endl << endl;
			cout << "\t\t\t\t\t\t\t\tcake                 :" << m[i].cake << endl << endl;
			cout << "\t\t\t\t\t\t\t\tprice                :" << m[i].prize << endl << endl;
			cout << "\t\t\t\t\t\t\t\t------------------------------------" << endl << endl;
			cout << "\t\t\t\t\t\t\t\tPress any key to choose another option...";
		}
		else
		{
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tNo such ID in database" << endl;
			cout << "\t\t\t\t\t\t\t\tPress any key to choose another option...";
		}
	}
	getch();
}

void customer::order()
{
	system("color E0");
	string ord;
above:
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Select Your Order ***" << endl << endl;
	cout << "\t\t\t\t\t\t\t\t----------------------------------------------------------" << endl << endl;
	cout << "\t\t\t\t\t\tNumber count        Cakes                      size/price           size/price" << endl << endl;
	cout << "\t\t\t\t\t\t<1>                 red velvet cake            1 pound/RS 1500       2 pound/RS 2000" << endl;
	cout << "\t\t\t\t\t\t<2>                 pineapple cake             1 pound/RS 1200       2 pound/RS 1700" << endl;
	cout << "\t\t\t\t\t\t<3>                 black forest cake          1 pound/RS 2000       2 pound/RS 2500" << endl;
	cout << "\t\t\t\t\t\t<4>                 coffee cake                1 pound/RS 1250       2 pound/RS 1750" << endl;
	cout << "\t\t\t\t\t\t<5>                 cheesecake                 1 pound/RS 1700       2 pound/RS 2300" << endl;
	cout << "\t\t\t\t\t\t<6>                 kitkat cake                1 pound/RS 1850       2 pound/RS 2450" << endl;
	cout << "\t\t\t\t\t\t<7>                 choclate lava cake         1 pound/RS 1800       2 pound/RS 2400" << endl;
	cout << "\t\t\t\t\t\t<8>                 marble cake                1 pound/RS 1100       2 pound/RS 1600" << endl << endl << endl;
	cout << "\n\t\t\t\t\t***enhance the taste of your buds by freshly made juicy, creamy and yummy cakes***" << endl;
	cout << "\t\t\t\t\t\t\t\t----------------------------------------------------------" << endl << endl;
	cout << "\t\t\t\t\t\t\t\tPress any key to continue...";
	getch();
	cout << endl << endl;
	cout << "\t\t\t\t\t\t\t\tEnter Your Choice:     ";
	cin >> ord;
	if (ord == "1")
	{
		m[cid].ord_no = "\t\t\t\t\t\t\t\t1-";
		cout << m[cid].ord_no;
		m[cid].cake = " red velvet cake";
		cout << m[cid].cake << endl;
	p:
		cout << "\t\t\t\t\t\t\t\tEnter Pounds:     ";
		cin >> pound;
		{if (pound == "1")
		{
			cout << "\t\t\t\t\t\t\t\t1 pound" << endl;
			m[cid].prize = "1500";
			cout << "\t\t\t\t\t\t\t\tRS " << m[cid].prize << endl;
			cout << "\t\t\t\t\t\t\t\tPress any key to continue...";
			getch();
		}
		else if (pound == "2")
		{
			cout << "\t\t\t\t\t\t\t\t2 pound" << endl;
			m[cid].prize = "2000";
			cout << "\t\t\t\t\t\t\t\tRS " << m[cid].prize << endl;
			cout << "\t\t\t\t\t\t\t\tPress any key to continue..." << endl;
			getch();
		}
		else
		{
			cout << "\t\t\t\t\t\t\t\tno such pound cake available" << endl;
			cout << "\t\t\t\t\t\t\t\tPress any key to continue..." << endl;
			getch();
			goto p;
		}}
	}
	else if (ord == "2")
	{
		m[cid].ord_no = "\t\t\t\t\t\t\t\t2-";
		cout << m[cid].ord_no;
		m[cid].cake = " pineapple cake";
		cout << m[cid].cake << endl;
	o:
		cout << "\t\t\t\t\t\t\t\tEnter Pounds:     ";
		cin >> pound;
		{if (pound == "1")
		{
			cout << "\t\t\t\t\t\t\t\t1 pound" << endl;
			m[cid].prize = "1200";
			cout << "\t\t\t\t\t\t\t\tRS " << m[cid].prize << endl;
			cout << "\t\t\t\t\t\t\t\tPress any key to continue...";
			getch();
		}
		else if (pound == "2")
		{
			cout << "\t\t\t\t\t\t\t\t2 pound" << endl;
			m[cid].prize = "1700";
			cout << "\t\t\t\t\t\t\t\tRS " << m[cid].prize << endl;
			cout << "\t\t\t\t\t\t\t\tPress any key to continue..." << endl;
			getch();
		}
		else
		{
			cout << "\t\t\t\t\t\t\t\tno such pound cake available" << endl;
			cout << "\t\t\t\t\t\t\t\tPress any key to continue..." << endl;
			getch();
			goto o;
		}}
	}
	else if (ord == "3")
	{
		m[cid].ord_no = "\t\t\t\t\t\t\t\t3-";
		cout << m[cid].ord_no;
		m[cid].cake = " black forest cake";
		cout << m[cid].cake << endl;
	u:
		cout << "\t\t\t\t\t\t\t\tEnter Pounds:     ";
		cin >> pound;
		{if (pound == "1")
		{
			cout << "\t\t\t\t\t\t\t\t1 pound" << endl;
			m[cid].prize = "2000";
			cout << "\t\t\t\t\t\t\t\tRS " << m[cid].prize << endl;
			cout << "\t\t\t\t\t\t\t\tPress any key to continue...";
			getch();
		}
		else if (pound == "2")
		{
			cout << "\t\t\t\t\t\t\t\t2 pound" << endl;
			m[cid].prize = "2500";
			cout << "\t\t\t\t\t\t\t\tRS " << m[cid].prize << endl;
			cout << "\t\t\t\t\t\t\t\tPress any key to continue..." << endl;
			getch();
		}
		else
		{
			cout << "\t\t\t\t\t\t\t\tno such pound cake available" << endl;
			cout << "\t\t\t\t\t\t\t\tPress any key to continue..." << endl;
			getch();
			goto u;
		}}
	}
	else if (ord == "4")
	{
		m[cid].ord_no = "\t\t\t\t\t\t\t\t4-";
		cout << m[cid].ord_no;
		m[cid].cake = " coffee cake";
		cout << m[cid].cake << endl;
	n:
		cout << "\t\t\t\t\t\t\t\tEnter Pounds:     ";
		cin >> pound;
		{if (pound == "1")
		{
			cout << "\t\t\t\t\t\t\t\t1 pound" << endl;
			m[cid].prize = "1250";
			cout << "\t\t\t\t\t\t\t\tRS " << m[cid].prize << endl;
			cout << "\t\t\t\t\t\t\t\tPress any key to continue...";
			getch();
		}
		else if (pound == "2")
		{
			cout << "\t\t\t\t\t\t\t\t2 pound" << endl;
			m[cid].prize = "1750";
			cout << "\t\t\t\t\t\t\t\tRS " << m[cid].prize << endl;
			cout << "\t\t\t\t\t\t\t\tPress any key to continue..." << endl;
			getch();
		}
		else
		{
			cout << "\t\t\t\t\t\t\t\tno such pound cake available" << endl;
			cout << "\t\t\t\t\t\t\t\tPress any key to continue..." << endl;
			getch();
			goto n;
		}}
	}
	else if (ord == "5")
	{
		m[cid].ord_no = "\t\t\t\t\t\t\t\t5-";
		cout << m[cid].ord_no;
		m[cid].cake = " cheese cake";
		cout << m[cid].cake << endl;
	d:
		{cout << "\t\t\t\t\t\t\t\tEnter Pounds:     ";
		cin >> pound;
		{if (pound == "1")
		{
			cout << "\t\t\t\t\t\t\t\t1 pound" << endl;
			m[cid].prize = "1700";
			cout << "\t\t\t\t\t\t\t\tRS " << m[cid].prize << endl;
			cout << "\t\t\t\t\t\t\t\tPress any key to continue...";
			getch();
		}
		else if (pound == "2")
		{
			cout << "\t\t\t\t\t\t\t\t2 pound" << endl;
			m[cid].prize = "2300";
			cout << "\t\t\t\t\t\t\t\tRS " << m[cid].prize << endl;
			cout << "\t\t\t\t\t\t\t\tPress any key to continue..." << endl;
			getch();
		}
		else
		{
			cout << "\t\t\t\t\t\t\t\tno such pound cake available" << endl;
			cout << "\t\t\t\t\t\t\t\tPress any key to continue..." << endl;
			getch(); goto d;
		}}}
	}
	else if (ord == "6")
	{
		m[cid].ord_no = "\t\t\t\t\t\t\t\t6-";
		cout << m[cid].ord_no;
		m[cid].cake = " kitkat cake";
		cout << m[cid].cake << endl;
	e:
		cout << "\t\t\t\t\t\t\t\tEnter Pounds:     ";
		cin >> pound;
		{if (pound == "1")
		{
			cout << "\t\t\t\t\t\t\t\t1 pound" << endl;
			m[cid].prize = "1850";
			cout << "\t\t\t\t\t\t\t\tRS " << m[cid].prize << endl;
			cout << "\t\t\t\t\t\t\t\tPress any key to continue...";
			getch();
		}
		else if (pound == "2")
		{
			cout << "\t\t\t\t\t\t\t\t2 pound" << endl;
			m[cid].prize = "2450";
			cout << "\t\t\t\t\t\t\t\tRS " << m[cid].prize << endl;
			cout << "\t\t\t\t\t\t\t\tPress any key to continue..." << endl;
			getch();
		}
		else
		{
			cout << "\t\t\t\t\t\t\t\tno such pound cake available" << endl;
			cout << "\t\t\t\t\t\t\t\tPress any key to continue..." << endl;
			getch();
			goto e;
		}}
	}
	else if (ord == "7")
	{
		m[cid].ord_no = "\t\t\t\t\t\t\t\t7-";
		cout << m[cid].ord_no;
		m[cid].cake = " choclate lava cake";
		cout << m[cid].cake << endl;
	f:
		cin >> pound;
		cout << "\t\t\t\t\t\t\t\tEnter Pounds:     ";
		cin >> pound;
		{if (pound == "1")
		{
			cout << "\t\t\t\t\t\t\t\t1 pound" << endl;
			m[cid].prize = "1800";
			cout << "\t\t\t\t\t\t\t\tRS " << m[cid].prize << endl;
			cout << "\t\t\t\t\t\t\t\tPress any key to continue...";
			getch();
		}
		else if (pound == "2")
		{
			cout << "\t\t\t\t\t\t\t\t2 pound" << endl;
			m[cid].prize = "2400";
			cout << "\t\t\t\t\t\t\t\tRS " << m[cid].prize << endl;
			cout << "\t\t\t\t\t\t\t\tPress any key to continue..." << endl;
			getch();
		}
		else
		{
			cout << "\t\t\t\t\t\t\t\tno such pound cake available" << endl;
			cout << "\t\t\t\t\t\t\t\tPress any key to continue..." << endl;
			getch();
			goto f;
		}}
	}
	else if (ord == "8")
	{
		m[cid].ord_no = "\t\t\t\t\t\t\t\t8-";
		cout << m[cid].ord_no;
		m[cid].cake = " marble cake";
		cout << m[cid].cake << endl;
	g:
		cout << "\t\t\t\t\t\t\t\tEnter Pounds:     ";
		cin >> pound;
		{if (pound == "1")
		{
			cout << "\t\t\t\t\t\t\t\t1 pound" << endl;
			m[cid].prize = "1100";
			cout << "\t\t\t\t\t\t\t\tRS " << m[cid].prize << endl;
			cout << "\t\t\t\t\t\t\t\tPress any key to continue...";
			getch();
		}
		else if (pound == "2")
		{
			cout << "\t\t\t\t\t\t\t\t2 pound" << endl;
			m[cid].prize = "1600";
			cout << "\t\t\t\t\t\t\t\tRS " << m[cid].prize << endl;
			cout << "\t\t\t\t\t\t\t\tPress any key to continue..." << endl;
			getch();
		}
		else
		{
			cout << "\t\t\t\t\t\t\t\tno such pound cake available" << endl;
			cout << "\t\t\t\t\t\t\t\tPress any key to continue..." << endl;
			getch();
			goto g;
		}}
	}
	else
	{
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
		cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option...";
		getch();
		goto above;
	}
}

void customer::edit()
{
	system("color E0");
	system("cls");
	string n;
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tEnter the customer's ID  to display Record: ";
	cin >> n;
	system("cls");
	if (n == "0")
	{
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tOOPS!!!!" << endl;
		cout << "\t\t\t\t\t\t\t\t\tNote: No Record To Display  Plz Go Back And Enter Some Entries...";
	}
	else
	{
		int i;
		for (i = 0; i < cid; i++)
		{
			status1 = 0;
			if (n == m[i].ID)
			{
				status1 = 1; //here 1 is considered as bool true
				break;
			}
		}
		if (status1)
		{
			system("cls");
			cout << endl << endl << endl;
			cout << "\t\t\t\t\t\t\t\tMention a customer id       : ";
			cin.ignore();
			getline(cin, m[i].ID);
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t\tName                      : ";
			getline(cin, m[i].name);
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t\tAge                       : ";
			getline(cin, m[i].age);
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t\tGender                       : ";
			getline(cin, m[i].gender);
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t\tAddress                   : ";
			getline(cin, m[i].address);
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t\tContact                   : ";
			getline(cin, m[i].contact);
			menu();
			string ord;
		above2:
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Select Your Order ***" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t----------------------------------------------------------" << endl << endl;
			cout << "\t\t\t\t\t\tNumber count        Cakes                      size/price           size/price" << endl << endl;
			cout << "\t\t\t\t\t\t<1>                 red velvet cake            1 pound/RS 1500       2 pound/RS 2000" << endl;
			cout << "\t\t\t\t\t\t<2>                 pineapple cake             1 pound/RS 1200       2 pound/RS 1700" << endl;
			cout << "\t\t\t\t\t\t<3>                 black forest cake          1 pound/RS 2000       2 pound/RS 2500" << endl;
			cout << "\t\t\t\t\t\t<4>                 coffee cake                1 pound/RS 1250       2 pound/RS 1750" << endl;
			cout << "\t\t\t\t\t\t<5>                 cheesecake                 1 pound/RS 1700       2 pound/RS 2300" << endl;
			cout << "\t\t\t\t\t\t<6>                 kitkat cake                1 pound/RS 1850       2 pound/RS 2450" << endl;
			cout << "\t\t\t\t\t\t<7>                 choclate lava cake         1 pound/RS 1800       2 pound/RS 2400" << endl;
			cout << "\t\t\t\t\t\t<8>                 marble cake                1 pound/RS 1100       2 pound/RS 1600" << endl << endl << endl << endl;
			cout << "\t\t\t\t\t\t\t\t----------------------------------------------------------" << endl << endl;
			cout << "\t\t\t\t\t\t\t\tPress any key to continue...";
			getch();
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t\tEnter Your Choice:     ";
			cin >> ord;
			if (ord == "1")
			{
				m[i].ord_no = "\t\t\t\t\t\t\t\t1-";
				cout << m[i].ord_no;
				m[i].cake = " red velvet cake";
				cout << m[i].cake << endl;
			p:
				cout << "\t\t\t\t\t\t\t\tEnter Pounds:     ";
				cin >> pound;
				{if (pound == "1")
				{
					cout << "\t\t\t\t\t\t\t\t1 pound" << endl;
					m[i].prize = "1500";
					cout << "\t\t\t\t\t\t\t\tRS " << m[i].prize << endl;
					cout << "\t\t\t\t\t\t\t\tPress any key to continue...";
					getch();
				}
				else if (pound == "2")
				{
					cout << "\t\t\t\t\t\t\t\t2 pound" << endl;
					m[i].prize = "2000";
					cout << "\t\t\t\t\t\t\t\tRS " << m[i].prize << endl;
					cout << "\t\t\t\t\t\t\t\tPress any key to continue..." << endl;
					getch();
				}
				else
				{
					cout << "\t\t\t\t\t\t\t\tno such pound cake available" << endl;
					cout << "\t\t\t\t\t\t\t\tPress any key to continue..." << endl;
					getch();
					goto p;
				}}
			}
			else if (ord == "2")
			{
				m[i].ord_no = "\t\t\t\t\t\t\t\t2-";
				cout << m[i].ord_no;
				m[i].cake = " pineapple cake";
				cout << m[i].cake << endl;
			o:
				cout << "\t\t\t\t\t\t\t\tEnter Pounds:     ";
				cin >> pound;
				{if (pound == "1")
				{
					cout << "\t\t\t\t\t\t\t\t1 pound" << endl;
					m[i].prize = "1200";
					cout << "\t\t\t\t\t\t\t\tRS " << m[i].prize << endl;
					cout << "\t\t\t\t\t\t\t\tPress any key to continue...";
					getch();
				}
				else if (pound == "2")
				{
					cout << "\t\t\t\t\t\t\t\t2 pound" << endl;
					m[i].prize = "1700";
					cout << "\t\t\t\t\t\t\t\tRS " << m[i].prize << endl;
					cout << "\t\t\t\t\t\t\t\tPress any key to continue..." << endl;
					getch();
				}
				else
				{
					cout << "\t\t\t\t\t\t\t\tno such pound cake available" << endl;
					cout << "\t\t\t\t\t\t\t\tPress any key to continue..." << endl;
					getch(); goto o;
				}}
			}
			else if (ord == "3")
			{
				m[i].ord_no = "\t\t\t\t\t\t\t\t3-";
				cout << m[i].ord_no;
				m[i].cake = " black forest cake";
				cout << m[i].cake << endl;
			u:
				cout << "\t\t\t\t\t\t\t\tEnter Pounds:     ";
				cin >> pound;
				{if (pound == "1")
				{
					cout << "\t\t\t\t\t\t\t\t1 pound" << endl;
					m[i].prize = "2000";
					cout << "\t\t\t\t\t\t\t\tRS " << m[i].prize << endl;
					cout << "\t\t\t\t\t\t\t\tPress any key to continue...";
					getch();
				}
				else if (pound == "2")
				{
					cout << "\t\t\t\t\t\t\t\t2 pound" << endl;
					m[i].prize = "2500";
					cout << "\t\t\t\t\t\t\t\tRS " << m[i].prize << endl;
					cout << "\t\t\t\t\t\t\t\tPress any key to continue..." << endl;
					getch();
				}
				else
				{
					cout << "\t\t\t\t\t\t\t\tno such pound cake available" << endl;
					cout << "\t\t\t\t\t\t\t\tPress any key to continue..." << endl;
					getch(); goto u;
				}}
			}
			else if (ord == "4")
			{
				m[i].ord_no = "\t\t\t\t\t\t\t\t4-";
				cout << m[i].ord_no;
				m[i].cake = " coffee cake";
				cout << m[i].cake << endl;
			n:
				cout << "\t\t\t\t\t\t\t\tEnter Pounds:     ";
				cin >> pound;
				{if (pound == "1")
				{
					cout << "\t\t\t\t\t\t\t\t1 pound" << endl;

					m[i].prize = "1250";
					cout << "\t\t\t\t\t\t\t\tRS " << m[i].prize << endl;
					cout << "\t\t\t\t\t\t\t\tPress any key to continue...";
					getch();
				}
				else if (pound == "2")
				{
					cout << "\t\t\t\t\t\t\t\t2 pound" << endl;
					m[i].prize = "1750";
					cout << "\t\t\t\t\t\t\t\tRS " << m[i].prize << endl;
					cout << "\t\t\t\t\t\t\t\tPress any key to continue..." << endl;
					getch();
				}
				else
				{
					cout << "\t\t\t\t\t\t\t\tno such pound cake available" << endl;
					cout << "\t\t\t\t\t\t\t\tPress any key to continue..." << endl;
					getch();	goto n;
				}}
			}
			else if (ord == "5")
			{
				m[i].ord_no = "\t\t\t\t\t\t\t\t5-";
				cout << m[i].ord_no;
				m[i].cake = " cheese cake";
				cout << m[cid].cake << endl;
			d:
				cout << "\t\t\t\t\t\t\t\tEnter Pounds:     ";
				cin >> pound;
				{if (pound == "1")
				{
					cout << "\t\t\t\t\t\t\t\t1 pound" << endl;
					m[i].prize = "1700";
					cout << "\t\t\t\t\t\t\t\tRS " << m[i].prize << endl;
					cout << "\t\t\t\t\t\t\t\tPress any key to continue...";
					getch();
				}
				else if (pound == "2")
				{
					cout << "\t\t\t\t\t\t\t\t2 pound" << endl;
					m[i].prize = "2300";
					cout << "\t\t\t\t\t\t\t\tRS " << m[i].prize << endl;
					cout << "\t\t\t\t\t\t\t\tPress any key to continue..." << endl;
					getch();
				}
				else
				{
					cout << "\t\t\t\t\t\t\t\tno such pound cake available" << endl;
					cout << "\t\t\t\t\t\t\t\tPress any key to continue..." << endl;
					getch();	goto d;
				}}
			}
			else if (ord == "6")
			{
				m[i].ord_no = "\t\t\t\t\t\t\t\t6-";
				cout << m[i].ord_no;
				m[i].cake = " kitkat cake";
				cout << m[i].cake << endl;
			e:
				cout << "\t\t\t\t\t\t\t\tEnter Pounds:     ";
				cin >> pound;
				{if (pound == "1")
				{
					cout << "\t\t\t\t\t\t\t\t1 pound" << endl;
					m[i].prize = "1850";
					cout << "\t\t\t\t\t\t\t\tRS " << m[i].prize << endl;
					cout << "\t\t\t\t\t\t\t\tPress any key to continue...";
					getch();
				}
				else if (pound == "2")
				{
					cout << "\t\t\t\t\t\t\t\t2 pound" << endl;
					m[i].prize = "2450";
					cout << "\t\t\t\t\t\t\t\tRS " << m[i].prize << endl;
					cout << "\t\t\t\t\t\t\t\tPress any key to continue..." << endl;
					getch();
				}
				else
				{
					cout << "\t\t\t\t\t\t\t\tno such pound cake available" << endl;
					cout << "\t\t\t\t\t\t\t\tPress any key to continue..." << endl;
					getch();     goto e;
				}}
			}
			else if (ord == "7")
			{
				m[i].ord_no = "\t\t\t\t\t\t\t\t7-";
				cout << m[i].ord_no;
				m[i].cake = " choclate lava cake";
				cout << m[i].cake << endl;
			f:
				cin >> pound;
				cout << "\t\t\t\t\t\t\t\tEnter Pounds:     ";
				cin >> pound;
				{if (pound == "1")
				{
					cout << "\t\t\t\t\t\t\t\t1 pound" << endl;
					m[i].prize = "1800";
					cout << "\t\t\t\t\t\t\t\tRS " << m[i].prize << endl;
					cout << "\t\t\t\t\t\t\t\tPress any key to continue...";
					getch();
				}
				else if (pound == "2")
				{
					cout << "\t\t\t\t\t\t\t\t2 pound" << endl;
					m[i].prize = "2400";
					cout << "\t\t\t\t\t\t\t\tRS " << m[i].prize << endl;
					cout << "\t\t\t\t\t\t\t\tPress any key to continue..." << endl;
					getch();
				}
				else
				{
					cout << "\t\t\t\t\t\t\t\tno such pound cake available" << endl;
					cout << "\t\t\t\t\t\t\t\tPress any key to continue..." << endl;
					getch();	goto f;
				}}
			}
			else if (ord == "8")
			{
				m[i].ord_no = "\t\t\t\t\t\t\t\t8-";
				cout << m[i].ord_no;
				m[i].cake = " marble cake";
				cout << m[i].cake << endl;
			g:
				cout << "\t\t\t\t\t\t\t\tEnter Pounds:     ";
				cin >> pound;
				{if (pound == "1")
				{
					cout << "\t\t\t\t\t\t\t\t1 pound" << endl;
					m[i].prize = "1100";
					cout << "\t\t\t\t\t\t\t\tRS " << m[i].prize << endl;
					cout << "\t\t\t\t\t\t\t\tPress any key to continue...";
					getch();
				}
				else if (pound == "2")
				{
					cout << "\t\t\t\t\t\t\t\t2 pound" << endl;
					m[i].prize = "1600";
					cout << "\t\t\t\t\t\t\t\tRS " << m[i].prize << endl;
					cout << "\t\t\t\t\t\t\t\tPress any key to continue..." << endl;
					getch();
				}
				else
				{
					cout << "\t\t\t\t\t\t\t\tno such pound cake available" << endl;
					cout << "\t\t\t\t\t\t\t\tPress any key to continue..." << endl;
					getch();      	goto g;
				}}
			}
			else {
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
				cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option...";
				getch();
				goto above2;
			}
		}
		else
		{
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tNo such ID in database" << endl;
			cout << "\t\t\t\t\t\t\t\tPress any key to choose another option...";
		}
	}
	getch();
}

void customer::delet()
{
	system("color E0");
	system("cls");
	string n;
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tEnter the member's ID  to display Record: ";
	cin >> n;
	system("cls");
	if (n == "0")
	{
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tOOPS!!!!" << endl;
		cout << "\t\t\t\t\t\t\t\t\tNote: No Record To Display  Plz Go Back And Enter Some Entries...";
	}
	else {
		int i;
		for (i = 0; i < cid; i++)
		{
			status1 = 0;
			if (n == m[i].ID)
			{
				status1 = 1; //here 1 is considered as bool true
				break;
			}
		}
		if (status1) {
			m[i].ID, m[i].name, m[i].age, m[i].gender, m[i].address, m[i].contact, m[i].ord_no, m[i].cake, m[i].prize, m[i].ord_type = "Removed";
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tRecord Deleted...";
			getch();
		}
		else {
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tNo such ID in database" << endl;
			cout << "\t\t\t\t\t\t\t\tPress any key to choose another option...";
			getch();
		}
	}
}

void customer::alldata()
{
	system("cls");
	system("color E0");
	if (cid == 0)
	{
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tOOPS!!!!" << endl;
		cout << "\t\t\t\t\t\t\tNote: No Record To Display  Plz Go Back And Enter Some Entries...";
	}
	else
	{
		cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl << endl;
		cout << "\t\t\t\t\t\t\t\t\t  Details Of All orders" << endl << endl;
		cout << "\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl << endl;
		cout << "ID" << "\t" << "NAME" << "\t\t" << "AGE" << "\t\t" << "Gender" << "\t\t" << "Address" << "\t\t" << "Contact" << "\t\t" << "cake" << "\t\t" << "price" << "\t\t" << "order type" << endl << endl;
		for (int i = 0; i < cid; i++)
		{
			cout << m[i].ID << "\t" << m[i].name << "\t\t" << m[i].age << "\t\t" << m[i].gender << "\t\t" << m[i].address << "\t\t" << m[i].contact << "\t\t" << m[i].cake << "\t\t" << m[i].prize << "\t\t" << m[i].ord_type << endl << endl;
		}
		cout << "\t\t\t\t\t\t--------------------------------------------------------------------------------" << endl << endl;
		cout << "\n\t\t\t\t\t\tPress any key to choose another option...";
	}
	getch();
}



// ? Admin Class
class admin {
private:
	string username = "admin";
	string password = "1234";
public:
	customer obj;

	bool login() {
		string user, pass;
		int attempts = 3;
		while (attempts > 0) {
			system("cls");
			cout << "\n\n\n\t\t\t\t\t*** Admin Login ***\n";
			cout << "\t\t\t\t\tUsername: ";
			cin >> user;
			cout << "\t\t\t\t\tPassword: ";
			pass = "";
			char ch = _getch();
			while (ch != 13) {
				if (ch == 8) {
					if (!pass.empty()) {
						pass.pop_back();
						cout << "\b \b";
					}
				}
				else {
					pass.push_back(ch);
					cout << '*';
				}
				ch = _getch();
			}

			if (user == username && pass == password) {
				cout << "\n\n\t\t\t\t\tLogin Successful!";
				Sleep(1000);
				return true;
			}
			else {
				attempts--;
				cout << "\n\n\t\t\t\t\tInvalid Credentials! Attempts left: " << attempts;
				Sleep(1500);
			}
		}
		cout << "\n\n\t\t\t\t\tToo many failed attempts. Access Denied!";
		Sleep(2000);
		return false;
	}

	void adminMenu() {
		string ch, ch1;
		int count = 0;
		int status1;
		do {
			system("cls");
			cout << "\n\n\t\t\t\t\t*** Admin Panel ***\n";
			cout << "\t\t\t\t\t1. Order Management\n";
			cout << "\t\t\t\t\t2. Logout\n";
			cout << "\n\t\t\t\t\tEnter your choice: ";
			cin >> ch;

			if (ch == "1") {
			secondmain:
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t*** ORDER MANAGEMENT System ***" << endl << endl;
				cout << "\t\t\t\t\t\t\t\t--------------------------------------------" << endl << endl;
				cout << "\t\t\t\t\t\t\t\t<1> View Menu" << endl << endl;
				cout << "\t\t\t\t\t\t\t\t<2> View All Orders" << endl << endl;
				cout << "\t\t\t\t\t\t\t\t<3> Delete order" << endl << endl;
				cout << "\t\t\t\t\t\t\t\t<4> Exit" << endl << endl;
				cout << "\t\t\t\t\t\t\t\t--------------------------------------------" << endl << endl;
				cout << "\t\t\t\t\t\t\t\tEnter Your Choice:     ";
				cin >> ch1;

				if (ch1 == "1")
				{
					menu();
					goto secondmain;
				}

				else if (ch1 == "2")
				{
					if (count == 0)
					{
						system("cls");
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tOOPS!!!!" << endl;
						cout << "\t\t\t\t\t\t\t\t\tNote: No Record To Display  Plz Go Back And Enter Some Entries...";
						getch();
						goto secondmain;
					}
					else {
						obj.alldata();
						goto secondmain;
					}
				}

				else if (ch1 == "3")
				{
					if (count == 0) {
						system("cls");
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tOOPS!!!!" << endl;
						cout << "\t\t\t\t\t\t\t\t\tNote: No Record To Display  Plz Go Back And Enter Some Entries...";
						getch();
						goto secondmain;
					}
					else {
						obj.delet();
						goto secondmain;
					}
				}
			}
			else if (ch == "2") { cout << "\n\n\t\t\t\t\tLogging out..."; Sleep(1000); }
			else { cout << "\n\n\t\t\t\t\tInvalid choice! Try again."; Sleep(1000); }
		} while (ch != "2");
	}

};

// ? MAIN PROGRAM
int main() {
	system("color E0");
	welcomeScreen();

	string choice;
	admin adminObj;
	customer obj;
mode:
	system("cls");
	cout << "\n\n\n\t\t\t\t\t*** Login Portal ***\n";
	cout << "\t\t\t\t\t----------------------\n";
	cout << "\t\t\t\t\t1. Admin Login\n";
	cout << "\t\t\t\t\t2. Customer Login\n";
	cout << "\t\t\t\t\t3. Exit ";
	cout << "\n\t\t\t\t\tEnter your choice: ";
	cin >> choice;

	if (choice == "1") {
		if (adminObj.login()) {
			adminObj.adminMenu();
			goto mode;
		}
	}
	else if (choice == "2") {
		{string ch, ch1;
		int count = 0;
	mainmenu:
		system("cls");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t*** Welcome to the CAKE BAKERY MANAGEMENT System ***" << endl << endl;
		cout << "\t\t\t\t\t\t\t\t--------------------------------------------" << endl << endl;
		cout << "\t\t\t\t\t\t\t\t<1> Order" << endl << endl;
		cout << "\t\t\t\t\t\t\t\t<2> Cakes Menu" << endl << endl;
		cout << "\t\t\t\t\t\t\t\t<3> Instructions/Help" << endl << endl;
		cout << "\t\t\t\t\t\t\t\t<4> Exit" << endl << endl;
		cout << "\t\t\t\t\t\t\t\t--------------------------------------------" << endl << endl;
		cout << "\t\t\t\t\t\t\t\tEnter Your Choice:     ";
		cin >> ch;
		if (ch == "1")
		{
		secondmain:
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Welcome to the Main Menu ***" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t<1> Place Order" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t<2> View Your cart" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t<3> Edit Your Order" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t<4> Delete Your Order" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t<5> Go Back" << endl << endl;
			cout << "\t\t\t\t\t\t\t\t----------------------------------------------" << endl << endl;
			cout << "\t\t\t\t\t\t\t\tEnter Your choice:     ";
			cin >> ch1;
			if (ch1 == "1")
			{
				obj.get_data();
				system("cls");
				menu();
				obj.order();
				cout << endl << endl;
				cout << "\t\t\t\t\t\t\t\torder successfully placed";
				getch();
				cid++;
				count++;
				goto secondmain;
			}

			else if (ch1 == "2")
			{
				if (count == 0) {
					system("cls");
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tOOPS!!!!" << endl;
					cout << "\t\t\t\t\t\t\t\t\tNote: No Record To Display  Plz Go Back And Enter Some Entries...";
					getch();
					goto secondmain;
				}
				else
				{
					obj.show_data();
					goto secondmain;
				}
			}
			else if (ch1 == "3")
			{
				if (count == 0) {
					system("cls");
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tOOPS!!!!" << endl;
					cout << "\t\t\t\t\t\t\t\t\tNote: No Record To Display  Plz Go Back And Enter Some Entries...";
					getch();
					goto secondmain;
				}
				else
				{
					obj.edit();	goto secondmain;
				}
			}

			else if (ch1 == "4")
			{
				if (count == 0) {
					system("cls");
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tOOPS!!!!" << endl;
					cout << "\t\t\t\t\t\t\t\t\tNote: No Record To Display  Plz Go Back And Enter Some Entries...";
					getch();
					goto secondmain;
				}
				else {
					obj.delet();
					goto secondmain;
				}
			}
			else if (ch1 == "5")
			{
				goto mainmenu;
			}
			else
			{
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
				cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option...";
				getch();
				goto secondmain;
			}
		}
		else if (ch == "2")
		{
			menu();
			goto mainmenu;
		}
		else if (ch == "3") {
			system("cls");
			cout << "\n\n\n\n\n\t\t\t\t   ----------------------------------------------------------------------------------------------------------" << endl << endl;
			cout << "\t\t\t\tThe most important thing note while running this program is that first of all enter into main menu and " << endl;
			cout << "\t\tthan start with entering the data and than afterwards you can book your order. This is a data management" << endl;
			cout << "\t\tsystem of cake bakery in which you can easily book your cake orders and also delete any order if you want. " << endl;
			cout << "\t\t\t\t   ----------------------------------------------------------------------------------------------------------" << endl << endl;
			cout << "\t\t\t\t   Press any key to choose another option...";
			getch();
			goto mainmenu;
		}
		else if (ch == "4")
		{
			system("cls");
			cout << "\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
			cout << "\t\t\t\t\t@@_________________ _____________________________________________________________ @@\n";
			cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
			cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
			cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
			cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
			cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
			cout << "\t\t\t\t\t@@|                                THANK YOU FOR USING                                    |@@\n";
			cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
			cout << "\t\t\t\t\t@@|                            CAKE BAKERY MANAGEMENT SYSTEM                               |@@\n";
			cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
			cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
			cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
			cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
			cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
			cout << "\t\t\t\t\t@@|                                               Made by ZUNAIRA & UQBA                  |@@\n";
			cout << "\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
			cout << "\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
			goto mode;
		}
		else {
			system("cls");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong Input" << endl;
			cout << "\t\t\t\t\t\t\t\t\tPress any key to choose another option...";
			getch();
			goto mainmenu;
		}
		}        cout << "\n\n\t\t\t\t\tOrder successfully booked!";
		cout << "\n\n\t\t\t\t\tPress any key to exit...";
		getch();
	}
}