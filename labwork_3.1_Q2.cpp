#include<iostream>
using namespace std;

class customer{
	private:
		int cust_id;
        string cust_name;
        int cust_age;
        string cust_telecome_brand_name;
        int cust_mobile_number;
        string cust_city;
        int cust_simcard_validity;
        
    public:
    	setData(int cust_id,string cust_name,int cust_age ,string cust_telecome_brand_name,int cust_mobile_number,string cust_city,int cust_simcard_validity)
         {
         	this->cust_id = cust_id;
         	this->cust_name = cust_name;
         	this->cust_age = cust_age;
         	this->cust_telecome_brand_name = cust_telecome_brand_name;
         	this->cust_mobile_number = cust_mobile_number;
         	this->cust_city = cust_city;
         	this->cust_simcard_validity = cust_simcard_validity;

		 }
		 getData()
		 {
		 	cout << "ID : " << cust_id << endl;
		 	cout << "Name : " << cust_name << endl;
		 	cout << "Age : " << cust_age << endl;
		 	cout << "Telecome brand name : " << cust_telecome_brand_name << endl;
		 	cout << "Mobile number : " << cust_mobile_number << endl;
		 	cout << "City : " << cust_city << endl;
		 	cout << "Simcard validity (year) : " << cust_simcard_validity << endl;		 	
		 	
		 }
         
};    

int main()
{
	customer s1,s2,s3,s4,s5;
	
	s1.setData(1,"Hasti",18,"vi",2487867648,"surat",2);
	s1.getData();
	cout << endl;
	s2.setData(2,"Hetvi",17,"vi",3878585878,"surat",5);
	s2.getData();
	cout << endl;
	s3.setData(3,"Roshani",18,"vi",8784675887,"surat",3);
	s3.getData();
	cout << endl;
	s4.setData(4,"Krisha",18,"jio",8364726497,"surat",2);
	s4.getData();
	cout << endl;
	s5.setData(5,"Jenisha",18,"jio",7865653464,"surat",3);
	s5.getData();
	
	return 0;
}  
	

