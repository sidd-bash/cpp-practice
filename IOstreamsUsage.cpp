#include <iostream>// for basic input output
#include <iomanip>// for manipulating streams
#include <fstream>// for handling I/O to file

//cin
//cout - standard output stream
//cerr - unbuffered standard error stream (error not stored)
//clog - buffered standard error stream




void usageOfCerr()
{
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

class Date{
    int mm,dd,yy;
    public:
    Date(int m,int d,int y){
        mm=m;
        dd=d;
        yy=y;
    }
    friend std::ostream& operator<<(std::ostream& os, const Date& dt);
};
void overloadingInsertionOperator(){
    Date dt(5,5,12);
    std::cout<<dt;
    
}
int main(){
    usageOfCerr();
    overloadingInsertionOperator();
    return 0;
}