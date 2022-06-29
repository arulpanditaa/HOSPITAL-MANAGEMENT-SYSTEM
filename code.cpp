include<iostream>
#include<iomanip>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<cstring>
usingnamespacestd;
structnode
{
  stringname, doctorname, address, no;
  charspecial;
  intage, id;
  intdays;
  node *prev;
  node *next;

};

classhospital
{
  intcount;
  node *head = NULL;
  node *tail = NULL;
public:

  voiddetails ();
  voiddisplay ();
  node*searc ();
  voiddoctor (node*temp, chara);
  voidedit();
  //void delete();
  voidgotoxy (intx, inty);
  voidAbove_horizontal ();
  voidLine ();
  voidbelow_Horizontal ();
  voidmenu();
  voiddelet();
};


********************************  MAIN FUNCTION ******************************************







intmain ()
{

    system("cls");

    hospitalh1;
charloader=254;
h1.gotoxy(13,3);
cout<<"Loading";
h1.gotoxy(20,3);
for(inti=0;i<40;i++)
{
    cout<<loader;
    Sleep(60);
}
system("cls");
h1.gotoxy(30,4);
//**************************
cout<<"HOSPITAL MANAGMENT SYSTEM";
h1.gotoxy(3,3);
h1.Above_horizontal();
h1.gotoxy(3,5);
h1.below_Horizontal();
h1.gotoxy(3,4);
h1.Line();
h1.gotoxy(78,4);
h1.Line();
h1.gotoxy(13,15);
//****************************
h1.menu();
getch();
  return0;
}
******************************************************************************************
******************************************************************************************
Voidhospital::details ()
{
//***************************
gotoxy(22,7);
Above_horizontal();
gotoxy(22,9);
below_Horizontal();
gotoxy(22,8);
Line();
gotoxy(97,8);
Line();
//************************
//************************
gotoxy(22,10);
Above_horizontal();
gotoxy(22,12);
below_Horizontal();
gotoxy(22,11);
Line();
gotoxy(97,11);
Line();
//************************
//***************************
gotoxy(22,13);
Above_horizontal();
gotoxy(22,15);
below_Horizontal();
gotoxy(22,14);
Line();
gotoxy(97,14);
Line();
//************************
//***************************
gotoxy(22,16);
Above_horizontal();
gotoxy(22,18);
below_Horizontal();
gotoxy(22,17);
Line();
gotoxy(97,17);
Line();
//************************
//***************************
gotoxy(22,19);
Above_horizontal();
gotoxy(22,21);
below_Horizontal();
gotoxy(22,20);
Line();
gotoxy(97,20);
Line();
//************************
//***************************
gotoxy(22,22);
Above_horizontal();
gotoxy(22,26);
below_Horizontal();
gotoxy(22,23);
Line();
gotoxy(22,24);
Line();
gotoxy(22,25);
Line();
/*gotoxy(3,26);
Line();
gotoxy(3,27);
Line();*/
gotoxy(97,23);
Line();
gotoxy(97,24);
Line();
gotoxy(97,25);
Line();
/*gotoxy(78,26);
Line();
gotoxy(78,27);
Line();
*/
//************************

  node *temp = newnode;
  gotoxy(25,8);
  cout<<"ENTER THE PATIENT NAME: " ;
  cin>>temp->name;
  gotoxy(25,11);

  cout<<"ENTER  PATIENT AGE : " ;
  cin>>temp->age;
  gotoxy(25,14);
  cout<<"ENTER PHONE NUMBER : " ;
  cin>>temp->no;
  gotoxy(25,17);
  cout<<"ENTER THE RESIDENTIAL ADDRESS : " ;
  cin>>temp->address;
  gotoxy(25,20);
  cout<<"Patient id : " ;
  cin>>temp->id;
  gotoxy(25,23);
  cout<<"Chose form A,B,C to which Doctor you want to consult : "<<endl;
gotoxy(25,25);
   cout<<"A:Neurologist"<<"       "<<"B:Dermatologist"<<"       "<<"C:Cardiolgoist"
    <<"   "  ;
  cin>>temp->special;
  doctor (temp, temp->special);
  temp->next = NULL;
  if (head == NULL)
    {
      temp->prev = NULL;
      head = tail = temp;
    }
  else
    {
      node *r = head;
      for (r; r->next != NULL; r = r->next);
      r->next = temp;
      temp->prev = r;
      tail=temp;

    }

}
******************************************************************************************
******************************************************************************************
Voidhospital::display ()
{
gotoxy(22,7);
Above_horizontal();
gotoxy(22,9);
below_Horizontal();
gotoxy(22,8);
Line();
gotoxy(97,8);
Line();

//*********************************
  if (head == NULL)
  {
      gotoxy(41,8);
    cout<<"!!!!!!!!!!!!  NO Records  !!!!!!!!!!!!!!";
  }
  inty=3;
  node *r = head;
  if(r!=NULL)
  {

 gotoxy(22,7);
Above_horizontal();
gotoxy(22,9);
below_Horizontal();
gotoxy(22,8);
Line();
gotoxy(97,8);
Line();
gotoxy(23,8);
cout<<"Patient Name";
gotoxy(42,8);
cout<<"Patient ID";
gotoxy(57,8);
cout<<"Phone NO";
gotoxy(73,8);
cout<<"Doctor Name";
gotoxy(91,8);
cout<<"AGE";
}
  for (r; r != NULL; r = r->next)
  {
    gotoxy(22,(7+y));
Above_horizontal();
gotoxy(22,9+y);
below_Horizontal();
gotoxy(22,8+y);
Line();
gotoxy(97,8+y);
Line();
gotoxy(23,8+y);
cout<<r->name;
gotoxy(42,8+y);
cout<<r->id;
gotoxy(57,8+y);
cout<<r->no;
gotoxy(73,8+y);
cout<<r->doctorname;
gotoxy(91,8+y);
cout<<r->age;
y=y+3;
  }

}
******************************************************************************************
******************************************************************************************
node*hospital::searc ()
{
                     
gotoxy(22,2);
Above_horizontal();
gotoxy(22,4);
below_Horizontal();
gotoxy(22,3);
Line();
gotoxy(97,3);
Line();
//************************
                 gotoxy(31,3);
          cout<<"*************** WELCOME TO CITY HOSPITAL ******************";
   gotoxy(22,7);
Above_horizontal();
gotoxy(22,9);
below_Horizontal();
gotoxy(22,8);
Line();
gotoxy(97,8);
Line();
  intn;
  gotoxy(25,8);
  cout<<"Enter the patient id  ";
  cin>>n;
  system("cls");
  node *r = head;
  for (r; r!= NULL; r = r->next)
    {
      if (r->id == n)
      {
gotoxy(22,7);
Above_horizontal();
gotoxy(22,9);
below_Horizontal();
gotoxy(22,8);
Line();
gotoxy(97,8);
Line();
gotoxy(23,8);
cout<<"Patient Name";
gotoxy(42,8);
cout<<"Patient ID";
gotoxy(57,8);
cout<<"Phone NO";
gotoxy(73,8);
cout<<"Doctor Name";
gotoxy(91,8);
cout<<"AGE";
//*********************************
gotoxy(22,10);
Above_horizontal();
gotoxy(22,12);
below_Horizontal();
gotoxy(22,11);
Line();
gotoxy(97,11);
Line();
gotoxy(23,11);
cout<<r->name;
gotoxy(42,11);
cout<<r->id;
gotoxy(57,11);
cout<<r->no;
gotoxy(73,11);
cout<<r->doctorname;
gotoxy(91,11);
cout<<r->age;
returnr;

      }

    }
  if (r == NULL)
  {
         gotoxy(22,7);
Above_horizontal();
gotoxy(22,9);
below_Horizontal();
gotoxy(22,8);
Line();
gotoxy(97,8);
Line();
       gotoxy(28,8);
      cout<<"Wrong Id !! No record of such patient";
      returnr;
  }

}
******************************************************************************************
******************************************************************************************
voidhospital::doctor (node*temp, chara)
{
    system("cls");
    //***************************
gotoxy(22,7);
Above_horizontal();
gotoxy(22,9);
below_Horizontal();
gotoxy(22,8);
Line();
gotoxy(97,8);
Line();
gotoxy(25,8);
cout<<"Doctor Name";
gotoxy(42,8);
cout<<"Doctor Qualification";
gotoxy(67,8);
cout<<"Experience";
gotoxy(85,8);
cout<<"Fees";
//************************
//***************************
gotoxy(22,10);
Above_horizontal();
gotoxy(22,12);
below_Horizontal();
gotoxy(22,11);
Line();
gotoxy(97,11);
Line();

//***************************
//***************************
gotoxy(22,13);
Above_horizontal();
gotoxy(22,15);
below_Horizontal();
gotoxy(22,14);
Line();
gotoxy(97,14);
Line();

//***************************
//***************************
gotoxy(22,16);
Above_horizontal();
gotoxy(22,18);
below_Horizontal();
gotoxy(22,17);
Line();
gotoxy(97,17);
Line();

//***************************
//***************************
gotoxy(22,19);
Above_horizontal();
gotoxy(22,21);
below_Horizontal();
gotoxy(22,20);
Line();
gotoxy(97,20);
Line();

//***************************
//***************************
gotoxy(22,22);
Above_horizontal();
gotoxy(22,24);
below_Horizontal();
gotoxy(22,23);
Line();
gotoxy(97,23);
Line();

//***************************
  chart;
  switch (a)
    {
    case'a':
      gotoxy(25,11);
      cout<<"A:Vivek kumar" ;
      gotoxy(47,11);
      cout<<"MBBS/MS" ;
      gotoxy(67,11);
      cout<<"7 Years";
      gotoxy(85,11);
      cout<<"500" ;
      gotoxy(25,14);
      cout<<"B:Rajesh kumar" ;
      gotoxy(47,14);
      cout<<"MBBS/MS" ;
      gotoxy(67,14);
      cout<<"15 Years" ;
      gotoxy(85,14);
      cout<<"1000"<<endl;
      gotoxy(25,17);
      cout<<"C:Shivani Gupta" ;
      gotoxy(47,17);
      cout<<"MBBS/MS" ;
      gotoxy(67,17);
      cout<<"10 Years" ;
      gotoxy(85,17);
      cout<<" 500" ;
      gotoxy(25,20);
      cout<<"ENTER A,B,C from which doctor you want to consult " ;
      cin>>t;
      if (t == 'a')
    {
      temp->doctorname=" Vivek kumar";
      gotoxy(25,23);
      cout<<"Your appointment is fixed with Dr Vivek"<<endl;
       gotoxy(25,26);
      break;
    }
      elseif (t == 'b')
    {
      temp->doctorname=" Dr Rajesh kumar";
      gotoxy(25,23);
      cout<<"Your appointment is fixed with Dr Rajesh"<<endl;
      gotoxy(25,26);
      break;
    }
      elseif (t == 'c')
    {
      temp->doctorname="Shivani Gupta ";
      gotoxy(25,23);
      cout<<"Your appointment is fixed with Dr Shivani Gupta "<<endl;
       gotoxy(22,26);
      break;
    }
      else
    {
        gotoxy(25,23);
      cout<<"you have selected wrong option"<<endl;
       gotoxy(25,26);
      break;
    }
      //*********************
    case'b':
     gotoxy(25,11);
      cout<<"A:Vivek kumar" ;
      gotoxy(47,11);
      cout<<"MBBS/MS" ;
      gotoxy(67,11);
      cout<<"7 Years";
      gotoxy(85,11);
      cout<<"500" ;
      gotoxy(25,14);
      cout<<"B: Suresh kumar" ;
      gotoxy(47,14);
      cout<<"MBBS/MS" ;
      gotoxy(67,14);
      cout<<"15 Years" ;
      gotoxy(85,14);
      cout<<"1000"<<endl;
      gotoxy(25,17);
      cout<<"C:Shivani Gupta" ;
      gotoxy(47,17);
      cout<<"MBBS/MS" ;
      gotoxy(67,17);
      cout<<"10 Years" ;
      gotoxy(85,17);
      cout<<" 500" ;
      gotoxy(25,20);
      cout<<"ENTER A,B,C from which doctor you want to consult " ;
      cin>>t;
      if (t == 'a')
    {
      temp->doctorname=" Vivek kumar";
      gotoxy(25,23);
      cout<<"Your appointment is fixed with Dr Vivek "<<endl;
       gotoxy(25,26);

    }
      elseif (t == 'b')
    {
      temp->doctorname=" Dr Suresh kumar";
      gotoxy(25,23);
      cout<<"Your appointment is fixed with Dr Suresh "<<endl;
      break;
      gotoxy(25,26);

    }
      elseif (t == 'c')
    {
      temp->doctorname="Shivani Gupta ";
      gotoxy(25,23);
      cout<<"Your appointment is fixed with Dr Shivani Gupta "<<endl;
      break;

    }
      else
    {
        gotoxy(25,23);
      cout<<"you have selected wrong option"<<endl;
      break;

    }
      //**********************
    case'c':
     gotoxy(25,11);
      cout<<"A:Rohan kumar" ;
      gotoxy(47,11);
      cout<<"MBBS/MS" ;
      gotoxy(67,11);
      cout<<"7 Years";
      gotoxy(85,11);
      cout<<"500" ;
      gotoxy(25,14);
      cout<<"B:Anil Verma" ;
      gotoxy(47,14);
      cout<<"MBBS/MS" ;
      gotoxy(67,14);
      cout<<"15 Years" ;
      gotoxy(85,14);
      cout<<"1000"<<endl;
      gotoxy(25,17);
      cout<<"C:Anjali Gupta" ;
      gotoxy(47,17);
      cout<<"MBBS/MS" ;
      gotoxy(67,17);
      cout<<"10 Years" ;
      gotoxy(85,17);
      cout<<" 500" ;
      gotoxy(25,20);
      cout<<"ENTER A,B,C from which doctor you want to consult " ;
      cin>>t;
      if (t == 'a')
    {
      temp->doctorname=" Rohan kumar";
      gotoxy(25,23);
      cout<<"Your appointment is fixed with Dr Rohan"<<endl;
       gotoxy(25,26);

    }
      elseif (t == 'b')
    {
      temp->doctorname="Dr Anil Verma";
      gotoxy(25,23);
      cout<<"Your appointment is fixed with Dr Anil"<<endl;
      gotoxy(25,26);

    }
      elseif (t == 'c')
    {
      temp->doctorname="Anjali Gupta ";
      gotoxy(25,23);
      cout<<"Your appointment is fixed with Dr Anjali Gupta "<<endl;
       gotoxy(22,26);

    }
      else
    {
        gotoxy(25,23);
      cout<<"you have selected wrong option"<<endl;
       gotoxy(25,26);

    }

}
}
******************************************************************************************
******************************************************************************************
voidhospital ::gotoxy (intx, inty)
{
  COORDcoord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition (GetStdHandle (STD_OUTPUT_HANDLE), coord);
}
voidhospital::Above_horizontal ()
  {
    charprev = ' ';
    prev = cout.fill ((char) 205);
    cout<< (char) 201<<setw (74) <<""<< (char) 187<<endl;
    cout.fill (prev);
  }
   voidhospital::Line ()
  {
    cout<< (char) 186<<endl;
  }
   voidhospital ::below_Horizontal ()
  {
    charprev = ' ';
    prev = cout.fill ((char) 205);
    cout<< (char) 200<<setw (74) <<""<< (char) 188<<endl;
    cout.fill (prev);
  }
