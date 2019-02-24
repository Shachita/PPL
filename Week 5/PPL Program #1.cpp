#include <iostream>
using namespace std;

#define a(x,y) a.substr(x, y)

int main(){
	
	string a;
	cout << "Enter the string: ";
	cin >> a;
	
	int n;
	cout << "Give position to enter string: ";
	cin >> n;
	
	string b;
	cout << "Enter the string: ";
	cin >> b;
	
	string c = a(0,n-1) + b + a(n,a.size()-1);
	cout << c;
}
