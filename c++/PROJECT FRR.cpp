#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
using namespace std;
class Personal
{
	protected:
		string name;
		long int phone;
		int member;
		public:
		void getdata()
		{
		    cout<<"Enter your Name \n";
			cin>>name;
			cout<<"Enter Your Contact Number \n";
			cin>>phone;
			cout<<"Enter The Number of members you have \n";
			cin>>member;
			cout<<"\n";
			//cout<<"**************---------------------**********************-----------*****"<<endl;
		}
		operator int()
		{
			return member;
		}
};
class member_detail:public Personal
{
	protected:
	string mname;
	int age;
	string vehicle;
	int budget;
	int days;
	float x;
	public:
	void getdata1()
	{
	
    cout<<"Enter your group members name \n";
			cin>>mname;
			cout<<"Enter their Age\n";
			cin>>age;
		}
		void getdata3()
		{
	cout<<"\n";
		//cout<<"--------------------------------------------------------------------------"<<endl;
			cout<<"Enter the mode of travelling\n";
			cout<<"choose from (Flight / Train /Seaways/Bus)"<<endl;
			cin>>vehicle;
		     cout<<"Enter your budget\n"<<endl;
		     cout<<"1.Normal trip-Rs5000"<<"\t"<<"2.Memorable trip-Rs 12000"<<"\t"<<"3.Adventurous Trip"<<endl;
			cin>>budget;
				cout<<"Enter your Trip Days\n";
			cin>>days;
		}
	
	int check()
	{
		if(age<3 && age>50)
		{
			
			return 1;
		}else
		{
			return 2;
		}
	}
		void showdata()
	{cout<<"\n";
	//cout<<"------***------------***------------***------------***------------***------"<<endl;
		cout<<"!(Press Enter if below displayed data is right)"<<endl;
		cout<<"Name:-"<<name<<endl<<"Phone:-"<<phone<<endl<<"No of member:-"<<member<<endl<<"Vehicle:-"<<vehicle<<endl
		<<"Budget:"<<budget<<endl<<"Days:"<<days<<endl;
	}
	void showdata1()
	{
		cout<<"\n";
		cout<<"Name:-" <<mname<<endl<<"age:-"<<age<<endl;
	}
};

//FUNCTIONS STARTS HERE

