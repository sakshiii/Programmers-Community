#include <iostream>
using namespace std;

int main(){
    char string1[20];
    int i, l;
    int f= 0;
    
    cout << "Enter a string: "; 
    cin >> string1;
    
    l= strlen(string1);
    
    for(i=0;i < l ;i++){
        if(string1[i] != string1[l-i-1]){
            f = 1;
            break;
   }
}
    
    if (f) {
        cout << string1 << " is not a palindrome" << endl; 
    }    
    else {
        cout << string1 << " is a palindrome" << endl; 
    }
    system("pause");
    return 0;
}