******************************************************************************************
******************************************************************************************
voidhospital::menu()
  {

      l:

          system("cls");

//***************************
gotoxy(22,2);
Above_horizontal();
gotoxy(22,4);
below_Horizontal();
gotoxy(22,3);
Line();
gotoxy(97,3);
Line();
//************************
 gotoxy(31,3);
          cout<<"*************** WELCOME TO CITY HOSPITAL ******************";
//***************************
gotoxy(22,7);
Above_horizontal();
gotoxy(22,9);
below_Horizontal();
gotoxy(22,8);
Line();
gotoxy(97,8);
Line();
//************************
//***************************
gotoxy(22,10);
Above_horizontal();
gotoxy(22,12);
below_Horizontal();
gotoxy(22,11);
Line();
gotoxy(97,11);
Line();
//************************
//***************************
gotoxy(22,13);
Above_horizontal();
gotoxy(22,15);
below_Horizontal();
gotoxy(22,14);
Line();
gotoxy(97,14);
Line();
//************************
//***************************
gotoxy(22,16);
Above_horizontal();
gotoxy(22,18);
below_Horizontal();
gotoxy(22,17);
Line();
gotoxy(97,17);
Line();
//************************
//***************************
gotoxy(22,19);
Above_horizontal();
gotoxy(22,21);
below_Horizontal();
gotoxy(22,20);
Line();
gotoxy(97,20);
Line();
//************************
//***************************
gotoxy(22,22);
Above_horizontal();
gotoxy(22,24);
below_Horizontal();
gotoxy(22,23);
Line();
gotoxy(97,23);
Line();
//************************
       gotoxy(27,8);
      cout<<"Select THE OPTION YOU WANT OT CHOOSE"<<endl;
       gotoxy(27,11);
      cout<<"1:Add Patient Details"<<endl;
       gotoxy(27,14);
      cout<<"2:Edit Record"<<endl;
      gotoxy(27,17);
      cout<<"3:Delete Record"<<endl;
      gotoxy(27,20);
      cout<<"4:Search Patients Details"<<endl;
      gotoxy(27,23);
      cout<<"5:Display Details"<<endl;
       gotoxy(27,25);
      inta;
      intc;
      cin>>a;
                if(a==1)
                {

                system("cls");
                charloader=254;
gotoxy(13,3);
cout<<"Loading...Please Wait ";
gotoxy(35,3);
for(inti=0;i<50;i++)
{
    cout<<loader;
    if(i<20)
    Sleep(50);
    if(i>20)
    Sleep(20);
}
system("cls");

                 Sleep(400);
                 //***************************
gotoxy(22,2);
Above_horizontal();
gotoxy(22,4);
below_Horizontal();
gotoxy(22,3);
Line();
gotoxy(97,3);
Line();
//************************
   gotoxy(31,3);
          cout<<"*************** WELCOME TO CITY HOSPITAL ******************";
                 details();
                gotoxy(27,26);
                 cout<<"If you want to continue then press '1' otherwise '0'  ";
                 cin>>c;
                 if(c==0)
                    exit(0);
                 elsegotol;
                }
                elseif(a==2)
                {

                system("cls");
                      charloader=254;
gotoxy(13,3);
cout<<"Loading...Please Wait ";
gotoxy(35,3);
for(inti=0;i<50;i++)
{
    cout<<loader;
    if(i<20)
    Sleep(50);
    if(i>20)
    Sleep(20);
}
system("cls");
                   //***************************
gotoxy(22,2);
Above_horizontal();
gotoxy(22,4);
below_Horizontal();
gotoxy(22,3);
Line();
gotoxy(97,3);
Line();
//************************
                 gotoxy(31,3);
          cout<<"*************** WELCOME TO CITY HOSPITAL ******************";
                edit();
               gotoxy(27,26);
                 cout<<"If you want to continue then press '1' otherwise '0'  ";
                 cin>>a;
                 if(a==0)
                    exit(0);
                 elsegotol;
                }
          //case 3:
           elseif(a==3)
                {

                system("cls");
                      charloader=254;
gotoxy(13,3);
cout<<"Loading...Please Wait ";
gotoxy(35,3);
for(inti=0;i<50;i++)
{
    cout<<loader;
    if(i<20)
    Sleep(50);
    if(i>20)
    Sleep(20);
}
system("cls");
                   //***************************
gotoxy(22,2);
Above_horizontal();
gotoxy(22,4);
below_Horizontal();
gotoxy(22,3);
Line();
gotoxy(97,3);
Line();
//************************
gotoxy(31,3);
          cout<<"*************** WELCOME TO CITY HOSPITAL ******************";
                delet();
               gotoxy(27,26);
                 cout<<"If you want to continue then press '1' otherwise '0'  ";
                 cin>>a;
                 if(a==0)
                    exit(0);
                 elsegotol;
                }
          elseif(a==4)
          {
              system("cls");
      charloader=254;
gotoxy(13,3);
cout<<"Loading...Please Wait ";
gotoxy(35,3);
for(inti=0;i<50;i++)
{
    cout<<loader;
    if(i<20)
    Sleep(50);
    if(i>20)
    Sleep(20);
}
system("cls");
              node *p=searc();

                 gotoxy(27,26);
                 cout<<"If you want to continue then press '1' otherwise '0'  ";
                 cin>>a;
                 if(a==0)
                    exit(0);
                 elsegotol;
          }

         elseif(a==5)
         {
             system("cls");
                   charloader=254;
gotoxy(13,3);
cout<<"Loading...Please Wait ";
gotoxy(35,3);
for(inti=0;i<50;i++)
{
    cout<<loader;
    if(i<20)
    Sleep(50);
    if(i>20)
    Sleep(20);
}
system("cls");
                  //***************************
gotoxy(22,2);
Above_horizontal();
gotoxy(22,4);
below_Horizontal();
gotoxy(22,3);
Line();
gotoxy(97,3);
Line();
//************************
                 gotoxy(31,3);
          cout<<"*************** WELCOME TO CITY HOSPITAL ******************";
              display();

                  gotoxy(27,26);
                 cout<<"If you want to continue then press '1' otherwise '0'  ";
                 cin>>a;
                 if(a==0)
                    exit(0);
                 elsegotol;
         }



  }
