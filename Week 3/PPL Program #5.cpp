#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Enter the number of lines to print: ";
    cin >> x;
    int r=0;
    while(++r<=x){
    	for(int i=1;i<=r;++i){
    		cout << i << " ";
		}
		cout << std::endl;
	}
    
}