int fun2(int m)
{
	    cout<<"Let me know if you If you Need more Info.:"<<endl;
		cout<<"-------------Information Regarding------------"<<endl;
		cout<<"1.Near By Hotels"<<endl;
		cout<<"2.Distance from Different Station's"<<endl;
		cout<<"3.Ticket Price"<<endl;
		//"------***------------***------------***------------***------------***------"endl;
       	
       	int third;
		cin>>third;
		//start of second inner loop in goa
		switch(third)
		{
		case 1:
		{
		ifstream Myfile("hotels1.txt");
	    char cje;
	    while(!Myfile.eof())
	    {
	    Myfile.get (cje);
	    cout<<cje;
		}
		Myfile.close();
		break;
		}						
		case 2:	
		{
		ifstream Myfile("distance1.txt");
	    char cke;
	    while(!Myfile.eof())
	    {
	    Myfile.get (cke);
	    cout<<cke;
		}
		Myfile.close();
		break;
		}
		case 3:
		{
		ifstream Myfile("tickets1.txt");
	    char cle;
	    while(!Myfile.eof())
	    {
	    Myfile.get (cle);
	    cout<<cle;
		}
		Myfile.close();
		break;
		}
		default :cout<<"No information required okay"<<endl;
		}
	   
}
int fun4(int z)
{
	cout<<"For more information Press Enter:"<<endl;
		cout<<"-------------Information Regarding--------------------------------------------------------------------------------------------"<<endl;
		cout<<"1.Hotels"<<endl;
		cout<<"2.Distance from Station's"<<endl;
		cout<<"3.Ticket Price"<<endl;
		cout<<"-------------------------------------------------------------------------------------------------------------------------------"<<endl;
       	
       	int fourth;
		cin>>fourth;
		//start of second inner loop in goa
		switch(fourth)
		{
			case 1:
				{
					ifstream Myfile("hotels2.txt");
	    char cjef;
	    while(!Myfile.eof())
	    {
	    	Myfile.get (cjef);
	    	cout<<cjef;
		}
		Myfile.close();
		break;
				}
				
			case 2:	
			{
				ifstream Myfile("distance2.txt");
	    char ckef;
	    while(!Myfile.eof())
	    {
	    	Myfile.get (ckef);
	    	cout<<ckef;
		}
		Myfile.close();
				break;
			}
			case 3:
				{
					ifstream Myfile("tickets2.txt");
	    char clef;
	    while(!Myfile.eof())
	    {
	    	Myfile.get (clef);
	    	cout<<clef;
		}
		Myfile.close();
					break;
				}
				default :cout<<"No information required okay"<<endl;
		}
}
int fun1(int n)
		{
		cout<<"I am here to Help you ask me :"<<endl;
		cout<<"-------------Information Regarding------------"<<endl;
		cout<<"4.Hotels"<<endl;
		cout<<"5.Distance from Station's"<<endl;
		cout<<"6.Ticket Price"<<endl;
		cout<<"-------------------------"<<endl;
		int y;
		cin>>y;
		//Switch case inside DELHI
		switch(y)
		{
		case 4:
		{
		ifstream Myfile("hotels.txt");
	    char cj;
	    while(!Myfile.eof())
	    {
	    Myfile.get (cj);
	    cout<<cj;
		}
		Myfile.close();
		break;
		}
				
		case 5:	
		{
		ifstream Myfile("distance.txt");
	    char ck;
	    while(!Myfile.eof())
	    {
	    Myfile.get (ck);
	    cout<<ck;
		}
		Myfile.close();
		break;
		}
		case 6:
		{
		ifstream Myfile("tickets.txt");
	    char cl;
	    while(!Myfile.eof())
	    {
	    Myfile.get (cl);
	    cout<<cl;
		}
		Myfile.close();
		break;
		}
		default :cout<<"No information required"<<endl;
		}
        }
        
        int fun5(int w)
        {
        	cout<<"For more information Press Enter:"<<endl;
		cout<<"-------------Information Regarding------------"<<endl;
		cout<<"1.Hotels"<<endl;
		cout<<"2.Distance from Station's"<<endl;
		cout<<"3.Ticket Price"<<endl;
		cout<<"-------------------------"<<endl;
       	
       	int sixth;
		cin>>sixth;
		//start of second inner loop in goa
		switch(sixth)
		{
			case 1:
				{
					ifstream Myfile("hotels4.txt");
	    char cjefd;
	    while(!Myfile.eof())
	    {
	    	Myfile.get (cjefd);
	    	cout<<cjefd;
		}
		Myfile.close();
		break;
				}
				
				
			case 2:	
			{
				ifstream Myfile("distance4.txt");
	    char ckefd;
	    while(!Myfile.eof())
	    {
	    	Myfile.get (ckefd);
	    	cout<<ckefd;
		}
		Myfile.close();
				break;
			}
			case 3:
				{
					ifstream Myfile("tickets4.txt");
	    char clefd;
	    while(!Myfile.eof())
	    {
	    	Myfile.get (clefd);
	    	cout<<clefd;
		}
		Myfile.close();
					break;
				}
				default :cout<<"No information required okay"<<endl;
		}
	   
}
		
           //Inside switch ends here and also case ends here
    
    //SEcond function starts
