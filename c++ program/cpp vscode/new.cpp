#include<iostream>
using namespace std;

int area(int a,int b){
    return a*b;

}
double area(double p, double q){
    return 0.5*p*q;
}
float area(float r){
    return 3.141*r*r;
}
int main( ){
        cout<<"area of retangle is "<<area(23,45)<<endl;
        cout<<"area of triangle is "<<area(67.634,45.234)<<endl;
        cout<<"area of circle  is "<<area(23.45f)<<endl;

return 0;
} 