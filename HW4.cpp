#include<iostream>
using namespace std;


int getTotal(int*sales){
  
   int total=0;
   for(int i=0;i<5;i++){
   total += sales[i];  
   }
      return total;
}
int posOfLargest(int *sales){
  
   int pos = 0;
  
   int max=0;
   for(int i=0;i<5;i++){
      
       if(max < sales[i]){
           max = sales[i];
           pos=i;
       }
   }
   return pos;
}
int posOfSmallest(int *sales){
   int pos = 0;
   int min = 0;
   for(int i=0;i<5;i++){
       if(min > sales[i]){
           min = sales[i];
           pos=i;
       }
   }
   return pos;
}

int main(){
   string names[5] = {"mild","medium","sweet","hot","zesty"};
   int sales[5];
    for(int i=0;i<5;i++){
       cout<<"Jars sold last month of "<<names[i]<<" : ";
       cin>>sales[i];
       if (sales[i]<0)
       {
       cout<<"Invalid entry! \n";
       i--;
       }
   }
   cout<<"\n Salsa Sales Report";
   cout<<"\nName\t\tJars Sold";
   cout<<"\n-------------------------------------\n";
 for(int i=0;i<5;i++)
 {
   
    cout<<names[i]<<"\t\t"<<sales[i]<<endl;
   
 }
   cout<<"\nTotal Sales : "<<getTotal(sales);
   cout<<"\nHigh Seller : "<<names[posOfLargest(sales)];
   cout<<"\nLow Seller : "<<names[posOfSmallest(sales)]<<endl;
   return 0;
}