******************************************************************************************
******************************************************************************************
  voidhospital ::edit()
  {
      node *r=searc();
      if(r==NULL)
      {
          return;
      }
      gotoxy(22,13);
Above_horizontal();
gotoxy(22,15);
below_Horizontal();
gotoxy(22,14);
Line();
gotoxy(97,14);
Line();
gotoxy(25,14);
      cout<<"Enter A,B,c,D which field you want to edit";
     gotoxy(22,16);
Above_horizontal();
gotoxy(22,18);
below_Horizontal();
gotoxy(22,17);
Line();
gotoxy(97,17);
Line();
gotoxy(23,17);
cout<<"A: Name";
gotoxy(42,17);
cout<<" B: ID";
gotoxy(57,17);
cout<<" C: Phone NO";
gotoxy(73,17);
cout<<"D: Doctor";
gotoxy(86,17);
cout<<"E: AGE  ";
chart;
cin>>t;
stringc;
inta;
system("cls");
  gotoxy(22,7);
Above_horizontal();
gotoxy(22,9);
below_Horizontal();
gotoxy(22,8);
Line();
gotoxy(97,8);
Line();
switch(t)
{
    //****************************************************************
case'a':
    gotoxy(25,8);
cout<<"Enter the new name : ";
 cin>>c;
 r->name=c;
   gotoxy(22,10);
Above_horizontal();
gotoxy(22,12);
below_Horizontal();
gotoxy(22,11);
Line();
gotoxy(97,11);
Line();
gotoxy(25,11);
 cout<<"Your name has been edited succesfully";
 break;
// 2 *************************************************************
 case'b':
    gotoxy(25,8);
cout<<"Enter the new id : ";
 cin>>a;
 r->id=a;
   gotoxy(22,10);
Above_horizontal();
gotoxy(22,12);
below_Horizontal();
gotoxy(22,11);
Line();
gotoxy(97,11);
Line();
gotoxy(25,11);
 cout<<"Your Id has been edited succesfully";
 break;
    // 3 ****************************************************************
case'c':
    gotoxy(25,8);
cout<<"Enter the Phone no : ";
 cin>>c;
 r->no=c;
   gotoxy(22,10);
Above_horizontal();
gotoxy(22,12);
below_Horizontal();
gotoxy(22,11);
Line();
gotoxy(97,11);
Line();
gotoxy(25,11);
 cout<<"Your Phone no has been edited succesfully";
 break;
//*************************************************************
    // 4 **************************************************************
case'd':
    gotoxy(25,8);
cout<<"Enter the doctor which you want to consult : ";
 cin>>c;
 r->doctorname=c;
   gotoxy(22,10);
Above_horizontal();
gotoxy(22,12);
below_Horizontal();
gotoxy(22,11);
Line();
gotoxy(97,11);
Line();
gotoxy(25,11);
 cout<<"Your record has been edit ";
 break;
//*************************************************************
    //****************************************************************
case'e':
    gotoxy(25,8);
cout<<"Enter the correct age : ";
 cin>>a;
 r->age=a;
   gotoxy(22,10);
Above_horizontal();
gotoxy(22,12);
below_Horizontal();
gotoxy(22,11);
Line();
gotoxy(97,11);
Line();
gotoxy(25,11);
 cout<<"Your name has been edited succesfully";
 break;
//*************************************************************
}
  }
