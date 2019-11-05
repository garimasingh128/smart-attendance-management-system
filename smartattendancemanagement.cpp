#include<iostream>
#include<conio.h>
 #include<windows.h>
    #include<string.h>
   
using namespace std;

class link
{
      private:
            

int b,x,i,choice,n,a;
char cont;

struct node
{
     int data;
      string name;
   string email;
    string home;
    string off;
    string tell;
    string cell;
	string sec;
	string gender;
      struct node *link;  
     
}*head,*temp,*temp1,*temp2;

public:
link()
{
      
head=NULL;      
}

   void start()
   { 
	   Sleep(800);
gotoxy(52,10);
  cout<<"SMART ATTENDANCE MANAGEMENT SYSTEM:\n";
	 Sleep(600);
	 system("color 0b");
	 gotoxy(52,12);
    Sleep( 1000 );
	 cout<<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB";
	 Sleep(2000);
	  cout<<"\xDB\xDB\xDB\xDB";
	  Sleep(1000);
	  cout<<"\xDB\xDB\xDB\xDB\xDB\xDB";
	 Sleep(1000);
	cout<<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB";
	 Sleep(500);
    system("color 1f");
     effect();
	 main_menu();
        }

void main_menu()
      {
		    
      do
      {
          system("cls");
          
		cout<<"\n\t\t\t\t\t\t  SMART ATTENDANCE MANAGEMENT SYSTEM:: \n"; 

		cout<<"\n\t\t\t\t\t\t  MAIN MENU \n"; 
		cout<<"\t\t\t\t\t__________________________________\n\n";
		cout<<"\n\t\t\t\t\t\t1. PRESENT : Add Attendance Record \n";  
		cout<<"\n\t\t\t\t\t\t2. ABSENT : Delete Specify Record\n";  
		cout<<"\n\t\t\t\t\t\t3. ALL ABSENT : Delete All Records\n"; 
		cout<<"\n\t\t\t\t\t\t4. Find A Record\n";
		cout<<"\n\t\t\t\t\t\t5. Display All Atendance Records\n"; 
		 
		cout<<"\n\t\t\t\t\t\t6. About Developers\n";  
		cout<<"\n\t\t\t\t\t\t7. Exit\n";
		cout<<"\n\t\t\t\t\t\t||Choose your option : ";
       choice=getche();
	   switch(choice)
        {
         case '1':
         system("cls");  
         insert();
         break; 
         case '2':
         system("cls");   
        del_specify();
         break; 
         case '3':
         system("cls");   
         del();
         break; 
         case '4':
         system("cls");
         search();
         break; 
         case '5':
         system("cls");              
         print();
         break; 
		 case '6':
		About_Dev();
		break;
         case '7':
         exit(0);
         break; 
         default:                 
        cout<<"\nInvalid Key Pressed................."; 
          }       
 
        cout<<"\n\n*Press ENTER KEY To <continue>";
       cout<<"\n\n*Press ESC KEY To <exit>";
          
        x=getche();   
        system("cls");  
        if(x==27)
        {
        exit(0);
        }
		
        else 
        {
			main_menu();
        }
        }while(x==13);  
      
        }

void About_Dev()
{
effect();
	system("cls");
cout<<"\n";
gotoxy(45,1);
cout<<"\xDB\xDB\xDB\xDB\xDB\xDB About Developer \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n\n";
gotoxy(45,3);cout<<"\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n";
Sleep(1000);cout<<"\nName: Garima Singh 1806143";Sleep(1000);;
Sleep(1000);  
cout<<"\nPlatform :Visual Studio OR DEV-C++ \n";
cout<<"\nLanguage :C++\n";

}

void insert(void)
{
	effect();

         char get1[100],get2[100],get3[100],get4[100],get5[100],get6[100],get7[100],get8[100];
     gotoxy(45,1);cout<<" Add your Record \n";
      gotoxy(45,2);cout<<" ___________\n";
      cout<<"\n"; 
 
 if(head==NULL)
 {
          
 head =new struct node;
 i=1;
cout<<"\n# Student Id:"<<i<<endl;
 head->data=i;
 fflush(stdin);
cout<<"\n# Name :" ;
       gets(get1);
       head->name=get1;
      cout<<"\n# Class : "; 
  gets(get6);
  head->off=get6;
  cout<<"\n# Section : ";
  gets(get7);
  head->sec=get7;
  cout<<"\n# Gender : ";
  gets(get8);
  head->gender=get8;
      cout<<"\n# Enter Telephone Number : ";
       gets(get2);
       head->tell=get2;
        cout<<"\n# Enter Cell-Phone Number : ";
       gets(get3);
head->cell=get3;
      cout<<"\n# Enter Email Address : "; 
      gets(get4);
head->email=get4;
      cout<<"\n# Enter Home  Address : "; 
 gets(get5);
  head->home=get5;
 head->link=NULL;  
 cout<<"\nYour Record Has been Success Fully inserted\n";
 }    
     else
     {
     temp=head;
     head=new struct node;    
 i++;
cout<<"\n# Student Id:"<<i<<endl;
head->data=i;
 fflush(stdin);
  cout<<"\n# Name :" ;
       gets(get1);
       head->name=get1;
       cout<<"\n# Class : "; 
  gets(get6);
  head->off=get6;
 cout<<"\n# Section : ";
  gets(get7);
  head->sec=get7;
  cout<<"\n# Gender : ";
  gets(get8);
  head->gender=get8;
cout<<"\n# Enter Telephone Number : ";
       gets(get2);
       head->tell=get2;
  cout<<"\n# Enter Cell-Phone Number : ";
       gets(get3);
head->cell=get3;
   cout<<"\n# Enter Email Address : "; 
      gets(get4);
head->email=get4;
  cout<<"\n# Enter Home  Address : "; 
 gets(get5);
  head->home=get5;
  head->link=temp;
cout<<"\nYour Record Has been  SuccessFully  inserted\n";   
     }
      cout<<"\nDo You Want To Add Another Record ? y / n  \a";
     cont=getche();
	 if(cont=='y')
      {
      cout<<"\n";
      system("cls");
      insert();
      }
 
      Sleep(1000);
      main_menu();
      
     
  }
  