int mainitem(int y)
{
//system("color 3");
cout<<"Select the state"<<endl;
cout<<"1.Delhi"<<endl;
cout<<"2.Goa"<<endl;
cout<<"3.Shimla"<<endl;
cout<<"4.Mumbai"<<endl;
cout<<"5.Punjab"<<endl;
cout<<"----------------------------------------------------------------------------------------------------------------------------"<<endl;

cout<<"which state would you like to go in tour  plz enter in number"<<endl;
int x ;
cin>>x;
//switch case for 1st file delhi
switch (x)
{
case 1:
{
ifstream Myfile("dil.txt");
char ch;
while(!Myfile.eof())
{
Myfile.get (ch);
cout<<ch;
}
Myfile.close();
cout<<"For more information Press Enter:"<<endl;
cout<<"-------------Information Regarding------------"<<endl;
cout<<"4.Hotels"<<endl;
cout<<"5.Distance from Station's"<<endl;
cout<<"6.Ticket Price"<<endl;
cout<<"7.Culture"<<endl;
cout<<"-------------------------"<<endl;
int y;
cin>>y;
//switch case inside delhi
switch(y)
{
case 4:
{
ifstream Myfile("hotels.txt");
char cj;
while(!Myfile.eof())
{
Myfile.get (cj);
cout<<cj;
}
Myfile.close();
//here added 
cout<<"For more information press 1 "<<endl;
cout<<"For going back to hiome page enter 2"<<endl;
int fu;
cin>>fu;
if(fu==1)
{
fun1(fu);
}
else
{
mainitem(fu);
}
break;
}	
case 5:	
{
ifstream Myfile("distance.txt");
char ck;
while(!Myfile.eof())
{
Myfile.get (ck);
cout<<ck;
}
Myfile.close();
cout<<"For more information press 1 & Enter"<<endl;
cout<<"For going back to home press 2 &Enter"<<endl;
int fue;
cin>>fue;
if(fue==1)
{
fun1(fue);
}else
{
	mainitem(fue);
}
break;
}
case 6:
				{
				
					ifstream Myfile("tickets.txt");
	    char cl;
	    while(!Myfile.eof())
	    {
	    	Myfile.get (cl);
	    	cout<<cl;
		}
		Myfile.close();
		 cout<<"For more information press 1 & Enter"<<endl;
		 cout<<"For going Back to home press 2 & enter"<<endl;
           int fuel;
           cin>>fuel;
           if(fuel==1)
           {
           	fun1(fuel);
		   }else
		   {
		   	mainitem(fuel);
		   }
           
					break;
				}
				case 7:
				{
				
					ifstream Myfile("cultures.txt");
	    char cul;
	    while(!Myfile.eof())
	    {
	    	Myfile.get (cul);
	    	cout<<cul;
		}
		Myfile.close();
		break;
	}
				default :cout<<"No information required"<<endl;
		}
        break;
           }
          
           
           //inside switch ends here and also case ends here
    
       case 2: 
       
       {
       	 ifstream Myfile("goa.txt");
	    char mj;
	    while(!Myfile.eof())
	    {
	    	Myfile.get (mj);
	    	cout<<mj;
		}
		Myfile.close();
		cout<<"For more information Press Enter:"<<endl;
		cout<<"-------------Information Regarding------------"<<endl;
		cout<<"1.Hotels"<<endl;
		cout<<"2.Distance from Station's"<<endl;
		cout<<"3.Ticket Price"<<endl;
		cout<<"4.Culture"<<endl;
		cout<<"-------------------------"<<endl;
       	
       	int third;
		cin>>third;
		//start of second inner loop in goa
		switch(third)
		{
			case 1:
				{
					ifstream Myfile("hotels1.txt");
	    char cje;
	    while(!Myfile.eof())
	    {
	    	Myfile.get (cje);
	    	cout<<cje;
		}
		Myfile.close();
		cout<<"For more details press 1 & Enter"<<endl;
		cout<<"For going back to home press 2 & Enter"<<endl;
                int ra;
                cin>>ra;
                if(ra==1)
                {
                fun2(ra);
            }else
            {
            	mainitem(ra);
			}
		break;
				}
				
				
			case 2:	
			{
				ifstream Myfile("distance1.txt");
	    char cke;
	    while(!Myfile.eof())
	    {
	    	Myfile.get (cke);
	    	cout<<cke;
		}
		Myfile.close();
		cout<<"For more details press 1 & Enter"<<endl;
                int ran;
                cin>>ran;
                if(ran==1)
                {
				
                fun2(ran);
            }else
            {
            	mainitem(ran);
			}
				break;
			}
			case 3:
				{
					ifstream Myfile("tickets1.txt");
	    char cle;
	    while(!Myfile.eof())
	    {
	    	Myfile.get (cle);
	    	cout<<cle;
		}
		Myfile.close();
		cout<<"For more details press 1 & Enter"<<endl;
                int rane;
                cin>>rane;
                if(rane==1)
                {
                	fun2(rane);
				}else
				{
                mainitem(rane);
            }
					break;
				}
					case 4:
				{
					ifstream Myfile("culture1.txt");
	    char cjde;
	    while(!Myfile.eof())
	    {
	    	Myfile.get (cjde);
	    	cout<<cjde;
		}
		Myfile.close();
		cout<<"For more information press 1 "<<endl;
cout<<"For going back to hiome page enter 2"<<endl;
int fd;
cin>>fd;
if(fd==1)
{
fun1(fd);
}
else
{
mainitem(fd);
}
break;
	}
	//here
				default :cout<<"No information required okay"<<endl;
		}
	   }
                break;
                
                
                //end of case 2
       /////COPY
       
       
        case 3: 
       
       {
       	 ifstream Myfile("shimla.txt");
	    char mja;
	    while(!Myfile.eof())
	    {
	    	Myfile.get (mja);
	    	cout<<mja;
		}
		Myfile.close();
		cout<<"For more information Press Enter:"<<endl;
		cout<<"-------------Information Regarding------------"<<endl;
		cout<<"1.Hotels"<<endl;
		cout<<"2.Distance from Station's"<<endl;
		cout<<"3.Ticket Price"<<endl;
		cout<<"-------------------------"<<endl;
       	
       	int fourth;
		cin>>fourth;
		//start of second inner loop in goa
		switch(fourth)
		{
			case 1:
				{
					ifstream Myfile("hotels2.txt");
	    char cjef;
	    while(!Myfile.eof())
	    {
	    	Myfile.get (cjef);
	    	cout<<cjef;
		}
		Myfile.close();
		cout<<"For more information press 1 "<<endl;
cout<<"For going back to hiome page enter 2"<<endl;
int fu;
cin>>fu;
if(fu==1)
{
fun4(fu);
}
else
{
mainitem(fu);
}
		break;
				}
				
			case 2:	
			{
				ifstream Myfile("distance2.txt");
	    char ckef;
	    while(!Myfile.eof())
	    {
	    	Myfile.get (ckef);
	    	cout<<ckef;
		}
		Myfile.close();
		cout<<"For more information press 1 "<<endl;
cout<<"For going back to hiome page enter 2"<<endl;
int fu;
cin>>fu;
if(fu==1)
{
fun1(fu);
}
else
{
mainitem(fu);
}
				break;
			}
			case 3:
				{
					ifstream Myfile("tickets2.txt");
	    char clef;
	    while(!Myfile.eof())
	    {
	    	Myfile.get (clef);
	    	cout<<clef;
		}
		Myfile.close();
		cout<<"For more information press 1 "<<endl;
cout<<"For going back to hiome page enter 2"<<endl;
int fu;
cin>>fu;
if(fu==1)
{
fun1(fu);
}
else
{
mainitem(fu);
}
					break;
				}
				default :cout<<"No information required okay"<<endl;
		}
	   }
                break;
                //end of case 3
                
                
                
        case 4: 
       
       {
       	 ifstream Myfile("mumbai.txt");
	    char mjae;
	    while(!Myfile.eof())
	    {
	    	Myfile.get (mjae);
	    	cout<<mjae;
		}
		Myfile.close();
		cout<<"For more information Press Enter:"<<endl;
		cout<<"-------------Information Regarding------------"<<endl;
		cout<<"1.Hotels"<<endl;
		cout<<"2.Distance from Station's"<<endl;
		cout<<"3.Ticket Price"<<endl;
		cout<<"-------------------------"<<endl;
       	
       	int fifth;
		cin>>fifth;
		//start of second inner loop in goa
		switch(fifth)
		{
			case 1:
				{
					ifstream Myfile("hotels3.txt");
	    char cjeff;
	    while(!Myfile.eof())
	    {
	    	Myfile.get (cjeff);
	    	cout<<cjeff;
		}
		Myfile.close();
		break;
				}
				
				
			case 2:	
			{
				ifstream Myfile("distance3.txt");
	    char ckeff;
	    while(!Myfile.eof())
	    {
	    	Myfile.get (ckeff);
	    	cout<<ckeff;
		}
		Myfile.close();
				break;
			}
			case 3:
				{
					ifstream Myfile("tickets3.txt");
	    char cleff;
	    while(!Myfile.eof())
	    {
	    	Myfile.get (cleff);
	    	cout<<cleff;
		}
		Myfile.close();
					break;
				}
				default :cout<<"No information required okay"<<endl;
		}
	   }
                break;
				
				//end of case 4
				
	case 5: 
       
       {
       	 ifstream Myfile("punjab.txt");
	    char mjad;
	    while(!Myfile.eof())
	    {
	    	Myfile.get (mjad);
	    	cout<<mjad;
		}
		Myfile.close();
		cout<<"For more information Press Enter:"<<endl;
		cout<<"-------------Information Regarding------------"<<endl;
		cout<<"1.Hotels"<<endl;
		cout<<"2.Distance from Station's"<<endl;
		cout<<"3.Ticket Price"<<endl;
		cout<<"-------------------------"<<endl;
       	
       	int sixth;
		cin>>sixth;
		//start of second inner loop in goa
		switch(sixth)
		{
			case 1:
				{
					ifstream Myfile("hotels4.txt");
	    char cjefd;
	    while(!Myfile.eof())
	    {
	    	Myfile.get (cjefd);
	    	cout<<cjefd;
		}
		Myfile.close();
		cout<<"For more information press 1 & Enter"<<endl;
		 cout<<"For going Back to home press 2 & enter"<<endl;
           int fuel;
           cin>>fuel;
           if(fuel==1)
           {
           	fun5(fuel);
		   }else
		   {
		   	mainitem(fuel);
		   }
		break;
				}
				
				
			case 2:	
			{
				ifstream Myfile("distance4.txt");
	    char ckefd;
	    while(!Myfile.eof())
	    {
	    	Myfile.get (ckefd);
	    	cout<<ckefd;
		}
		Myfile.close();
		cout<<"For more information press 1 & Enter"<<endl;
		 cout<<"For going Back to home press 2 & enter"<<endl;
           int fuel;
           cin>>fuel;
           if(fuel==1)
           {
           	fun5(fuel);
		   }else
		   {
		   	mainitem(fuel);
		   }
				break;
			}
			case 3:
				{
					ifstream Myfile("tickets4.txt");
	    char clefd;
	    while(!Myfile.eof())
	    {
	    	Myfile.get (clefd);
	    	cout<<clefd;
		}
		Myfile.close();
		cout<<"For more information press 1 & Enter"<<endl;
		 cout<<"For going Back to home press 2 & enter"<<endl;
           int fuel;
           cin>>fuel;
           if(fuel==1)
           {
           	fun5(fuel);
		   }else
		   {
		   	mainitem(fuel);
		   }
					break;
				}
				default :cout<<"No information required okay"<<endl;
		}
	   }
                break;			        
       default: printf("Choice other than 1, 2 ,3,4 and 5");
                break;  
}

} 
int main()
{
	system("color 3");
	cout<<setw(110)<<"                          *************  Welcome to JUMANJI  *************** "<<endl;
	cout<<setw(120)<<"                  This application Provides you the all Information you needed for travelling "<<endl;
	cout<<setw(123)<<"                                         ++++++SIGN UP FORM++++++++                              "<<endl;
	//cout<<"THANKYOU for choosing us Now go on and Sign up"<<endl;
	member_detail obj;
	obj.getdata();
	
	int b=obj;
	
	for(int i=1;i<=b;i++)
	{
		
		cout<<"Detail Of"<<" "<<i<<" "<<"Member"<<endl;
		//cout<<"n";
		obj.getdata1();
	}
obj.getdata3();
	if(obj.check()==2)
	{
	obj.showdata();
	for(int i=1;i<=b;i++)
	{
	obj.showdata1();
	}
	}else
	{
		"Invalid input";
	}
cout<<"-------------------------------------------------------------------------------------------"<<endl<<endl;
cout<<"";
	int z=1;
	mainitem(z);	
}



