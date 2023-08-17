#include<iostream>
using namespace std;

class student{
	private:
		int stu_id;
		string stu_name;
		int stu_age;
		string stu_course;
		string stu_email;
		string stu_city;
		string stu_college;
		
	public:
		setData()
		{
			cout << "ID : ";
			cin >> stu_id;
			cout << "Name : ";
			cin >> stu_name;
			cout << "Age : ";
			cin >> stu_age;
			cout << "Course : ";
			cin >> stu_course;
			cout << "Email : ";
			cin >> stu_email;
			cout << "City : ";
			cin >> stu_city;
			cout << "College : ";
			cin >> stu_college;
			
		}
		
		getData()
		{
			cout << "ID : " << stu_id << endl;
			cout << "Name : " << stu_name << endl;
			cout << "Age : " << stu_age << endl;
			cout << "Course : " << stu_course << endl;
			cout << "Email : " << stu_email << endl;
			cout << "City : " << stu_city << endl;
			cout << "College : " << stu_college << endl;

		}
	
};

int main()
{
	student s[5];
	
	int i;
	
	for(i=0;i<5;i++)
	{
		s[i].setData();
	}
	for(i=0;i<5;i++)
	{
		s[i].getData();
	}

}
