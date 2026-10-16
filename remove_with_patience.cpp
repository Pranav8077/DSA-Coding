#include<bits/stdc++.h>
using namespace std;
int main(){
    string S,R;
    cin>>S>>R;
    int pos=S.find(R);
    if(pos!=string::npos&&pos>0){
        char ch=S[pos-1];
        string newStr(R.length(),ch);
        S.replace(pos,R.length(),newStr);
    }
    cout<<S;
    return 0;

}     
