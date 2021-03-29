#include<iostream>
#include<string>

using namespace std;

int main()
{
    string a = "test";
    string a2 = "test2";
    string test;
    cout << "The length of the txt string is: " << a.string::length()<<endl; 
    cout << "concat:" << a + a2<<endl; 
    cout << a[0]<<endl;
    cout << a[1]<<endl;
    cout << a[2]<<endl;
    cout << a[3]<<endl;
    a[0]='w';
    cout << a;
    cin >> test;
    cout<< test;
    getline (cin, test);
    cout<<test;
    return 0;
}