******************************************************************************************
*****************************************************************************************
voidhospital::delet()
  {
      node *r=head;
      node *temp;
       gotoxy(22,7);
Above_horizontal();
gotoxy(22,9);
below_Horizontal();
gotoxy(22,8);
Line();
gotoxy(97,8);
Line();

      if(head==NULL)
      {
          gotoxy(32,8);
          cout<<"!!!!!!!!!!!There is no record of any patient!!!!!!!!!!!!!";
          return;
      }
      else{
     intn;
     gotoxy(25,8);
     cout<<"Enter the patient id you want to delete  ";
     cin>>n;
     if(r->id==n)
     {
         if(r->next==NULL)
         {
             head=NULL;
             delete(r);
         }
         else{

         r->next->prev=NULL;
         head=r->next;
         delete(r);
         }
     }
elseif(tail->id==n)
{
    temp=tail;
    temp->prev->next=NULL;
    tail=temp->prev;
    delete(temp);
}
else
{
    for(r;r!=NULL;r=r->next)
    {
        if(r->id==n)
        {
            r->prev->next=r->next;
            r->next->prev=r->prev;
            delete(r);
        }
    }
}
gotoxy(22,10);
Above_horizontal();
gotoxy(22,12);
below_Horizontal();
gotoxy(22,11);
Line();
gotoxy(97,11);
Line();
gotoxy(25,11);
 cout<<"The Record is successfully Deleted";
      }

  }
