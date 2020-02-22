#include <iostream>
using namespace std;

int *apply_all(const int *const array1,size_t size1,const int *const array2,size_t size2);
void print(const int array[],const size_t sizec);

int main(){
    int array1[]{1,2,3,4};
    int array2[]{10,20,30};
    const int array1_size{4},array2_size{3};

    cout<<"Array1 is : ";
    print(array1,array1_size);
    cout<<"Array2 is : ";
    print(array2,array2_size);

    int *result=apply_all(array1,array1_size,array2,array2_size);
    
    cout<<"Result array is : ";
    print(result,12);
    delete [] result;
}

int *apply_all(const int *const array1,size_t size1,const int *const array2,size_t size2){
    int *new_array{nullptr};
    new_array = new int[(size1*size2)];
    int position=0;
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            new_array[position]=array1[i]*array2[j];// BY ME Additional loop : for(int k=0;k<(size1*size2);k++)
            position++;                             //   *(new_array+k)=array1[i]*array2[j];               
        }     
    }
    return new_array;
}
void print(const int array[],const size_t size){
    cout<<"[ ";
    for(int i=0;i<size;++i)
        cout<<array[i]<<" ";
    cout<<"]"<<endl;
    }
