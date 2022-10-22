#include <iostream>
using namespace std; 


struct Node 
{
    int x ; 
    Node*next=NULL ; 
    int o=1 ; 
}; 
 
class Linkedlist 
{
  Node*first ; 
 
 public: 
  Linkedlist()
  {
      first=NULL;
 
  }
 
   void addnode( Node*n)
   {
     Node*temp ; 
     temp=first ; 
 
     if (first== NULL) //check if it is an empty ll 
     {
         first=n ; 
 
     }
 
     else 
     {
         while (temp->next!=NULL)
         {
 temp = temp->next ; 
 
         }
         temp-> next=n ;
     }
   }
 
  void Removenode(int n)
  {
 Node*leading ; 
 leading=first ;
 Node*lagging ; 
  
  if(first->x==n)
  {
      first=first->next ; 
      return ; 
  }
  while (leading!=NULL)
{
 if (leading->x==n)
 {
     
     lagging->next=leading->next ;
     
     return ; 
 }
 lagging=leading ; 
 leading=leading->next ; 
 

 
 
}
 
  }
 
  void print()
  {
 Node*temp ; 
 temp=first ; 
 
     
         while (temp!=NULL)
{
 cout<< temp->x<< endl; 
 temp = temp->next ; 
 
 
}
       
     
  }
  int sum()
  {
Node*temp ; 
 temp=first ; 
 
   int count=0 ;   
         while (temp!=NULL)
{
  count= count + temp->x ; 
  temp = temp->next ; 
  
 
 
}
cout<<" This is your Sum" ; 
return count ; 
  }
 

bool isfound (int n) 
 {
Node*temp ; 
temp=first ; 
 
      
         while (temp!=NULL)
{
  if (n==temp->x) 
  {
     temp->o++; 
     return true ;
  }
  
  
  temp = temp->next ; 
  
 }
 return false ; 
 }

 
};
 