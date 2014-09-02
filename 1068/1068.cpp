#include<iostream>
#include<String>
using namespace std;

void systemPause()
{
	cin.sync();
	cin.clear();
	cout << "Press any key to continue ..." << endl;
	cin.get();
}

#define MAX_W_SEQ 20
int wseq[MAX_W_SEQ + 1];

int main()
{
	// cout << "hello world" << endl;
	int pcnt = 0;
	int plen = 0;
	string sstr;
	cin >> pcnt;
	while (pcnt --) {
		cin >> plen;
		sstr.clear();
		sstr.resize(plen * 2);
		for (int pi = 0, si = 0, pre = 0, wi = 0; pi < plen; pi ++) {
			int cur = 0;
			cin >> cur;
			// cout << "cur:" << cur << endl;
			int delta = cur - pre;
			while (delta--) {
				sstr[si++] = '(';
			}
			sstr[si++] = ')';
			pre = cur;

			// To gen w sequece
			int spos = si - 2;//position befor the last ')'
			int rpcnt = 1;  //right parentheses cnt
			int rpcnt2 = 1;
			while (rpcnt && spos >= 0) {
				if ( sstr[spos] == ')') {
					rpcnt ++;
					rpcnt2 ++;
				} else if ( sstr[spos] == '(')
					rpcnt --;

				spos --;
			}
			if(rpcnt == 0){
				wseq[wi] = rpcnt2;
				wi ++;
			}
		}
		// cout << sstr << endl;
		for(int wi=0;wi<plen;wi++)
			cout<<wseq[wi]<<' ';
		cout <<endl;
	}


	// systemPause();
	return 0;
}