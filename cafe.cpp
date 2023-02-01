/*2. WAP to get and display N numbers of Fast Food cafe
information using encapsulation and use of default
constructor by including below mentioned attributes:
- cafe_id
- cafe_name
- cafe_type (like rooftop or normal)
- cafe_rating (like 1 Star, 2 Start, ..., 5 Star)
- cafe_location (city name)
- cafe_establish_year
- cafe_staff_quantity*/

#include<iostream>
using namespace std;
class cafe{
	private:
		int id;
		char name[20];
		char type[20];
		char rating[20];
		int  establish_year;
		int staff_quantity;
		
		public:
			cafe(){
				cout<<"enter cafe id: ";
				cin>>id;
				
				cout<<"enter cafe name: ";
				cin>>name;
				
				cout<<"enter cafe type: ";
				cin>>type;
				
				cout<<"enter cafe rating: ";
				cin>>rating;
				cout<<"enter cafe establish_year: ";
				cin>>establish_year;
				
				cout<<"enter cafe staff_quantity: ";
				cin>>staff_quantity;
				}
				void getter();
	};
	void cafe::getter(){
		cout<<id<<endl;
		cout<<name<<endl;
		cout<<type<<endl;
		cout<<rating<<endl;
		cout<<establish_year<<endl;
		cout<<staff_quantity<<endl;
	}
	main(){
		int i;
		int n;
		cafe obj[n];
		cout<<"enter object: ";
		cin>>n;
		for(i=0;i<n;i++)
		{
	
		obj[i].getter();
	}
}
