
//PROJECT ON TOUR BOOKING
//BY PRABHASH SINGH & MOHIT PANDEY

#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>

//CLASS [PASSENGER] DEFINITIION

class passenger
{
cha rch[50],na[20],abc[20],gen[50],rt[13],destination[30],from[30],check[20],air[50],terminal[50],
air1[50],terminal1[150] ;
int ye,me,red,rd,age,d,m,y,q,ticket;long point,price,price1,dis,price2;

public:

void in(char dd[])
{
strcpy(destination,dd);
if(strcmpi(dd,"canada")==0)
 {price=89000;price1=89000;
 strcpy(air,"AIR CANADA AC-206");
  strcpy(terminal,"Indira Gandhi International T3,NEW DELHI");
  strcpy(air1,"AIR INDIA AI-212");
  strcpy(terminal1,"PEARSON INT'L T1A,TORONTO"); }

if(strcmpi(dd,"europe")==0)
 {price=100000;price1=100000;
 strcpy(air,"AIR FRANCE AF-151");
 strcpy(terminal,"Indira Gandhi International T3,NEW DELHI");
 strcpy(air1,"EMIRATES EM-098");
 strcpy(terminal1,"PARIS INT'L AIRPORT T8H,PARIS"); }

if(strcmpi(dd,"thailand")==0)
 {price=35000;price1=35000;
  strcpy(air,"SINGAPORE AIRLINES SI-125");
  strcpy(terminal,"Indira Gandhi International T3,NEW DELHI");
  strcpy(air1,"AIR INDIA AI-89");
  strcpy(terminal1,"SINGAPORE MATEN INT'L T3R,SINGAPORE");}

if(strcmpi(dd,"usa")==0)
 {price=100000;price1=100000;
  strcpy(air,"British Airways");
  strcpy(terminal,"Indira Gandhi International T3,NEW DELHI");
  strcpy(air1,"KINGFISHER KG-890");
  strcpy(terminal1,"LAS VEGAS INT'L T6P,LAS VEGAS"); }

if(strcmpi(dd,"northern india")==0)
 {price=20000;price1=20000;
   strcpy(air,"AIR INDIA AI-251");
   strcpy(terminal,"Indira Gandhi International T3,NEW DELHI");
   strcpy(air1,"GO AIR G8-882");
   strcpy(terminal1,"SRINAGAR DOMESTIC AIRPORT T2C,SRINAGAR(J&K)");}
if(strcmpi(dd,"eastern india")==0)
 {price=19000;price1=19000;
  strcpy(air,"Jet Airways JK-521");
  strcpy(terminal,"DOMESTIC AIRPORT 1D,NEW DELHI");
  strcpy(air1,"JET AIRWAYS JK-890");
  strcpy(terminal1,"1XG DOMESTIC AIRPORT T3A,GANGTOK(SIKKIM)");
  }

if(strcmpi(dd,"western india")==0)
 {price=19000;price1=19000;
 strcpy(air,"GO AIR G8-889");
 strcpy(terminal,"DOMESTIC AIRPORT 1D,NEW DELHI");
 strcpy(air1,"INDIGO IG-89");
 strcpy(terminal1,"SWAIMAN SINGH AIRPORT T1J, UDAIPUR(RAJ.)");}

if(strcmpi(dd,"southern india")==0)
 {price=15000;price1=15000;
 strcpy(air,"SPICEJET SJ-281");
 strcpy(terminal,"DOMESTIC AIRPORT 1D,NEW DELHI");
 strcpy(air1,"JET LITE JL-89");
 strcpy(terminal1,"TIRUPALI AIRPORT T7Y, BENGALURU");}
 setcolor(3);
 settextstyle(6,0,5);
 outtextxy(200,9,"TICKET FORM");
gotoxy(25,7);
cout<<"Name    ";
gotoxy(25,8);
cout<<"Gender  ";
gotoxy(25,9);
cout<<"Age ";
gotoxy(25,10);
cout<<"From ";
gotoxy(25,11);
cout<<"Destination   ";
gotoxy(25,12);
cout<<"Date ";
gotoxy(45,12);
cout<<"Month   ";
gotoxy(65,12);
cout<<"Year ";
gotoxy(45,7);
gets(na);
gotoxy(45,8);
cin>>gen;
gotoxy(45,9);
cin>>age;
gotoxy(5,14);
cout<<"\t\tFLIGHTS AVAILABLE FROM NEW DELHI ONLY ";
gotoxy(45,10);
gets(from);

if((strcmpi(from,"New Delhi"))||(strcmpi(from,"Mumbai"))||(strcmpi(from,"Kolkata"))||(strcmpi(from,"Chennai"))==0);
gotoxy(45,11);
cout<<dd;
gotoxy(42,12);
cin>>d;
gotoxy(56,12);
cin>>m;
gotoxy(72,12);
cin>>y;
rd=d+8;me=m;ye=y;
if((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10))

{if(rd>30)
   { rd=rd-290; me=m+1;ye=y;
   }
 }
if((m==4)||(m==6)||(m==9)||(m==11))
{if(rd>31)
 { rd=rd-30;me=m+1;ye=y;} }
if(m==2)
  {if(rd>28)
   {rd=rd-27;me=m+1;ye=y;}}
if(m==12)
  {if(rd>31)
   { rd=rd-30;me=1;ye=y+1;}}
cout<<"\n\n\n\n\t\t\ Enter The Card Number Starting With 2/4/9 Only ";
cin>>rt;
cout<<"\n\n\n\t\tEnter CARDHOLDERS Name";
cin>>ch;
  if(rt[0]=='2')
  {cout<<"\n\n\t\t~~!!OFFERS FOR YOU!!~~"<<"\n\t\t!!DISCOUNT OF RS.500 USE CODE MMT500!!";}
  if(rt[0]=='4')
  {cout<<"\n\n\t\t~~!!OFFERS FOR YOU!!~~"<<"\n\t\t!!DISCOUNT OF RS.700 USE CODE MMT700!!";}
  if(rt[0]=='9')
  {cout<<"\n\n\t\t~~!!OFFERS FOR YOU!!~~"<<"\n\t\t!!DISCOUNT OF RS.1000 USE CODE MMT1000!!";}





{  cout<<"\n\n\n\n\t\tEnter The Code Number";
cin>>abc;
if(strcmp(abc,"MMT500")==0)
{dis=500;     price2=price-500;}
if(strcmp(abc,"MMT700")==0)
{dis=700;     price2=price-700;}
if(strcmp(abc,"MMT1000")==0)
{dis=1000;    price2=price-1000;}
cout<<"\n\n\t\tAn amount of Rs. "<<price2<<" will Be Deducted from your account";
cout<<"\n\n\t\tEnter 1 To confirm payment";
cin>>q;}
cout<<"\n\n\tCONFIRMING YOUR BOOKING";




 clrscr();



textattr(CYAN+BLINK);

textcolor(CYAN + BLINK);
outtextxy(150,5,"BOOKING CONFIRMED");
settextstyle(2,0,3);

    randomize(); ticket=random(150);
		  point=random(1000);
    settextstyle(4,0,2);
    cout<<"\n\n\n\tYour Ticket Number Is"<<ticket;

    cout<<"\t\t\tYour Ticket Detail";
    cout<<"\n\n\n\tName"<<"\t\t\t"       <<na;delay(50);
    cout<<"\n\tGender"<<"\t\t\t"         <<gen;delay(50);
    cout<<"\n\tAge"   <<"\t\t\t"         <<age;delay(50);
    cout<<"\n\tFrom"  <<"\t\t\t"         <<from;delay(50);
    cout<<"\n\tTo"    <<"\t\t\t"         <<destination; delay(50);
    cout<<"\n\tSTART  Date-Month-Year"<<"\t"<<d<<"-"<<m<<"-"<<y;delay(50);
  
  cout<<"\n\tRETURN Date-Month-Year"<<"\t"<<rd<<"-"<<m<<"-"<<y;delay(50);
    cout<<"\n\tTicket Amount"   <<"\t\t"<<price1;delay(50);
    cout<<"\n\tDiscount Offered"<<"\t"<<dis;  delay(50);
    cout<<"\n\tFinal Amount"    <<"\t\t"<<price2;delay(50);
    cout<<"\n\tAmount Received From"<<"\t"<<ch; delay(50);
    cout<<"\n\tCard Used"           <<"\t\t"<<rt;delay(50);
    cout<<"\n\tSTART Airline"   <<"\t\t"<<air<<"\tON\t"<<d<<"-"<<m<<"-"<<y; delay(50);
    cout<<"\n\tTerminal"            <<"\t\t"<<terminal;        delay(50);
    cout<<"\n\tRETURN Airline"  <<"\t\t"<<air1<<"\tON\t"<<rd<<"-"<<me<<"-"<<ye; delay(50);
    cout<<"\n\tTerminal"            <<"\t\t"<<terminal1;                          delay(50);
    cout<<"\n\n\t\tCongratulations!!!!You Have Earned "<<point<<" Points\n\t\tFor Booking Ticket With Us";
    getch();}

int retticket()
    {return ticket;}


void out()
{
  cout<<"\n\n\tPROCESSING YOUR TICKET";
  cout<<"\n\n\n\tYour Ticket Number Is"<<ticket;
  cout<<"\t\t\tYour Ticket Detail";
  cout<<"\n\n\n\tName"<<"\t\t\t"       <<na;delay(50);
  cout<<"\n\tGender"<<"\t\t\t"         <<gen;delay(50);
  cout<<"\n\tAge"   <<"\t\t\t"         <<age;delay(50);
  cout<<"\n\tFrom"  <<"\t\t\t"         <<from;delay(50);
  cout<<"\n\tTo"    <<"\t\t\t"         <<destination; delay(50);
  cout<<"\n\tSTART  Date-Month-Year"<<"\t"<<d<<"-"<<m<<"-"<<y;delay(50);
    cout<<"\n\tRETURN Date-Month-Year"<<"\t"<<rd<<"-"<<m<<"-"<<y;delay(50);
  
  cout<<"\n\tTicket Amount"   <<"\t\t"<<price1;delay(50);
    cout<<"\n\tDiscount Offered"<<"\t"<<dis;  delay(50);
    cout<<"\n\tFinal Amount"    <<"\t\t"<<price2;delay(50);
    cout<<"\n\tAmount Received From"<<"\t"<<ch; delay(50);
    cout<<"\n\tCard Used"           <<"\t\t"<<rt;delay(50);
    cout<<"\n\tSTART Airline"   <<"\t\t"<<air<<"\tON\t"<<d<<"-"<<m<<"-"<<y; delay(50);
    cout<<"\n\tTerminal"            <<"\t\t"<<terminal;        delay(50);
    cout<<"\n\tRETURN Airline"  <<"\t\t"<<air1<<"\tON\t"<<rd<<"-"<<me<<"-"<<ye; delay(50);
    cout<<"\n\tTerminal"            <<"\t\t"<<terminal1;

}
};

