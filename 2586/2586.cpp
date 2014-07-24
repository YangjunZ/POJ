#include<iostream>

using namespace std;

void systemPause(void){
	cin.sync();
	cout << "press any key to continue..."<<endl;
	cin.get();
}

int main()
{
	cout << " hello world"<<endl;
	long long s, d;
	while(cin >>s>>d){
		if(s*10 >= d*2 ){
			cout << s*10 -d*2<<endl;
		}else{
			cout<<"Deficit"<<endl;
		}
	}
	systemPause();
	return 0;
}