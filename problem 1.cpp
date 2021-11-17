#include <iostream>

using namespace std;

int main ()

{

    string word;
    cout<<"please input your word"<<endl;
    cin>>word;
    
    if (word == string(word.rbegin(), word.rend())) {
        cout << word << " is a palindrome\n";
    }
    else
        cout<<"this word is not a plaindrome\n";
    
        
    
    return 0;
    
    
    
}

