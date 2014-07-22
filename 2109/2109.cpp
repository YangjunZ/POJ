#include<iostream>
#include<String>
#include<cmath>
#include<cstdlib>


using namespace std;

double sqrtn(double n, double p){
	double res = p;
	cout << n << ','<<p<<endl;
	while(n > 1){
		res = sqrt(res);
		n = n/2;
	}
	return res;
}

void systemPause(void){
	cin.sync();
    cout << "Please press any key to continue.... ";
    cin.get();
}

int main2()
{
	long long n,p;
	cin >> n >> p;
	cout << n << '#'<<p<<endl;
	if(n % 2 == 0)
		cout << sqrtn(n,p)<<endl;
	else
		cout <<sqrtn(n+1,p)<<','<<sqrtn(n-1,p)<<endl;

	// systemPause();
	system("PAUSE");
}


int main()
{
	

	double n,p;
	cin >> n >> p;
	cout << n << '#'<<p<<endl;
	system("PAUSE");
}
