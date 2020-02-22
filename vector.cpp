#include <iostream>
#include<vector>
using namespace std;

int main(){
   
   vector <int> numbers;
   cout<<boolalpha;
   bool complete{false};
   while(complete=false){

      cout<<"Please select one of the following options : \n"
       <<"P - Print numbers\n" 
       <<"A - Add a number\n"
       <<"M - Display mean of the numbers\n"
       <<"S - Display teh smallest number\n"
       <<"L - Display the largest number\n"
       <<"Q - Quit\n\n";
       int choice{};
       cin>>choice;

     if((choice=='p')||(choice=='P')){
        if(numbers.size()==0)
            cout<<"[] - the list is empty.\n";           
        else{
            cout<<"[ ";
            for(int i=0;i<numbers.size();i++)
                cout<<numbers.at(i)<<" ";
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
         for(int i=0;i<numbers.size();i++)
            sum+=numbers.at(i);
        cout<<"\nThe average of the numbers in the list is : "<<sum/numbers.size();
        }
     }
     else if((choice=='s')||(choice=='S')){
        if(numbers.size()==0)
            cout<<"Unable to calculate smallest - no data.";
        else{
            int smallest{};
            smallest=numbers.at(0);
            for(int i=1;i<numbers.size();i++){
            if(smallest>numbers.at(i))
                smallest=numbers.at(i); 
            }
        cout<<"The smallest number in the list is : "<<smallest;
        }
     }

     else if((choice=='l')||(choice=='L')){
          if(numbers.size()==0)
            cout<<"Unable to calculate largest - no data.";
        else{
            int largest{};
            largest=numbers.at(0);
            for(int i=1;i<numbers.size();i++){
            if(largest<numbers.at(i))
                largest=numbers.at(i);
        }
        cout<<"The largest number in the list is : "<<largest;
        }
     }

     else if((choice=='q')||(choice=='Q')){
         complete = true;

     }
     else
        cout<<"Unknown selection, please try again";
   }
}
