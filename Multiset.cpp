#include <iostream>

#include <set>

using namespace std;

void print(multiset<string>ans)
{
    for(auto it : ans)
    {
        cout<<it<<endl;
    }
}


int main(){
         multiset<string>s;
         s.insert("abc");
         s.insert("zsd");
         s.insert("bcd");
         s.insert("bcd");

        auto it=s.find("bcd");
        if(it!=s.end())
        {
      //  s.erase("bcd");
          s.erase(it); 
        }
        print(s);

}