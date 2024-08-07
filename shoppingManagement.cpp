#include<iostream>
#include<ctime>

using namespace std;
int main()
{
	int choice;
	int qunatity, bill;
    char start;
	float total,gtotal;
	
	startL:
	cout<<"Press 'h' or 'H' to start shopping for Home Appliances: ";
	cin>>start;
	if(start=='h' || start=='H')
	{
		cout<<"\t_Welcome! We're so glad you're here_"<<endl;
		cout<<"\t_Please follow the instructions_"<<endl;
		cout<<" | 1. Refrigerator"<<endl;
		cout<<" | 2. Microwave oven"<<endl;
		cout<<" | 3. Air conditioner"<<endl;
		cout<<" | 4. Washing Machine"<<endl;
		cout<<" | 5. Television"<<endl;
	}
	else 
	{
		cout<<"Wrong command, Please try again!"<<endl;
		goto startL;
	}
	
	option:
	cout<<"Choose Option: ";
	cin>>choice;
	switch(choice)
	{
		int Choice;
		case 1:
			ref:
			cout<<"\t_Refrigerator Details_"<<endl;
			cout<<" | 1. Haier       => Price: 50000"<<endl;
			cout<<" | 2. Panasonic   => Price: 70000"<<endl;
			cout<<" | 3. Electrolux  => Price: 25000"<<endl;
			cout<<" | 4. Whirlpool   => Price: 60000"<<endl;
			cout<<" | 5. Pell        => Price: 45000"<<endl;
			cout<<"Please enter your choice: ";
			cin>>Choice;
		
			if(Choice==1)
			{
				cout<<"Please Enter the Quantity: ";
				cin>>qunatity;
				bill=qunatity*50000;
			}
			else if(Choice==2)
			{
				cout<<"Please Enter the Quantity: ";
				cin>>qunatity;
				bill=qunatity*70000;
			}
			else if(Choice==3)
			{
				cout<<"Please Enter the Quantity: ";
				cin>>qunatity;
				bill=qunatity*25000;
			}
			else if(Choice==4)
			{
				cout<<"Please Enter the Quantity: ";
				cin>>qunatity;
				bill=qunatity*60000;
			}
			else if(Choice==5)
			{
				cout<<"Please Enter the Quantity: ";
				cin>>qunatity;
				bill=qunatity*45000;
			}
			else
			{
				cout<<"Wrong Command, Please try again"<<endl;
				goto ref;
			}
		break;	
									
		case 2:
			micro:
			cout<<"\t_Microwave oven Details_"<<endl;
			cout<<" | 1. Haier       => Price: 30000"<<endl;
			cout<<" | 2. Panasonic   => Price: 35000"<<endl;
			cout<<" | 3. Electrolux  => Price: 40000"<<endl;
			cout<<" | 4. Whirlpool   => Price: 15000"<<endl;
			cout<<" | 5. Pell        => Price: 55000"<<endl;
			cout<<"Please enter your choice: ";
			cin>>Choice;
			
			if(Choice==1)
			{
				cout<<"Please Enter the Quantity: ";
				cin>>qunatity;
				bill=qunatity*30000;
			}
			else if(Choice==2)
			{
				cout<<"Please Enter the Quantity: ";
				cin>>qunatity;
				bill=qunatity*35000;
			}
			else if(Choice==3)
			{
				cout<<"Please Enter the Quantity: ";
				cin>>qunatity;
				bill=qunatity*40000;
			}
			else if(Choice==4)
			{
				cout<<"Please Enter the Quantity: ";
				cin>>qunatity;
				bill=qunatity*15000;
			}
			else if(Choice==5)
			{
				cout<<"Please Enter the Quantity: ";
				cin>>qunatity;
				bill=qunatity*55000;
			}
			else
			{
				cout<<"Wrong Command, Please try again"<<endl;
				goto micro;
			}
		break;			
		case 3:
			air:
			cout<<"\t_Air conditioner Details_"<<endl;
			cout<<" | 1. Haier       => Price: 80000"<<endl;
			cout<<" | 2. Panasonic   => Price: 75000"<<endl;
			cout<<" | 3. Electrolux  => Price: 55000"<<endl;
			cout<<" | 4. Whirlpool   => Price: 45000"<<endl;
			cout<<" | 5. Pell        => Price: 65000"<<endl;
			cout<<"Please enter your choice: ";
			cin>>Choice;
			
			if(Choice==1)
			{
				cout<<"Please Enter the Quantity: ";
				cin>>qunatity;
				bill=qunatity*80000;
			}
			else if(Choice==2)
			{
				cout<<"Please Enter the Quantity: ";
				cin>>qunatity;
				bill=qunatity*75000;
			}
			else if(Choice==3)
			{
				cout<<"Please Enter the Quantity: ";
				cin>>qunatity;
				bill=qunatity*55000;
			}
			else if(Choice==4)
			{
				cout<<"Please Enter the Quantity: ";
				cin>>qunatity;
				bill=qunatity*45000;
			}
			else if(Choice==5)
			{
				cout<<"Please Enter the Quantity: ";
				cin>>qunatity;
				bill=qunatity*65000;
			}
			else
			{
				cout<<"Wrong Command, Please try again"<<endl;
				goto air;
			}
		break;			
		case 4:
			mach:
			cout<<"\t_Washing Machine Details_"<<endl;
			cout<<" | 1. Haier       => Price: 20000"<<endl;
			cout<<" | 2. Panasonic   => Price: 35000"<<endl;
			cout<<" | 3. Electrolux  => Price: 15000"<<endl;
			cout<<" | 4. Whirlpool   => Price: 40000"<<endl;
			cout<<" | 5. Pell        => Price: 50000"<<endl;
			
		cout<<"Please enter your choice: ";
		cin>>Choice;
			
			if(Choice==1)
			{
				cout<<"Please Enter the Quantity: ";
				cin>>qunatity;
				bill=qunatity*20000;
			}
			else if(Choice==2)
			{
				cout<<"Please Enter the Quantity: ";
				cin>>qunatity;
				bill=qunatity*35000;
			}
			else if(Choice==3)
			{
				cout<<"Please Enter the Quantity: ";
				cin>>qunatity;
				bill=qunatity*15000;
			}
			else if(Choice==4)
			{
				cout<<"Please Enter the Quantity: ";
				cin>>qunatity;
				bill=qunatity*40000;
			}
			else if(Choice==5)
			{
				cout<<"Please Enter the Quantity: ";
				cin>>qunatity;
				bill=qunatity*50000;
			}
			else
			{
				cout<<"Wrong Command, Please try again"<<endl;
				goto mach;
			}
		break;			
		case 5:
			tele:
			cout<<"\t_Television Details_"<<endl;
			cout<<" | 1. Samsung     => Price: 90000"<<endl;
			cout<<" | 2. Sony        => Price: 65000"<<endl;
			cout<<" | 3. Hisense     => Price: 40000"<<endl;
			cout<<" | 4. LG          => Price: 60000"<<endl;
			cout<<" | 5. Orient      => Price: 36000"<<endl;
			cout<<"Please enter your choice: ";
			cin>>Choice;
			
			if(Choice==1)
			{
				cout<<"Please Enter the Quantity: ";
				cin>>qunatity;
				bill=qunatity*90000;
			}
			else if(Choice==2)
			{
				cout<<"Please Enter the Quantity: ";
				cin>>qunatity;
				bill=qunatity*65000;
			}
			else if(Choice==3)
			{
				cout<<"Please Enter the Quantity: ";
				cin>>qunatity;
				bill=qunatity*40000;
			}
			else if(Choice==4)
			{
				cout<<"Please Enter the Quantity: ";
				cin>>qunatity;
				bill=qunatity*60000;
			}
			else if(Choice==5)
			{
				cout<<"Please Enter the Quantity: ";
				cin>>qunatity;
				bill=qunatity*36000;
			}
			else
			{
				cout<<"Wrong Command, Please try again"<<endl;
				goto tele;
			}
		break;
		default:
			cout<<"Wrong choice"<<endl;
			goto option;						
	}

    time_t currentTime = time(0);
    tm *localTime = localtime(&currentTime);
    int _DATE_ = localTime->tm_mday;
    int _MONTH_ = localTime->tm_mon + 1;  // Add 1 to get the actual month
    int _YEAR_ = localTime->tm_year + 1900;  // Add 1900 to get the actual year
    int _HOUR_ = localTime->tm_hour;
    int _MINUTE_ = localTime->tm_min;

    cout << "Date: " << _YEAR_ << "-" << _MONTH_ << "-" << _DATE_ << endl;
    cout << "Time: " << _HOUR_ << ":" << _MINUTE_ << endl;
	cout<<"Gross bill:"<<bill<<endl;
	
	if(bill>=50000 && bill<=100000)
	{
		total=bill-(bill*0.05);
		cout<<"Total discount= 5%"<<endl;	
	}
	else if(bill>=100001 && bill<=130000)
	{
		total=bill-(bill*0.1);
		cout<<"Total discount= 10%"<<endl;
	}
	else if(bill>=130001 && bill<=150000)
	{
		total=bill-(bill*0.25);
		cout<<"Total discount= 25%"<<endl;
	}
	else if(bill>=150001)
	{
		total=bill-(bill*0.5);
		cout<<"Total discount= 50%"<<endl;
	}
	else
	{
		total=bill-(bill*0.2);
		cout<<"Total discount= 2%"<<endl;
	}
	cout<<"Total bill= "<<total<<endl;
		gtotal+=total;	
		cout<<"Grand total: "<<gtotal<<endl; 
	
	shopping:
	cout<<"Do u want to do more shopping y or n: ";
	cin>>start;
	if(start=='y' || start=='Y')
	{
		goto startL;
			cout<<"Total bill= "<<total<<endl;
		gtotal+=total;	
		cout<<"Grand total: "<<gtotal<<endl;
	
	}	
	else if(start=='n' || start=='N')
	{
		cout<<"Thanks for shopping";
	}
	else
	{
		cout<<"You have entered wrong command, Please try again! "<<endl;
		goto shopping;
	}
	
	return 0;
}