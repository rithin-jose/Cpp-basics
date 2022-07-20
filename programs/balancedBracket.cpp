#include <bits/stdc++.h>
#include<stack>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


string isBalanced(string s) {
    stack<char> temp;

    for(auto i:s){
        if(temp.empty()){
            temp.push(i);
        }
        else if((temp.top() == '(' && i == ')') || (temp.top() == '[' && i == ']') || (temp.top() == '{' && i == '}') ){
            temp.pop();
        }
        else{
            temp.push(i);
        }
    }

    if(temp.empty()){
        return "YES";
    }

    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}