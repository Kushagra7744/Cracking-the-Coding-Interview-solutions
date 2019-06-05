#include <bits/stdc++.h>
using namespace std;

string URLify(string s);

int main() {
	string s;
	getline(cin,s);
	cout<<URLify(s)<<endl;
	return 0;
}

string URLify(string s){
    int len=s.length();
    cout<<len<<endl;
    int sp_count=0;
    for(int i=0;i<len;i++)
        if(s[i]==' ')
            sp_count++;
    //length required for urlification
    int index= len + 2*sp_count; 
    s.resize(index);
    cout<<index<<endl;
    s[index]='\0';
    for(int i=len-1;i>0;i--){
        if(s[i]==' '){
            s[index-1]='0';
            s[index-2]='2';
            s[index-3]='%';
            
            index-=3;
        }
        else{
            s[index-1]=s[i];
            index--;
        }
    }
    return s;
}

string URLifyString(string s){
    int len=s.length();
    string new_string;
    for(int i=0;i<len;i++){
        if(s[i]!=' ')
            new_string+=s[i];
        else{
            new_string+="%20";
        }
    }
    return new_string;
}