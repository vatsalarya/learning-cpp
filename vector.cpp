#include <iostream>
#include<vector>
using namespace std;

int main(){
   cout<<"Please select one of the following options : \n"
       <<"P - Print numbers\n" 
       <<"A - Add a number\n"
       <<"M - Display mean of the numbers\n"
       <<"S - Display teh smallest number\n"
       <<"L - Display the largest number\n"
       <<"Q - Quit\n";
   vector <int> numbers;
   int choice{};
   int array_size(){
      return numbers.size();
   }
   cin>>choice;
   bool complete{false};
   while((complete)=false){
     if((choice=='p')||(choice=='P')){
        if(array_size()==0)
            cout<<"[] - the list is empty.\n";           
        else{
            cout<<"[ ";
            for(int i=0;i<array_size();i++){
                cout<<numbers.at(i)<<" ";
            }
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
        if(array_size()==0)
            cout<<"Unable to calculate mean - no data.";
        else{
         int sum{};
         for(int i=0;i<array_size();i++)
            sum+=numbers.at(i);
        cout<<"\nThe average of the numbers in the list is : "<<sum/array_size();
        }
     }
     else if((choice=='s')||(choice=='S')){
        if(array_size()==0)
            cout<<"Unable to calculate smallest - no data.";
        else{
            int smallest{};
            for(int i=0;i<array_size();i++){
                smallest=numbers.at(0);
            if(smallest>numbers.at(i))
                smallest=numbers.at(i); 
            }
        cout<<"The smallest number in the list is : "<<smallest;
        }
     }

     else if((choice=='l')||(choice=='L')){
          if(array_size()==0)
            cout<<"Unable to calculate largest - no data.";
        else{
            int largest{};
            for(int i=0;i<array_size();i++){
                largest=numbers.at(0);
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
