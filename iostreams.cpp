#include <iostream>// for basic input output
#include <iomanip>// for manipulating streams
#include <fstream>// for handling I/O to file

//cin
//cout - standard output stream
//cerr - unbuffered standard error stream (error not stored)
//clog - buffered standard error stream




int main(){
    int data;
    std::cin>>data;
    std::cout<<"Data: "<< data <<std::endl; //std::endl equivalent to cout<<"\n"<<flush

    //try catch with cerr

    int arr[5] {1,2,3,4,5};
    int index=6;
    int size = *(&arr + 1) - arr;
    try{
        if(index<0 || index>=size) throw("index out of range");

        else std::cout<<arr[index];
    }
    catch(const char*err){
        std::cerr<<err;
    }

}