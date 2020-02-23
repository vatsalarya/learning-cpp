#include <bits/c++config.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* To print reverse*/   
    size_t array_size{},i{};
    cin>>array_size;
    // THIS METHOD OF WHILE LOOP TAKES INPUT UNTIL THE >> IS GETTING CORRECT INPUT (IN THIS CASE INTEGER  )
    int *A = new int[array_size];
    while(std::cin>>A[i++]);
    while(std::cout<<A[--array_size]<<' ' && array_size);
    delete[] A;
    //my method
    // size_t *ptr=new size_t[array_size];
    // for(size_t i=0;i<array_size;++i)
    //     cin>>ptr[i];
    
    // for(size_t i=0;i<array_size;++i)
    //     cout<<ptr[array_size-i]<<" ";
    // delete [] ptr;
    
    return 0;
}
