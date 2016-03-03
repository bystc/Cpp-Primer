#include<iostream>  
#include<vector>  
#include<iterator>  
#include<string>  
using namespace std;  
  
int main()  
{  
      
    string s, s1;  
    const string s_exit = "exit";  
    while (cin >> s1)  
    {  
        if (s1 == s_exit)  
            break;  
        s += s1;  
        s += " ";  
    }
    cout << s << endl;  
    return 0;  
}  
