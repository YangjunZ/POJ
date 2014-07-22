
#include<iostream>
#include<string>

using namespace std;

bool isOp(char ch){
	if( ch== 'K' || ch== 'A' || ch== 'N'||ch== 'C'||ch== 'E')
		return true;
	return false;
}

bool isVal(char ch){
	if( ch== 'p' || ch== 'q' || ch== 'r'||ch== 's'||ch== 't')
		return true;
	return false;	
}
int calc(char op, int w, int x){
	if( op =='K')
		return w && x;
	if(op =='A')
		return w || x;
	if(op == 'N')
		return !w;
	if(op == 'C'){
		if(w==1 && x ==1) 
			return 1;
		if(w==1 && x ==0) 
			return 0;
		if(w==0 && x ==1) 
			return 1;
		if(w==0 && x ==0) 
			return 1;
	}
	if(op =='E')
		return w==x;
}

int parse(string str, int ptr ){
	if(ptr < 0 || ptr >= str.size()){
		cout<<'ptr error'<<endl;
		exit(1);	
	} 

	if( isVal(str[ptr]))
		return value(str[ptr]);
	if( isOp(str[ptr])){
		
	}

	return 
}

int main(){
	string ss="";
	cin >> ss;
	for(int i=0; i < ss.size(); i++){
		cout<<ss[i];
	}
	return 0;
}
