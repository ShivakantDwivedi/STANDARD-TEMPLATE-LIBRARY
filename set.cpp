#include <bits/stdc++.h>
using namespace std;
void print(set<string> &s)
{
    for(auto it:s)
    {
        cout<<it<<endl;
    }

/*
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<endl;
    }

    */ 



}
int main(){
    set <string>s;
    s.insert("abc");
    s.insert("zsd");
    s.insert("bcd");
    s.insert("bcd");


   auto it =s.find("abc");
    if(it!=s.end())
    {
        cout<<"found"<<endl<<*it<<endl;
        s.erase(it);
    }

    else 
    {
        cout<<"Value is found"<<endl;
    }
    print(s);

}