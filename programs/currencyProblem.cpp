#include <bits/stdc++.h>
using namespace std;
 
// function to count and
// print currency notes
void countCurrency(int amount){
    int notes[9] = { 2000, 500, 200, 100,50, 20, 10, 5, 1 };
    map<int,int> m;
    map<int, int>::iterator it;

    int size = sizeof(notes)/sizeof(notes[0]);

    for(int i =0 ; i<size;i++){
        if(amount>notes[i]){
            int noOfNotes = amount/notes[i];
            m[notes[i]] = noOfNotes;
            amount -= (notes[i] * noOfNotes);
        }
        
    }
    for(it = m.begin(); it!= m.end();it++){
            cout<<it->first<<" "<<it->second<<"\n";
    }
   
}
 

int main()
{
    int amount;
    cin>>amount;
    countCurrency(amount);
    return 0;
}