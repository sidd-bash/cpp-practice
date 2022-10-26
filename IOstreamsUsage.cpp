#include <iostream>// for basic input output
#include <iomanip>// for manipulating streams
#include <fstream>// for handling I/O to file
#include <sstream>// for parsing input
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
//operator functions
class Date{
    public:
    int mm,dd,yy;
    
    Date(int m,int d,int y){
        mm=m;
        dd=d;
        yy=y;
    }
    
};
std::ostream& operator << (std::ostream& out, const Date& dt){
    out << dt.mm << '/' << dt.dd << '/' << dt.yy;
    return out;
}
void overloadingInsertionOperator(){
    Date dt(5,5,12);
    std::cout<<dt;
    
}

void stringstreamUsage(){
    std::stringstream str("            something");// associates string with a stream object
    std::string line;
    getline(str>>std::ws,line); //to remove whitespaces
    std::cout<<line<<std::endl;
}
int countWords(std::string s){
    std::stringstream str(s);
    std::string word;
    int count = 0;
    while(str>>word){
        count++;
    }
    return count;
}
int main(){
    usageOfCerr();
    overloadingInsertionOperator();
    stringstreamUsage();
    std::cout<<countWords("one two three four five six seven eight");

    return 0;
}