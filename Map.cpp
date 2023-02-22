#include <iostream>
#include<map>
using namespace std;
void print(map<int,string>&ans)
{
   cout<<"Size of MAP is"<<ans.size()<<endl;
     for(auto it: ans)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }   

}
int main(){
    
    map<int,string>ans;
    ans[1]="asf";
    ans[3]="sfss";
    ans[9]="efwcsa";
    ans.insert({4,"sfhksf"});
   

   /*
    // map does not hai duplicate key
    ans[3]="abss";

    auto it = ans.find(4);
  // cout<<"Erasing value "<<" "<<ans.erase(4);

    ans.erase(it);
    if(it==ans.end())
    {
        cout<<"NO VALUE FIND"<<endl;
    }  
    else
    {
        cout<<(*it).first<<" "<<(*it).second<<endl; 
    }

        */

   print(ans);
}