#include<iostream>
#include<String>
#include<cmath>
#include<cstdlib>


using namespace std;

string largeNumMultiply(string a, string b){
	string product;
	product.resize(a.size() + b.size());
	for( int i=0; i<product.size(); i++){
		product[i] = '0';
	}
	for( int ai=a.size()-1; ai>=0; ai--){
		for(int bi=b.size()-1; bi>=0; bi--){
			int tmp = (a[ai]-'0' )*(b[bi]-'0');
			product[ai+bi+1] += tmp % 10; 
			product[ai+bi] += tmp/10; 
		}
	}
	cout << product<<endl;
	for(int pi=product.size()-1; pi>0; pi--){
		int tmp = product[pi] - '0';
		product[pi] = tmp % 10 + '0';
		product[pi-1] += tmp/10;
	}
	int pos = 0;
	for( ; pos<product.size();pos++){
		if(product[pos] != '0')
			break;
	}
	return product.substr(pos);
}

int largeNumCompare(string a, string b){
	return a.compare(b);
}

string largeNumPower(string a, int b){
	//a^b
	string res = '1';
}



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


int main()
{
	
	string n, p;
	while(true){
		cin >> n >> p;
		cout << n << '#'<<p<<endl;
		// system("PAUSE");
		cout << largeNumCompare(n,p) <<endl;
		cout << largeNumMultiply(n,p) <<endl;
	}
	systemPause();
	return 0;
}
