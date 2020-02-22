#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

int main(){
   
   vector <int> numbers;
   char choice{};
   do{
      cout<<"\nPlease select one of the following options : \n"
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
            cout<<"]"<<endl;;
         }
      }else if((choice=='a')||(choice=='A')){
         cout<<"\nEnter a number to add to the list : ";
         int add_num{};
         cin>>add_num;
         numbers.push_back(add_num);
         cout<<add_num<<" added!\n";
      }else if((choice=='m')||(choice=='M')){
         if(numbers.size()==0)
            cout<<"Unable to calculate mean - no data."<<endl;
         else{
            float sum{};
            for(auto number : numbers)
               sum+=number;
         cout<<"\nThe average of the numbers in the list is : "<<sum/numbers.size()<<endl;//or  static_cast<double>(sum)/numbers.size..if sum was also declared int
         }
      }else if((choice=='s')||(choice=='S')){
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
     }else if((choice=='l')||(choice=='L')){
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
     }else if((choice=='q')||(choice=='Q')){
        cout<<"Goodbye"<<endl;
     }else{
         cout<<"Unknown selection, please try again";
     }
   }
   while((choice!='q')&&(choice!='Q'));
}