  void search(void)
  {
  effect();
  system("cls");
      temp=head;
      
      cout<<"\n\n\t\t\t\t\t\t\aRestriction!\n\n\n\n\t\t\t\t   Student ID should be in integer not in char ";
	  Sleep(3000);
	  system("cls");
       cout<<"\nEnter Id Which do you want to search:";
	   
       cin>>a;
        fflush(stdin);
    while(head!=NULL)
    {
                  
       if(head->data==a)         
       {
       cout<<"\n";
     gotoxy(45,1); cout<<"Entry Found\n";
      gotoxy(45,2); cout<<" ____________\n"; 
    cout<<"==========================================================================================================================";
      cout<<"\n";
      cout<<"\n# ID: "<<head-> data;
      cout<<"\n# Name: "<<head-> name;
    cout<<"\n# Class : "<<head -> off;
	  cout<<"\n# Section : "<<head ->sec;
	  cout<<"\n# Gender : "<<head ->gender;
  cout<<"\n# Telephone Number : "<<head-> tell;
  
      cout<<"\n# Cell-Phone Number : "<<head -> cell;
      cout<<"\n# Email Address : "<<head -> email; 

      cout<<"\n# Home  Address : "<<head-> home; 
      
   
      cout<<"\n";
    cout<<"===========================================================================================================================";

                  return;      
     
     }  
     else     
        
      {
     head=head->link;
     } 
}
cout<<"Not found";


}
    
  void del(void)
  {
       while(head!=NULL)
       {
           delete(head);
           head=head->link;           
                        
       }
       cout<<"\nYour all record has been deleted....";
       
    }
  
   void print(void)
  {
	  effect();
       
             temp1=head;
      if(temp1==NULL)
      {
      
     cout<<"No Entries Found.....";
     Sleep(1000);
      main_menu();
      
      }     
     
           
      x:
      system("cls");
      gotoxy(45,1);cout<<"Display Record \n";
     cout<<"=====================================================================================================================";
      cout<<"\n";
	  cout<<"\n# ID: "<<temp1-> data<<endl;
      cout<<"\n# Name: "<<temp1-> name<<endl;
	  cout<<"\n# Class : "<<temp1 -> off<<endl;
	  cout<<"\n# Section : "<<temp1 ->sec<<endl;
	  cout<<"\n# Gender : "<<temp1->gender<<endl;
	  cout<<"\n# Telephone Number : "<<temp1-> tell<<endl;
		cout<<"\n# Cell-Phone Number : "<<temp1 -> cell<<endl;
	cout<<"\n# Email Address : "<<temp1 -> email<<endl; 
   cout<<"\n# Home  Address : "<<temp1-> home<<endl; 
     cout<<"\n";
    cout<<"=======================================================================================================================";
       cout<<"\n";
      cout<<"\nDo You Want To View Another Record ? y / n  \a";
      cont=getche();
      
       if(cont=='y')
      {
               
      cout<<"\n";
      
       if(temp1->link==NULL)
      {
      cout<<"\nNo More Entries ........";
      Sleep(1000);
     main_menu();
	   }
      temp1=temp1->link;
       
      goto x;
      
      }
 
      
      else if(temp1->link==NULL)
      {
      cout<<"\nNo More Entries ........";
      Sleep(1000);
      
      main_menu();
 
      }
     
      else 
      {
           main_menu();
      exit(0);
      }
       

  }

  void del_specify(void)
  
  {
       effect();
    system ("cls");
	cout<<"\n\t\t\t Delete A Record \n";
         cout<<"\n\t\t\t ________________\n"; 
  cout<<"Enter Id which you want to del:";
 cin>>n;

 if(head->data==n)
                  {
                                   
                  free(head);
                  
              
                  head=head->link;
                       cout<<"\n";
       cout<<n<<" is successfully deleted in node";   
                                 }
            else
			{
          delete_node(n);
            }
       

}
  
 
  void delete_node(int n)
{
      effect();

temp1 = head;
temp2 = head;
 
while (temp1 != NULL)
{
if (temp1->data == n)
{
                        
break;
}

if (temp1 == temp2)
{
temp1 = temp1->link;
}
else
{
    
temp2 = temp2->link;
temp1= temp2->link; 
}}

if (temp1 == NULL){
cout << "ID not found" << endl;

}
else
{
   
temp2 -> link = temp2 ->link->link;
delete temp1;
        cout<<"\n";
       cout<<n<<" is successfully deleted in node"; 

}

}

  void gotoxy(int x, int y)
{
   COORD ord;
   ord.X = x;
   ord.Y = y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), ord);
}

void effect()
{   int i,j;
char ch;
ch=220;
    gotoxy(0,0);
    for (i=0;i<25;i++)
    {   
		for(j=0;j<125;j++)
		{
		cout<<ch;
        
		}
		Sleep(12);
		
		cout<<"\n";
        }
    gotoxy(0,0);
    for (i=0;i<27;i++)
    { 
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t            \n";
		Sleep(20);
    }
    }
};
      
int main()
{
    link obj;
   obj.start();
    getch();            
}
    