//CLASS FEEDBACK TO GIVE REMARKS

class feedback
{ char feed[90];int f1;
public:
void in()
{ cout<<"\n\n\t\tPLEASE RECORD YOUR FEEDBACK";
  cin>>feed;
   randomize();
   f1=random(150);
	clrscr();
	cout<<"\n\n\n\n\t\t Thanks For Giving Your Feedback";
	cout<<"\n\n\t\t Your Feedback Record No. is "<<f1; }
void out()
{ clrscr();cout<<feed;}
int retfeed()
{return f1;}};


//FUNCTION TO RETURN DOMESTIC PACKAGE

char *package1()
{int g,n,e;

 char dom[50][50]={"NORTHERN INDIA",
		    "WESTERN INDIA ",
		    "EASTERN INDIA" ,
		    "SOUTHERN INDIA",};
   for(int j=0;j<4;j++)
   cout<<"\n\t"<<j+1<<". "<<dom[j];
   cout<<"\n\t\t Enter Your Choice";cin>>n;
   if(n==1)
   {
  cout<<"\n\n\t\tSHIMLA-MANALI-KASHMIR-DALHOUSIE";
  cout<<"\n\n\n\n\t\t8N-9D Package,Breakfast-Lunch-Dinner,Accomodation,Sight Seeing";
  cout<<"\n\n\n\n\tPRICE PER/PERSON --  RS.20000";
  cout<<"\n\n\n\tPRESS 1 TO BOOK TICKET";
  cin>>g;
  return "NORTHERN INDIA";
  }
  if(n==2)
   {

  cout<<"\n\n\t\t AHMEDABAD-JAIPUR-UDAIPUR-MOUNT ABU";
  cout<<"\n\n\n\n\t\t8N-9D Package,Breakfast-Lunch-Dinner,Accomodation,Sight Seeing";
  cout<<"\n\n\n\n\n\tPRICE PER/PERSON --  RS.19000";
  cout<<"\n\n\n\tPRESS 1 TO BOOK TICKET";
  cin>>g;
  return "WESTERN INDIA";
  }

 if(n==3)
   {

  cout<<"\n\n\t\t GUWHATI-KOLKATA-GANGTOK";
  cout<<"\n\n\n\n\t\t8N-9D Package,Breakfast-Lunch-Dinner,Accomodation,Sight Seeing";
  cout<<"\n\n\n\n\tPRICE PER/PERSON --  RS.19000";
  cout<<"\n\n\n\tPRESS 1 TO BOOK TICKET";
  cin>>g;
  return "EASTERN INDIA";
  }

 if(n==4)
   {
     cout<<"\n\n\t\t MYSORE-OOTY-BANGALORE";
  cout<<"\n\n\n\n\n\t\t8N-9D Package,Breakfast-Lunch-Dinner,Accomodation,Sight Seeing";
  cout<<"\n\n\n\n\tPRICE PER/PERSON --  RS.15000";
  cout<<"\n\n\n\tPRESS 1 TO BOOK TICKET";
  cin>>g;
  return "SOUTHERN INDIA";
  }}



