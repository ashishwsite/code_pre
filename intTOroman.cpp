#include<bits/stdc++.h>
using namespace std;
 string intToRoman(int n) {
    map<int ,string> m;
    m[1]="I";
    m[2]="II";
    m[3]="III";
    m[4]="IV";
    m[5]="V";
    m[6]="VI";
    m[7]="VII";
    m[8]="VIII";
    m[9]="IX";
    m[10]="X";
    m[20]="XX";
    m[30]="XXX";
    m[40]="XL";
    m[50]="L";
    m[60]="LX";
    m[70]="LXX";
    m[80]="LXXX";
    m[90]="XC";
    m[100]="C";
    m[200]="CC";
    m[300]="CCC";
    m[400]="CD";
    m[500]="D";
    m[600]="DC";
    m[700]="DCC";
    m[800]="DCCC";
    m[900]="CM";
    m[1000]="M";
    m[2000]="MM";
    m[3000]="MMM";
    string ans="";
    stack<string> s;
    int i=1;
    while(n>0){
        int d=n%10;
        s.push(m[d*i]);
        n=n/10;
        i++;
    }
    while(s.empty()!=0){
        ans.push_back(s.pop());
    }

        
    }
int main(){
    int n;
    cin>>n;
     string  ans=intToRoman(n);
    cout<<ans;


}