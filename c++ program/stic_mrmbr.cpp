// #include<iostream>
// using namespace std;
// class myclass{
//     static int a,b;
//     public:
//     void putdata(){
//         a=12;
//         b=23;
//     }
//     void getdata(){
//         cout<<"value is"<<a+b<<endl;
//     }

// };
// int myclass::a=0;
// int myclass::b=0;
// int main( )
// {
//     myclass obj;
//     obj.putdata();
//     obj.getdata();

//     return 0;
// }





/// static member functon
#include<iostream>
using namespace std;
class myclass{
    int x;
    static int y;
    public:
    void getdata(){
        cout<<"enter two values"<<endl;
        cin>>x>>y;
    }
    void putdata(){
        cout<<"x="<<x<<ends<<"y="<<y<<endl;

    }
    static void  display(){
            cout<<"static y ="<<++y;
    }
   
};
 int myclass::y=0;

int main(){
myclass obj ;
obj.getdata();
obj.putdata();

//calling static function
myclass::display();

return 0;
}