//FUNCTION TO RETURN INTERNATIONAL PACKAGE
char *package()
{
int g,n,c,e;
cout<<"\n\n\t\t!!Available Packages!!";
  char count[10][20]={"Canada",
		      "USA ",
		      "Thailand",
		      "Europe",};

   for(int i=0;i<4;i++)
   cout<<"\n\t"<<i+1<<". "<<count[i];
   cout<<"\n\t\t Enter Your Choice";cin>>n;

   if(n==1)
   {

  cout<<"\n\n\t\tVancouver-New Foundland-Toronto";
  cout<<"\n\n\n\n\n\t\t8N-9D Package,Breakfast-Lunch-Dinner,Accomodation,Sight Seeing";
  cout<<"\n\n\n\n\n\tPRICE PER/PERSON --  RS.89000";
  cout<<"\n\n\n\tPRESS 1 TO BOOK TICKET";
  cin                                                                                                                                    >>g;


  return "Canada";
  }

  if(n==2)
   {

  cout<<"\n\n\t\t New York-Times Square-Las Vegas";
  cout<<"\n\n\n\t\t8N-9D Package,Breakfast-Lunch-Dinner,Accomodation,Sight Seeing";
  cout<<"\n\n\n\n\n\n\tPRICE PER/PERSON --  RS.100000";
  cout<<"\n\n\n\tPRESS 1 TO BOOK TICKET";
  cin>>g;
  return "USA";
  }

 if(n==3)
   {

  cout<<"\n\n\t\t The Beautiful City Bangkok";
  cout<<"\n\n\n\n\n\t\t8N-9D Package,Breakfast-Lunch-Dinner,Accomodation,Sight Seeing";
  cout<<"\n\n\n\n\n\n\tPRICE PER/PERSON --  RS.35000";
  cout<<"\n\n\n\tPRESS 1 TO BOOK TICKET";
  cin>>g;
  return "Thailand";
  }

 if(n==4)
   {
     cout<<"\n\n\t\t London-Birmingham-Paris";
  cout<<"\n\n\n\n\n\t\t8N-9D Package,Breakfast-Lunch-Dinner,Accomodation,Sight Seeing";
  cout<<"\n\n\n\n\n\tPRICE PER/PERSON --  RS.100000";
  cout<<"\n\n\n\tPRESS 1 TO BOOK TICKET";
  cin>>g;
  return "Europe";
  }}


