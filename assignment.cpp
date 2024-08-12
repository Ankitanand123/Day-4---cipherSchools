// title author year 
#include <iostream>
using namespace std;

class Book {
    public:
    string title;
    string author;
    int year;
    
    Book(string tit,string aut,int yr){
        title=tit;
        author=aut;
        year = yr;
        
    }
    void displayInfo(){
        cout<<"The title of the book is: "<<title<<endl;
        cout<<"The author of the book is: "<<author<<endl;
        cout<<"The year of the book production is: "<<year<<endl;
        
    }
    
};

int main(){
    Book book1("A nightangle","Ankit Anand",2005);
    book1.displayInfo();
    
    
    
    
}
