#include<bits/stdc++.h>
#define ll   long long
#define MOD  100000007

using namespace std;

int main(){
    string s;
    vector<string> vt;
    while(getline(cin,s)){
        vt.push_back(s);
    }
    int max_length = -1;
    
    for(int i=0;i<vt.size();i++){
        int k = vt[i].length();
        max_length = max(max_length,k);
    }
    for(int i=0;i<max_length;i++){
        for(int j=vt.size()-1;j>=0;j--){
            if(vt[j].length()>i){
                cout<<vt[j][i];
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
