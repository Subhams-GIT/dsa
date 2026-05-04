#include<iostream>
#include<vector>
using namespace std;


bool isPossible(int a,int b,int c)
{
    if((2*b-c)%a==0 && (2*b-c>0)) return true;
    else if((c+a)%(2*b)==0) return true;
    else if((2*b-a)%c==0 && (2*b-a)>0) return true;
    else return false;
}   

int main(){
    int t;
    cin>>t;
    vector<bool> ans;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        bool current_ans=isPossible(a,b,c);
        ans.push_back(current_ans);
    }    

    for(int i=0;i<ans.size();i++)
    {
        if(ans[i]) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}