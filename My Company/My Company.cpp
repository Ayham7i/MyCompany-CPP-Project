#include<iostream>
#include<fstream>
#include<string>
#include<Windows.h>
#include<conio.h>
using namespace std;


class shopping
{
private:
	int productcode;
	float price;
	float productdiscount;
	string productname;

public:
	void menu();
	void administrator();
	void buyer();
	void add();
	void edit();
	void remov();
	void list();
	void receipt();
	void login();
	void registration();
	void forgot();


};
void shopping::menu()
{
	//m:
	int choice;
	string email;
	string password;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 14);
	cout << "\t\t\t\t      ===========================================" << endl;
	cout << "\t\t\t\t       -:::: Developed by Ayham AlAkhally ::::-" << endl;
	cout << "\t\t\t\t              ::::  Sanaa University  ::::" << endl;
	cout << "\t\t\t\t      ===========================================\n\n" << endl;
	cout << "\t\t\t\t   _ +--------------------------------------------+ _" << endl;
	cout << "\t\t\t\t  /o)[                Ayham's Store               ](o\\" << endl;
	cout << "\t\t\t\t / / [                                            ] \\ \\" << endl;
	cout << "\t\t\t\t( (_ [  _   Smart phone trading & programming  _  ] _) )" << endl;
	cout << "\t\t\t\t((\\ \\)+-/o)------------------------------------(o\\-+(/ /))" << endl;
	cout << "\t\t\t\t(\\\\\\ \\_/ /                                      \\ \\_/ ///)" << endl;
	cout << "\t\t\t\t \\      /                                        \\      /" << endl;
	cout << "\t\t\t\t  \\____/                                          \\____/\n" << endl;
	//    ??
	cout << "\t\t| 1)    Admin          " << endl;
	cout << "\t\t|                      " << endl;
	cout << "\t\t| 2)    Buyer          " << endl;
	cout << "\t\t|                      " << endl;
	cout << "\t\t| 3)    Exit           " << endl;
	cout << "\t\t                      " << endl;
	//cout << "\t\t\t\t\t\t\t\t\t      ===========================================" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t               ::::  About Me :-  ::::" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t           -:::: Phone NO.773376233 ::::-" << endl;
	//cout << "\t\t\t\t\t\t\t\t\t      ===========================================\n\n" << endl;
	cout << "*****************************************************>" << endl;
	cout << "Choose Your Number Then Press . Enter :- ";

	cin >> choice;
	switch (choice)
	{
	case 1:
		system("cls");
	n:
		int c;
		cout << "\t\t\t\t      ===========================================" << endl;
		cout << "\t\t\t\t            -:::: Administrator Menu  ::::-" << endl;
		cout << "\t\t\t\t              ::::  www.Ayham.com  ::::" << endl;
		cout << "\t\t\t\t      ===========================================\n\n" << endl;
		cout << "\t\t|******************************|  " << endl;
		cout << "\t\t| 1)      Login                |" << endl;
		cout << "\t\t|                              |" << endl;
		cout << "\t\t| 2)      REGISTER             | " << endl;
		cout << "\t\t|                              |  " << endl;
		cout << "\t\t| 3)      Forgot Your Password |  " << endl;
		cout << "\t\t|                              |  " << endl;
		cout << "\t\t| 4)    Back To Main Menu      | " << endl;
		cout << "\t\t|******************************|\n  " << endl;
		cout << "\t\t Please Enter Your Choice :- ";
		cin >> c;
		cout << endl;

		switch (c)
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
			system("cls");
			menu();
			break;
		default:
			system("cls");
			cout << "\t\t\t\t< Select one of the given options >" << endl;
			menu();


		}
		break;
		system("cls");

	case 2:
		system("cls");
		buyer();
		break;
	case 3:
		//system("cls");
		exit(0);
		menu();
		break;
	default:
		cout << "\t\t\t\t< Select one of the given options >" << endl;
		exit(0);
		//menu();

	}
	//goto m;
}
void shopping::administrator()
{
m:
	int choice;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 12);
	cout << "\t\t\t\t      ===========================================" << endl;
	cout << "\t\t\t\t            -:::: Administrator Menu  ::::-" << endl;
	cout << "\t\t\t\t              ::::  www.Ayham.com  ::::" << endl;
	cout << "\t\t\t\t      ===========================================\n\n" << endl;
	cout << "\t\t|******************************|  " << endl;
	cout << "\t\t| 1)    Add The Product        |" << endl;
	cout << "\t\t|                              |" << endl;
	cout << "\t\t| 2)    Edit The Product       | " << endl;
	cout << "\t\t|                              |  " << endl;
	cout << "\t\t| 3)    Delete The Product     |  " << endl;
	cout << "\t\t|                              |  " << endl;
	cout << "\t\t| 4)    Back To Main Menu      | " << endl;
	cout << "\t\t|******************************|\n  " << endl;

	cout << "\t\t Please Enter Your Choice :- ";
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		add();
		break;
	}
	case 2:
	{
		edit();
		break;
	}
	case 3:
	{
		remov();
		break;
	}
	case 4:
	{
		system("cls");
		menu();
		break;
	default:
		cout << "\t\t\t\t< Select one of the given options >" << endl;
	}
	}
	goto m;
}
void shopping::buyer()
{
m:
	int choice;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 11);
	cout << "\t\t\t\t      ===========================================" << endl;
	cout << "\t\t\t\t              -::::  Buyer  Menu  ::::-" << endl;
	cout << "\t\t\t\t              ::::  www.Ayham.com  ::::" << endl;
	cout << "\t\t\t\t      ===========================================\n\n" << endl;
	cout << "\t\t|******************************|" << endl;
	cout << "\t\t| 1)    Buy The Product        |" << endl;
	cout << "\t\t|                              |" << endl;
	cout << "\t\t| 2)    Back To Main Menu      | " << endl;
	cout << "\t\t|                              |" << endl;
	cout << "\t\t|******************************|\n " << endl;
	cout << "\t\t Please Enter Your Choice :- ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		receipt();
		break;
	case 2:
		system("cls");
		menu();
		break;
	default:
		cout << "\t\t\t\t< Select one of the given options >" << endl;
	}
	goto m;
}
void shopping::add()
{
m:
	//fstream data;
	int c;
	int token = 0;
	float p;
	float d;
	string n;

	cout << "Enter The Code of The Product ";
	cin >> productcode;
	cout << "Enter The Name of The Product ";
	//std::cin.getline(productname);
	cin >> productname;
	cout << "Enter The Price of The Product ";
	cin >> price;
	cout << "Enter The Discount of The Product ";
	cin >> productdiscount;
	ifstream data;
	data.open("datafile.txt");

	if (!data)
	{
		ofstream data;
		data.open("datafile.txt", ios::app);
		data << productcode << " " << productname << " " << price << " " << productdiscount << endl;
		data.close();
	}
	else
	{
		data >> c >> n >> p >> d;

		while (!data.eof())
		{
			if (c == productcode)
			{
				//cout << "The product code reserved " << endl;
				token++;
			}
			data >> c >> n >> p >> d;
			break;
		}
		data.close();





		if (token > 0)
		{
			//goto m;
			add();
		}

		else {
			ofstream data;
			data.open("datafile.txt", ios::app);
			data << productcode << " " << productname << " " << price << " " << productdiscount << endl;
			data.close();

		}

	}
	system("cls");
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 5);
	cout << "\n\n\n\t\t\tThe product has been registered successfully " << endl;
}
void shopping::edit()
{
	//fstream data, data1;
	int pkey;
	int token = 0;
	int c = 0;
	float p;
	float d;
	string n;

	cout << "\n\t\t\t\t\tModify The Product ";
	cout << "\n\t\t\t Product code ";
	cin >> pkey;

	ifstream data;
	data.open("datafile.txt");
	if (!data)
	{
		cout << "\n\nFile doesn't Exist!";
	}
	else
	{
		ofstream data1;
		data1.open("datafile2.txt", ios::app);

		data >> productcode >> productname >> price >> productdiscount;
		while (!data.eof())
		{
			if (pkey == productcode)
			{
				cout << "\n\t\t Product new code: ";
				cin >> c;
				cout << "\n\t\t Product new name: ";
				cin >> n;
				cout << "\n\t\t Product new price: ";
				cin >> p;
				cout << "\n\t\t product discount: ";
				cin >> d;
				data1 << " " << c << " " << n << " " << p << "  " << d << " \n";
				system("cls");
				cout << "\n\t\t Product Edited ! ";
				token++;
			}
			else
			{
				data1 << " " << productcode << " " << productname << " " << price << " " << productdiscount << " \n";
			}
			data >> productcode >> productname >> price >> productdiscount;
		}
		data.close();
		data1.close();
		remove("datafile.txt");
		rename("datafile2.txt", "datafile.txt");
		if (token == 0)
		{
			cout << "\n\t\t Product not found ";
		}

	}

}
void shopping::remov()
{
	//fstream data, data1;
	int pkey;
	int token = 0;
	cout << "\n\t\t Delete The Product ";
	cout << "\n\t\t Product code : ";
	cin >> pkey;
	ifstream data;
	data.open("datafile.txt");
	if (!data)
	{
		cout << "File not Exist";
	}
	else
	{
		ofstream data1;
		data1.open("datafile2.txt", ios::app);
		data >> productcode >> productname >> price >> productdiscount;
		while (!data.eof())
		{
			if (productcode == pkey)
			{
				cout << "\n\t\t Product Deleted Successfully";
				token++;
			}
			else
			{
				data1 << " " << productcode << " " << productname << " " << price << " " << productdiscount << " \n";
			}
			data >> productcode >> productname >> price >> productdiscount;
		}
		data.close();
		data1.close();
		remove("datafile.txt");
		rename("datafile2.txt", "datafile.txt");
		if (token == 0)
		{
			cout << "\n\t\t Product not found ";
		}
	}

}
void shopping::list()
{
	ifstream data;
	data.open("datafile.txt");
	cout << "\n\n|********************************************************\n";
	cout << "Product No.\t\tName\t\tprice\n";
	cout << "|********************************************************\n";
	data >> productcode >> productname >> price >> productdiscount;
	while (!data.eof())
	{
		cout << productcode << "\t\t" << productname << "\t\t" << price << endl;
		 data >> productcode >> productname >> price >> productdiscount;
	}
	data.close();
}
void shopping::receipt()
{
	int arrc[100];
	int arrq[100];
	char choice;
	int c = 0;
	float amount = 0;
	float dis = 0;
	float total = 0;

	cout << "\t\t\t\t      ===========================================" << endl;
	cout << "\t\t\t\t            -::::   RECEIPT MENU  ::::-" << endl;
	cout << "\t\t\t\t              ::::  www.Ayham.com  ::::" << endl;
	ifstream data;
	data.open("datafile.txt");
	if (!data)
	{
		system("cls");
		cout << "\n\n\t\t Empty datafile";
	}
	else
	{
		data.close();
		list();

		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 6);
		cout << "\n\n";
		cout << "\t\t|******************************|" << endl;
		cout << "\t\t|                              |" << endl;
		cout << "\t\t|                              |" << endl;
		cout << "\t\t|    Please Place The Order    |" << endl;
		cout << "\t\t|                              | " << endl;
		cout << "\t\t|                              |" << endl;
		cout << "\t\t|******************************|\n " << endl;
		do
		{
			//m:
			cout << "\n\nEnter The Product Code : ";
			cin >> arrc[c];
			cout << "\n\nEnter The Product Quantity : ";
			cin >> arrq[c];
			for (int i = 0; i < c; i++)
			{
				if (arrc[c] == arrc[i])
				{
					cout << "\n\n Duplicate product code. please try again!";
					//goto m;
				}

			}
			c++;
			cout << "\n\n Do You want to buy another product? if Yes The Press y else any thing ";
			cin >> choice;
		} while (choice == 'y');
		//HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		//SetConsoleTextAttribute(h, 4);
		system("cls");
		cout << "\n\n\t\t\t________________RECEIPT_________________\n";
		cout << "\nProduct No.\tProduct Name \t Product quantity\tprice\tAmount\tAmount with Discount\n";
		for (int i = 0; i < c; i++)
		{
			ifstream data;
			data.open("datafile.txt");
			data >> productcode >> productname >> price >> productdiscount;
			while (!data.eof())
			{
				if (productcode == arrc[i])
				{
					amount = price * arrq[i];
					dis = amount - (amount * productdiscount / 100);
					total = total + dis;
					cout << "\n" << productcode << "\t\t" << productname << "\t\t" << arrq[i] << "\t\t" << price << "\t" << amount << "\t\t" << dis;

				}
				data >> productcode >> productname >> price >> productdiscount;
			}
		}
		data.close();


	}

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 4);
	cout << "\n\n_______________________________________________";
	cout << " Total Amount : " << total << endl;

}
void shopping::login()
{
START:
	int count;
	string pass1 = "";
	char ch;
	string userid, password, id, pass2;
	system("cls");
	cout << "\t\t\t  Enter Your Account " << endl;
	cout << "\t\t\t USERNAME : ";
	cin >> userid;
	cout << "\t\t\t PASSWORD : ";
	char pass[32];//to store password.
	int i = 0;
	char a;//a Temp char
	for (i = 0;;)//infinite loop
	{
		a = _getch();//stores char typed in a
		if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9'))
			//check if a is numeric or alphabet
		{
			pass[i] = a;//stores a in pass
			++i;
			cout << "*";
		}
		if (a == '\b' && i >= 1)//if user typed backspace
			//i should be greater than 1.
		{
			cout << "\b \b";//rub the character behind the cursor.
			--i;
		}
		if (a == '\r')//if enter is pressed
		{
			pass[i] = '\0';//null means end of string.
			break;//break the loop
		}
	}
	/*cout << "\nYou entered : " << pass;
	//here we can even check for minimum digits needed
	if (i <= 5)
	{
		cout << "\nMinimum 6 digits needed.\nEnter Again";
		_getch();//It was not pausing :p
		goto START;
	}*/


	ifstream Sdata;
	Sdata.open("securityfile.txt");
	while (Sdata >> id >> pass2)
	{
		if (id == userid && pass2 == pass)
		{
			count = 1;
			system("cls");
			//administrator();


		}
	}
	Sdata.close();

	if (count == 1)
	{
		cout << userid << "\n Your Login is secessfully \n Thank You ! " << endl;
		administrator();
	}
	else
	{
		cout << "\n LOGIN ERROR \n Please check your username and password\n";
		menu();
	}
}
void shopping::registration()
{
START:
	string ruserid, rpassword, rid, rpass;
	system("cls");
	cout << "\t\t\t Enter The New Username : ";
	cin >> ruserid;
	cout << "\t\t\t Enter The New Password : ";
	//cin >> rpassword;
	char pass[32];
	int i = 0;
	char a;
	for (i = 0;;)
	{
		a = _getch();
		if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9'))

		{
			pass[i] = a;
			++i;
			cout << "*";
		}
		if (a == '\b' && i >= 1)

		{
			cout << "\b \b";
			--i;
		}
		if (a == '\r')
		{
			pass[i] = '\0';
			break;
		}
	}
	cout << "\nYou entered : " << pass;


	if (i <= 5)
	{
		cout << "\nMinimum 6 digits needed.\nEnter Again";
		_getch();
		goto START;
	}


	ofstream sf;
	sf.open("securityfile.txt", ios::app);
	sf << ruserid << " " << pass << endl;
	system("cls");
	cout << "\n\t\t\t Registration is successfull ! \n";
	menu();
}
void shopping::forgot()
{
	int option;
	system("cls");

	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 2);
	cout << "\t\t\t You Forgot The Password? No worries I got U :)\n";
	cout << "\t\t|**************************************|" << endl;
	cout << "\t\t| 1) Search Your Account by Username   |" << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t| 2)    Back To Main Menu  :(          | " << endl;
	cout << "\t\t|                                      |" << endl;
	cout << "\t\t|**************************************|\n " << endl;
	cout << "\t\t Please Enter Your Choice :- ";
	cin >> option;
	switch (option)
	{
	case 1:
	{
		int count = 0;
		string suserid, sid, spass;
		cout << "\n\t\t\t Enter The Username which you remembered : ";
		cin >> suserid;

		ifstream fdata;
		fdata.open("securityfile.txt");
		while (fdata >> sid >> spass)
		{
			if (sid == suserid)
			{
				count = 1;
			}
		}
		fdata.close();
		if (count == 1)
		{
			system("cls");
			cout << "Your Account is Found :) \n";
			cout << "\n\n Your Password is : " << spass << endl;;
			menu();
		}
		else
		{
			system("cls");
			cout << "\n\t Sorry! Your Account is Not Found :( \n";
			menu();
		}
		break;
	}
	case 2:
	{
		system("cls");
		menu();
	}
	default:
		cout << "\t\t\t\t< Select one of the given options >" << endl;
		menu();

	}
}

int main()
{
	shopping s;
	s.menu();

}



