#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class employee
{
	string name, id, salary;
public:
	employee() {}
	employee(string n, string i, string s) :name(n), id(i), salary(s) {}
	void set_name(string n)
	{
		name = n;
	}
	void set_id(string i)
	{
		id = i;
	}
	void set_salary(string s)
	{
		salary = s;
	}
	string ename()
	{
		return name;
	}
	string eid()
	{
		return id;
	}
	string esalary()
	{
		return salary;
	}
	void display()
	{
		cout << "Employee name is: " << name;
		cout << "Employee id is: " << id;
		cout << "Employee salary is: " << salary;
	}
};
int main()
{
	ifstream m;
	m.open("file4.txt");
	if (!m)
	{
		cout << "Uable to open file";
		return 1;
	}
	string nameToSearch;
	cout << "Enter the name of the employee to search: ";
	getline(cin, nameToSearch);
	m.seekg(0, ios::binary);
	streampos filesize = m.tellg();
	m.seekg(0, ios::beg);
	bool found = 0;
	while (m.tellg() < filesize)
	{
		string name, id, salary;
		getline(m, name, '\t');
		getline(m, id, '\t');
		getline(m, salary);
		if (name == nameToSearch)
		{
			employee e1(name, id, salary);
			e1.display();
			cout << endl;
			found = true;
			break;
		}
		m.seekg(1, ios::cur);
	}
	if (!found)
	{
		cout << "Employee not found";
	}
	m.close();
	system("pause");
	return(0);
}