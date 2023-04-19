#include<iostream>  
#include<string>  
using namespace std;  
int appearNum(string& s,int p,string& l);  
int main()  
{  
    string inputS,inputL,save;  
    cin>>inputS>>inputL;  
    cout<<appearNum(inputS,0,inputL)<<endl;  
    return 0;  
}  
int appearNum(string& s,int p,string& l) 
{  
    int a=0;  
    if(p>l.length())return a=0;  
    for(int i=0;i<s.length();i++)  
    {  
        if(l[i+p]==s[i])continue;   
        else return a+=appearNum(s,p+1,l);   
    }  
    a++;return a+=appearNum(s,p+1,l);  
}   
