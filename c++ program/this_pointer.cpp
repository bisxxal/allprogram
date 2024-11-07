#include <iostream>  
using namespace std;  
class Employee {  
   public:  
       int id; 
       string name; 
       float salary;  
       Employee(int id, string name, float salary)    
        {    
             this->id = id;    // if same parameter is ther then this pointer will be assign
            this->name = name;    
            this->salary = salary;   
        }    
       void display()    
        {    
            cout<<id<<"  "<<name<<"  "<<salary<<endl;    
        }    
};  
int main(void) {  
    Employee e1 =Employee(101, "Sonoo", 890000); 
    Employee e2=Employee(102, "Nakul", 59000); 
    e1.display();    
    e2.display();    
    return 0;  
}  