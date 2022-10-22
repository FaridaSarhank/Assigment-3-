#include <iostream> 
#include <vector>
#include "Linkedlist.h"
using namespace std;
 
Linkedlist link (vector <int> v)
 {
  Linkedlist l1 ;
  for(int i=0 ; i< v.size(); i++)
  {
    if (!l1.isfound(v[i]))
    {
    
    Node*n= new Node ;
n-> v= v[i] ;

      l1.addnode(n) ;
    }
  }
  return l1 ;
 }
 
void insertAfter (vector <int> &vect, int firstvalue, int secondvalue)
{
 int fv; 
 int sv; 
 int s ; 
 int x; 
 int i=0 ; 
 vector<int>::iterator it;
cout << "Enter first number" << endl;
cin >> fv; 
cout << "Enter second number" << endl;
cin >> sv; 
s = vect.size(); 
 for (it= vect.begin(); it != vect.end(); it++)
{ 
    int z = *it;
    if(z == fv)
    {
    vect.insert(vect.begin() + i + 1, sv);
    }
    i++ ;
}
}
int main()
{
    Linkedlist l1;
 int n ;  
 cout << " hello, how many numbers will you be placing"<< endl ; 
 cin >> n ; 
cout<<"Enter your numbers ";
int ui;
vector <int>x;
 
for(int i=0;i<n;i++)
{
cin>>ui;
x.push_back(ui);
}
int fv ;
int sv; 
insertAfter(x,fv,sv) ; 


for (int i=0 ; i<x.size() ; i++)
{
    if (l1.isfound(x[i])!=true)
    {
Node*n= new Node ;
n-> x= x[i] ;
l1.addnode(n) ; 
    }
   
}

cout<< l1.sum()<< endl; 
link(x).print() ; 
l1.Removenode(3); 
l1.print () ; 



return 0 ;
}