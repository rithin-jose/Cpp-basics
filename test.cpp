#include<iostream>
#include<vector>
#include<list>
#include<iterator>
#include<set>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    for(auto i= v.begin();i!=v.end();++i)
    {
        cout<<*i<<" ";
    }

    list<int> l;

    cout<<endl;

    l.push_front(55);
    l.push_front(56);
    l.push_front(57);
    l.push_front(58);
    l.push_back(10);
    l.push_back(9);
    l.push_back(8);
    
    for(auto i=l.begin();i!=l.end();++i)
    {
        cout<<*i<<" ";
    }

    set<int> s;

    cout<<endl;

    s.insert(10);
    s.insert(9);
    s.insert(9);
    s.insert(8);
    s.insert(7);

    for(auto i=s.begin();i!=s.end();++i)
    {
        cout<<*i<<" ";
    }

    return 0;
}