#include<iostream>
#include<string.h>
using namespace std;
class employ
{int a;
 string n,c;
 static int count;
 public:
 void emp()
 {if(count!=5){
  cout<<"Enter the Age: ";
  cin>>a;
  cin.ignore();
  cout<<"Enter the name: ";
  getline(cin,n);
  cout<<"Enter the code: ";
  getline(cin,c);
  count++;}
  else
  cout<<"\nYou Can't Create more object\n";
 }
void display()
{cout<<"\nNAME: "<<n<<"\nAGE: "<<a<<"\nCODE: "<<c<<endl;
}
};
int employ::count=0;
main()
{employ e[5];
 for(int i=0;i<6;++i)
 {e[i].emp();}
 for(int i=0;i<5;++i)
 {e[i].display();}
}
