#include<iostream>
#include<conio.h>
using namespace std;
class sun
{
    public:
      virtual void showcty()
      {
                cout<<"\n  Hien thi sun:";
      }
      void display()
      {
              cout<<"\n  Trung bay sun:" ;
      }
};
 
class kethua:public sun
{
   public:
      void display()
      {
              cout<<"\n  Trung bay sun1:";
      }
      void showcty()
      {
              cout<<"\n  Hien thi sun1:";
      }
};
 
int main()
{
   
   sun obj1;
   sun *p;
   cout<<"\n P tro toi sun:\n"  ;
 
   p=&obj1;
   p->display();
   p->showcty();
 
   cout<<"\n\n P tro toi sun1:\n";
   kethua obj2;
   p=&obj2;
   p->display();
   p->showcty();
   return 0;
}