void add(char des[])
{int ticket,we,q,y;char ch[50],tpp;
passenger p;fstream iof;
iof.open("pass.dat",ios::in|ios::app|ios::binary);
do{ clrscr();
    p.in(des);

    iof.write((char*)&p,sizeof(p));

    cout<<"Want To Enter More Then Press Y/y";
    cin>>tpp;clrscr();
    cout<<"\n\n\n\t\t\tSOME NUMBERS FOR ENQUIRY";
    cout<<"\n\n\n\t\t\t________________________";
    cout<<"\n\n\t\tAIRLINES           NUMBERS";
    cout<<"\n\n\t\tAIR INDIA        021444547";
    cout<<"\n\n\t\tAIR CANADA       024451454";
    cout<<"\n\n\t\tJET AIRWAYS      087867786";
    cout<<"\n\n\t\tGO AIRWAYS       076565345";
    cout<<"\n\n\t\tAIR FRANCE       012135426";
    cout<<"\n\n\t\tJET LITE         054545477";
    cout<<"\n\n\t\tEMIRATES         021212657";
    cout<<"\n\n\t\tINDIGO           098343469";
    cout<<"\n\n\t\tKINGFISHER       066554234";
    cout<<"\n\n\t\tBRITISH AIR      009982123";
    cout<<"\n\n\t\tSINGAPORE AIR    054545498";
    cout<<"\n\n\t\tSPICE JET        033324554";  }

    while((tpp=='y')||(tpp=='Y'));}



