// Runs infinitely

#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

int main(){
   
   vector <int> numbers;
   int choice{};
   do{
      cout<<"Please select one of the following options : \n"
          <<"P - Print numbers\n" 
          <<"A - Add a number\n"
          <<"M - Display mean of the numbers\n"
          <<"S - Display teh smallest number\n"
          <<"L - Display the largest number\n"
          <<"Q - Quit\n\n";
      cin>>choice;

      if((choice=='p')||(choice=='P')){
         if((numbers.size())==0)
            cout<<"[] - the list is empty.\n";           
         else{
            cout<<"[ ";
            for(auto number : numbers)
                cout<<number<<" ";
            cout<<"]";
         }
        
      }
      else if((choice=='a')||(choice=='A')){
         cout<<"\nEnter a number to add to the list : ";
         int add_num{};
         cin>>add_num;
         numbers.push_back(add_num);
         cout<<add_num<<" added!\n";
      }
      else if((choice=='m')||(choice=='M')){
         if(numbers.size()==0)
            cout<<"Unable to calculate mean - no data.";
         else{
            int sum{};
            for(auto number : numbers)
               sum+=number;
         cout<<"\nThe average of the numbers in the list is : "<<sum/numbers.size();
         }
      }
      else if((choice=='s')||(choice=='S')){
         if(numbers.size()==0)
            cout<<"Unable to calculate smallest - no data.";
         else{
            int smallest=numbers.at(0);
            for(auto number : numbers){
               if(smallest>number)
                  smallest=number; 
            }
         cout<<"The smallest number in the list is : "<<smallest;
         }
     }

     else if((choice=='l')||(choice=='L')){
          if(numbers.size()==0)
            cout<<"Unable to calculate largest - no data.";
         else{
            int largest=numbers.at(0);
            for(auto number : numbers){
            if(largest<number)
                largest=number;
            }
         cout<<"The largest number in the list is : "<<largest;
         }
     }
      else
         cout<<"Unknown selection, please try again";
   }
      while((choice!='q')||(choice!='Q'));
}
