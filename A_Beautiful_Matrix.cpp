#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
vector<vector<int>> m(6,vector<int>(6));
for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        cin>>m[i][j];
        if(m[i][j]==1){
             r=i,c=j;
        }
    }
}
int rm=abs(3-r);
int cm=abs(3-c);
cout<<rm+cm<<endl;

}