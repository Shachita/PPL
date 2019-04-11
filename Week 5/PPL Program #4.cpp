#include <iostream>
using namespace std;
 
string str, word;
int count = 0, count1 = 0;
 
int main()
{
    int res=0, N, M;
    
	string str, word; 
    
    cout << "Enter a string: ";    
    getline(cin, str);
    N= str.length();
 
    cout << "Enter a word: ";
    cin >> word;
 
    M= word.length();
 
    for (int i = 0; i <= N - M; i++) 
    {  
        
        int j; 
        for (j = 0; j < M; j++) 
            if (str[i+j] != word[j]) 
                break; 
    
        if (j == M)   
        { 
           res++; 
           j = 0; 
        } 
        
    }    
    cout << word << " occurs " << res << " times!";
}
