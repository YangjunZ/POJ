#include<iostream>
#include<String>

using namespace std;
string removeZeroFront(string str){
	int pos = 0;
	for( ; pos<str.size();pos++){
		if(str[pos] != '0')
			break;
	}
	return str.substr(pos);
}

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
			int ii = ai+bi;
			while(ii>=0 && product[ii] - '0' > 9){
				int xx = product[ii] - '0'	;
				product[ii] = xx % 10 + '0';
				ii = ii -1;
				product[ii] += xx/10;
			}
		}
	}

	for(int pi=product.size()-1; pi>0; pi--){
		int tmp = product[pi] - '0';
		product[pi] = tmp % 10 + '0';
		product[pi-1] += tmp/10;
	}

	return removeZeroFront(product);
}

int largeNumCompare(string a, string b){
	a = removeZeroFront(a);
	b = removeZeroFront(b);
	if(a.size() < b.size()){
		return -1;
	}else if(a.size() > b.size()){
		return 1;
	}else{
		return a.compare(b);
	}
}

string largeNumPower(string a, int b){
	//a^b
	string res = "1";
	string tmp = a;
	while(b > 0){
		if(b & 1 ){
			res = largeNumMultiply(res,tmp);
		}
		tmp = largeNumMultiply(tmp, tmp);
		b = b >> 1;
	}
	return res;
}


string integerToStr(int a){

	#define CHLEN 12 //the resulet 1<=k<=10^9
	char s[CHLEN];

	for(int i=0; i<CHLEN; i++){
		s[i] = '0';
	}
	s[CHLEN -1]= '\0';
	int pos = CHLEN -2;
	while( a > 0 && pos >= 0){
		s[pos] = a%10 + '0';
		a = a/10;
		pos --;
	}

	string str = s;
	str = removeZeroFront(str);
	return str;
}


// void systemPause(void){
// 	cin.sync();
//     cout << "Please press any key to continue.... ";
//     cin.get();
// }


int main()
{
	
	string  p;
	int n;
	while(cin >> n >> p){
		int klen = p.size()/n;
		if( klen * n < p.size()) {
			klen = klen + 1;
		}
		int min =  1;
		int tmp = klen;
		while( -- tmp ){
			min = min * 10;
		}
		int max = min * 10;
		int mid = (min + max)/2;
		while( true){
			string pres = largeNumPower( integerToStr(mid), n);
			int cres = largeNumCompare(pres, p);
			if( cres < 0){// res < p
				min = mid + 1;
			}else if(cres >0){// res > p
				max = mid - 1;
			}else{
				break;
			}
			if (min > max ) break;
			mid = (min + max)/2;
		}
		cout << mid<<endl;
	}
	// systemPause();
	return 0;
}
