#include<iostream>

using namespace std;
// #define MAXSTACKLEN 110
// class STACK
// {
// private:
//      int pos = 0;
//      char arr[MAXSTACKLEN] = "";
// public:
//      STACK()
//      {

//      }

//      bool isEmpty(void)
//      {
//              // if
//      }
// };
// char stack[MAXSTACKLEN] = "";

void systemPause(void)
{

	cin.sync();
	cin.clear();
	cout << "press any key to continue..." << endl;
	cin.get();

}

int p, q, r, s, t;
int whichVaribal(char ch)
{
	//return the varibal value
	if (ch == 'p')
		return p;
	else if (ch == 'q')
		return q;
	else if (ch == 'r')
		return r;
	else if (ch == 's')
		return s;
	else if (ch == 't')
		return t;
	else if (ch == 1)
		return 1;
	else if (ch == 0)
		return 0;
	else
		return 0;
}

int findOpr(string str, int top)
{
	while (top >= 0) {
		// cout <<top<<": "<< str[top]<<endl;
		if ( str[top] == 'K')
			break;
		else if ( str[top] == 'A')
			break;
		else if ( str[top] == 'N')
			break;
		else if ( str[top] == 'C')
			break;
		else if ( str[top] == 'E')
			break;
		top --;
	}
	return top;
}

int findVaribal(string str, int opr, string child)
{
	//find the varibal position for opr
	int pos = opr;
	if ( child == "leftPos") {
		pos = pos + 1;
	} else {
		pos = pos + 2;
		while ( pos < str.size() && str[pos] == '#') {
			pos = pos + 1;
		}
		if (pos >= str.size()) {
			cout << "find rightPos Error" << endl;
		}
	}
	return pos;
}

bool isTrue(string str)
{
	int top = str.size() - 1;
	top = findOpr(str, top);
	while ( top >= 0) {
		if (str[top] == 'K') {
			int rightPos = findVaribal(str, top, "rightPos");
			int leftPos = findVaribal(str, top, "leftPos");
			int right = whichVaribal( str[rightPos]);
			int left = whichVaribal( str[leftPos]);
			str[rightPos] = '#';
			str[leftPos] = '#';
			str[top] = right && left;

		} else if ( str[top] == 'A') {
			int rightPos = findVaribal(str, top, "rightPos");
			int leftPos = findVaribal(str, top, "leftPos");
			int right = whichVaribal( str[rightPos]);
			int left = whichVaribal( str[leftPos]);
			str[rightPos] = '#';
			str[leftPos] = '#';
			str[top] = right || left;

		} else if ( str[top] == 'N') {
			int leftPos = findVaribal(str, top, "leftPos");
			int left = whichVaribal( str[leftPos]);
			str[leftPos] = '#';
			str[top] = !left;

		} else if ( str[top] == 'C') {
			int rightPos = findVaribal(str, top, "rightPos");
			int leftPos = findVaribal(str, top, "leftPos");
			int right = whichVaribal( str[rightPos]);
			int left = whichVaribal( str[leftPos]);
			str[rightPos] = '#';
			str[leftPos] = '#';
			if ( left == 1 && right == 1)
				str[top] = 1;
			else if ( left == 1 && right == 0)
				str[top] = 0;
			else if ( left == 0 && right == 1)
				str[top] = 1;
			else if ( left == 0 && right == 0)
				str[top] = 1;

		} else if ( str[top] == 'E') {
			int rightPos = findVaribal(str, top, "rightPos");
			int leftPos = findVaribal(str, top, "leftPos");
			int right = whichVaribal( str[rightPos]);
			int left = whichVaribal( str[leftPos]);
			str[rightPos] = '#';
			str[leftPos] = '#';
			str[top] = (left == right);
		}
		top = findOpr(str, top);
		// cout << str <<endl;
	}
	if (str[0] == 1)
		return true;
	else
		return false;
}


bool isTaotology(string str)
{
	for (p = 0; p < 2; p++)
		for (q = 0; q < 2; q++)
			for (r = 0; r < 2; r++)
				for (s = 0; s < 2; s++)
					for (t = 0; t < 2; t++){
						// cout<<"p:"<<p<<",q:"<<q<<",r:"<<r<<",s:"<<s<<",t:"<<t<<endl;
						// cout << str<<endl;
						if (isTrue(str) == false)
							return false;
					}

	return true;
}
int main()
{

	string str;
	while (cin >> str) {
		if (str == "0")
			break;
		// cout << str <<','<<str.size()<<endl;
		if (isTaotology(str))
			cout << "tautology" << endl;
		else
			cout << "not" << endl;

	}

	// systemPause();
}