/*WAP to get and display N numbers of Diamond companies information using encapsulation and use of
parameterised constructor by including below mentioned attributes:
- comp_id
- comp_name
- comp_staff_quantity
- comp_revenue (per year)
- comp_import_raw_diamonds (no. of raw diamondsimported per year)
- comp_export_diamonds (no. of diamonds per year)
- comp_ceo (name of CEO of the company)*/

#include<iostream>
#include<string.h>
using namespace std;
class compani{
	private:
		int id;
		char name[20];
		int staff_quantity;
	    int revenue;
	    int import_raw_diamond;
	    int export_diamond;
	    char ceo_name[20];
	public:
			compani(int id,char name[],int staff_quantity,int revenue,int import_raw_diamond,int export_diamond,char ceo_name[]){
			this->id=id;
			strcpy(this->name,name);
			this->staff_quantity=staff_quantity;
			this->revenue=revenue;
			this->import_raw_diamond=import_raw_diamond;
			this->export_diamond=export_diamond;
			strcpy(this->ceo_name,ceo_name);
			}
			void getter();
	};
	void compani::getter(){
			cout<<id<<endl;
			cout<<name<<endl;
			cout<<staff_quantity<<endl;
			cout<<revenue<<endl;
			cout<<import_raw_diamond<<endl;
			cout<<export_diamond<<endl;
			cout<<ceo_name<<endl;
	}
	main(){
		int id;
		char name[20];
		int staff_quantity;
	    int revenue;
	    int import_raw_diamond;
	    int export_diamond;
	    char ceo_name[20];
	    int i,n;
	    
		cout<<"how many record in compani:"<<endl;
	    cin>>n;
		 for(i=0;i<n;i++)
	   {
		cout<<"enter id:";
		cin>>id;
		cout<<"enter name: ";
		cin>>name;
		cout<<"enter staff_quantity: ";
		cin>>staff_quantity;
		cout<<"enter revenue: ";
		cin>>revenue;
		cout<<"enter import_raw_diamond: ";
		cin>>import_raw_diamond;
		cout<<"enter export_diamond: ";
		cin>>export_diamond;
		cout<<"ceo_name: ";
		cin>>ceo_name;
	
		compani obj(id,name,staff_quantity,revenue,import_raw_diamond,export_diamond,ceo_name);
		
	    
	   	obj.getter();
	   }
		


}
