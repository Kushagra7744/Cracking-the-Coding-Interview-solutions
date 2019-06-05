#include <bits/stdc++.h>
using namespace std;

void input(long a[], long len);
void output(long a[], long len);
bool isPermutationHashMap(string s1, string s2);
bool isPermutationSort(string s1, string s2);

int main() {
	long test;
	cin>>test;
	while(test--){
	    string s1,s2;
	    cin>>s1>>s2;
	    if(isPermutationSort(s1,s2))
	        cout<<"Yes\n";
	       else
	        cout<<"no\n";
	    
	    
	}
	
	return 0;
}

bool isPermutationHashMap(string s1,string s2){
    unordered_map<char,int> umap;
    int len1=s1.length();
    int len2=s2.length();
    
    for(int i=0;i<len1;i++){
        umap[s1[i]]++;
        umap[s2[i]]--;
    }
    
    for(auto x: umap){
        if(x.second!=0)
            return false;
        
    }
    return true;
    
}

bool isPermutationSort(string s1, string s2){
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2)
        return true;
    else
        return false;
}

void input(long a[], long len){
    for(long i =0;i<len;i++)
        cin>>a[i];
}

void output(long a[], long len){
     for(long i=0;i<len;i++)
        cout<<a[i]<<" ";
    
    }