/*Design a class called "Car" with private member variables such as brand, model, and year. 
Create a constructor that takes these three parameters and initializes the object with the provided values. 
Implement a function to display the details of the car.*/

#include<iostream>
#include<string>
using namespace std;

class Car{
	private:
		string brand,model;
		int year;
		
	public:
		Car()
		{
			year = 0;
			brand = "";
			model = "";			
		}
		
		int getYear() const
		{
			return year;
		}
		void setYear(int newYear)
		{
			year = newYear;
		}
		string getBrand()const
		{
			return brand;
		}
		void setBrand(string newBrand)
		{
			brand =newBrand;
		}
		string getModel()const
		{
			return model;
		}
		void setModel(string newModel)
		{
			model=newModel;
		}
		void display()
		{
			cout<<"\nModel of the car is: "<<model;
			cout<<"\nBrand of the car is: "<<brand;
			cout<<"\nYear of the car is: "<<year;
		}
			
};

int main()
{
	Car c1;
	string model,brand;
	int year;
	
	cout<<"\nEnter the model of the car: ";
	cin>>model;
	cout<<"\nEnter the brand of the car: ";
	cin>>brand;
	cout<<"\nEnter the year if the car: ";
	cin>>year;
	
	c1.setBrand(model);
	c1.setBrand(brand);
	c1.setYear(year);
	
	c1.display();
	return 0;
	
}

