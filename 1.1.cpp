#include <bits/stdc++.h>
using namespace std;

void input(long a[], long len);
void output(long a[], long len);
bool checkUnique(string s);
bool checkUniqueBitVector(string s);
bool checkUniqueNoDS(string s);

int main() {
	long test;
	cin>>test;
	while(test--){
	    string s;
	    cin>>s;
	    if(checkUniqueNoDS(s))
	        cout<<"s is unique.\n";
	    else
	        cout<<"s is duplicated.\n";
	}
	
	return 0;
}


bool checkUniqueNoDS(string s){
    sort(s.begin(),s.end());
    int len=s.length();
    for(int i=0;i<len-1;i++){
        if(s[i]==s[i+1])
            return false;
    }
    return true;
}

bool checkUniqueBitVector(string s){
    int len=s.length();
    int checker=0;
    for(int i=0;i<len;i++){
        int val= int(s[i]-'a');
        if((checker & 1<<val) > 0)
            return false;
                
        checker|=(1<<val);
    }
    return true;
}

bool checkUnique(string s){
    int len=s.length();
    
    unordered_set<char> uset;
    for(int i=0;i<len;i++){
        if(uset.find(s[i])==uset.end())
            uset.insert(s[i]);
        else{
            return false;
        }
        
    }
    return true;
}

void input(long a[], long len){
    for(long i =0;i<len;i++)
        cin>>a[i];
}

void output(long a[], long len){
     for(long i=0;i<len;i++)
        cout<<a[i]<<" ";
    
    }