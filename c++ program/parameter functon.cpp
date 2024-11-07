#include<iostream>
#include<fstream>
using namespace std;

class car{
	public:
		int speed(int maxspeed);
};
int car::speed (int maxspeed){
	return maxspeed*maxspeed;
}
int main(){
	car obj;
	cout<<obj.speed(200)<<"kmps";
	return 0;
}