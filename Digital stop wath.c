#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
 textbackground(BLUE);
 clrscr();
 int HH=0,MM=0,SS=0;
 cout<<"\n\n\\t\t stopwatch";
 cout<<"\n\t\t HH : MM : SS";
 cout<<"\n\t\t"<<HH<<"\t"<<MM<<"\t"<<SS;
 cout<<"\n\t\t press any key to start";
 getch();
 while(!kbhit())
 {
  SS++;
  delay(1000);
  if(SS>59)
  {
   MM++;
   SS=0;
  }
  if(MM>59)
  {
    HH++;
    MM=0;
  }
  clrscr();
  cout<<"\n\t\t stopwatch";
  cout<<"\n\t\t HH : MM : SS";
  cout<<"\n\t\t"<<HH<<" : "<<MM<<" : "<<SS;
  cout<<"\n\t\t press any key to stop";
 }
 getch();
 cout<<"\n\t\t the time after pausing is":
 cout<<"\n\t\t"<<HH<<" : "<<MM<<" : "<<SS;
 getch();
}
