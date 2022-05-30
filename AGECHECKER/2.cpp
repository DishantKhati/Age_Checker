#include<iostream>
#include<string.h>
using namespace std;
class employ
{int a;
 string n,co;
 public:
 employ(string n,int a,string co)
 {this->n=n;
  this->co=co;
  this->a=a;
 }
void display()
{cout<<"\nNAME: "<<n<<"\nAGE: "<<a<<"\nCODE: "<<co<<endl;
}
/*int operator -(employ e)
{return (a)-(e.a);
}*/
friend int operator -(employ e,employ u);
};
int operator -(employ e,employ u)
{return (e.a)-(u.a);
}
main()
{employ e1("Nitin",30,"E001");
 employ e2("Amit",25,"E002");
 int diff=e1-e2;
 e1.display();
 e2.display();
 cout<<"\n\nAGE DIFFERENCE: "<<diff<<endl;
}