void add1()
{
feedback f;fstream iof;char aw;
iof.open("feed.dat",ios::in|ios::app|ios::binary);
do{ clrscr();
    f.in();

    iof.write((char*)&f,sizeof(f));cout<<"\n\n\n\n\tWant To Enter More Press Y";
    cin>>aw;}
    while(aw=='Y'); }
void search1()
{ feedback f ;fstream pof;int a;
  pof.open("feed.dat",ios::in|ios::out|ios::binary);
  pof.seekg(0);cout<<"\n\n\t\t\t\tEnter Your feedback Number\n\n";
  cin>>a;
  while(pof.read((char*)&f,sizeof(f)))
   {
   if(a==f.retfeed())
    f.out(); }}

 void search()
 {       passenger p;fstream pof;int qw;
  pof.open("pass.dat",ios::in|ios::out|ios::binary);
 
 pof.seekg(0);cout<<"\n\n\t\t\t\tEnter Your Ticket Number";
  cin>>qw;

  while(pof.read((char*)&p,sizeof(p)))
   {
   if(qw==p.retticket())
    p.out();
    }}


 void menu()
{
 clrscr();
int a,b,c,f1;

char f,feed[257];
setbkcolor(1);
textattr(1);
setcolor(1);
 rectangle(20,80,40,80);
settextstyle(8,0,6);
outtextxy(80,10,"M@ke My Tr!p");
outtextxy(150,11,"____________");
cout<<"\n\n\n\n\n\n\n\n\n\t1.Tour Packages:";
cout<<"\n\n\t2.Enquiry:";
cout<<"\n\n\t3.Offers:";
cout<<"\n\n\t4.Contact Us:";
cout<<"\n\n\t5.Feedback:";
cout<<"\n\n\n\t\tEnter Your Choice== ";
cin>>a;
clrscr();

switch(a)
{
case 1:
 cout<<"\n\n\t\t!!Available Packages!!";
 cout<<"\n\n\t1.International";
 cout<<"\n\n\t2.Domestic";
 cout<<"\n\n\t\tEnter The Region=";
 cin>>c;
 clrscr();
 switch(c)
 {   case 1:
     char desti[257];
     strcpy(desti,package());
     add(desti);
     break;
     case 2:
     char destu[257];
     strcpy(destu,package1());
     add(destu);
      }break;
  case 2:
 search();break;

 case 3:
  cout<<"\n\nDiscount Offers";
  cout<<"\n\t         OFFERS                       CODE    CARD STARTING WITH  ";
  cout<<"\n\tRs.500 off Per/Person using VISA     MMT500             2 ";
  cout<<"\n\tRs.700 off Per/Person using MASTER   MMT700             4 ";
  cout<<"\n\tRs.1000 off Per/Person using MAESTRO  MMT1000           9 ";break;
 
case 4:
  cout<<"\n\n\t     OFFICE        NUMBER             ";
   cout<<"\n\n\tINTERNATIONAL    001-25687971         ";
   cout<<"\n\n\tDOMESTIC         011-24152963         ";
   cout<<"\n\n\tCUSTOMER CARE    150015548664         ";break;
 
case 5:
 int feed;
 cout<<"\n\n\t\t1.PLEASE RECORD YOUR FEEDBACK";
 cout<<"\n\n\t\t2.VIEW FEEDBACK";
 cout<<"\n\n\n\n\t\t Enter Your Choice===>";
 cin>>feed;

     switch(feed)
     {case 1:
      add1();break;
      case 2:
      search1();break;}break;

 }}

void main()
{
int gdriver = DETECT, gmode;
initgraph(&gdriver, &gmode,"c:\\tc\\bgi");
menu();
 getch();
 }
