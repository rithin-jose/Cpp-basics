#include<iostream>
#include<algorithm>
#include <iomanip>
#include <math.h>

using namespace std;

string extractNumber(string K,int start,int end){
    string x;
    for(int i=start;i<end;i++){
        x+=K[i];
    }

    return x;
}

string reverse(string k){
    string x;
    for(int i = k.length()-1; i>=0;i--){
        x+=k[i];
    }
    return x;
}

string generatePalindrome(string K,int mid,int length){
    string left,right,revleft;
    left = extractNumber(K,0,mid);
    right = extractNumber(K,mid+1,length);

    revleft = reverse(left);
    if(revleft > right){
        return left+K[mid]+revleft;
    }
    else{
        K[mid]=K[mid]+1;
        return left+K[mid]+revleft;
    }
}

string generatePalindromeEven(string K,int mid,int length){
    string left,right,revleft;
    left = extractNumber(K,0,mid);
    right = extractNumber(K,mid,length);

    revleft = reverse(left);
    if(revleft > right){
        return left+revleft;
    }
    else{
        left[mid-1]=left[mid-1]+1;
        revleft[0]=revleft[0]+1;
        return left+revleft;
    }
}

string findPalindrome(string K){
    int length = K.length();
    
    // for odd no of digits 
    if(length & 1){
        int mid=floor(length/2);

        if(K[mid]!='9')
            return generatePalindrome(K,mid,length);

        else{
            K[mid]='0';
            K[mid-1]=K[mid-1]+1;
            return generatePalindrome(K,mid,length);
        }
    }
    // for even no of digits
    else{
        int mid=floor(length/2);
        
        if(K[mid]!='9')
            return generatePalindromeEven(K,mid,length);

        else{
            K[mid]='0';
            K[mid-1]=K[mid-1]+1;
            return generatePalindrome(K,mid,length);
        }
    }

    return "";
}


int main(){

    string K;
    cin>>K;
    cout<<findPalindrome(K)<<endl;
    
	return 0;
}




