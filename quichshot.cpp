#include<iostream>
using namespace std;
int partion(int A[],int s,int e){
    int pv=A[s];
    int cnt=0;
   
    for(int i=1;i<=e;i++){
        if(pv>A[i+s])
        cnt++;
    }
    int p=cnt+s;
    swap(A[s],A[p]);
   // cout<<"klgj";
   int i=s;
   int j=e;

    while(i<p && j>p){
        while(A[i]<=pv){
i++;
        }
        
        while (A[j]>p)
        {
       
         j--;
        }
        if(i<p && j>p){
       swap(A[i++],A[j--]);
        }
    }
    return p;
}
void quickshot(int A[],int l,int e){
    if(l>=e)
    return;
   // cout<<"hg";
    int p=partion(A, l, e);
    quickshot(A,l,p-1);
    quickshot(A,p+1,e);
}
int main(){
    int A[]={164,986,4,765,498,46,4,67,5};
    int s=sizeof(A)/sizeof(A[0]);
    int l=0;
    int e=s-1;
    cout<<"s"<<s;
    quickshot(A,l,e);
    for(int i=0;i<s;i++){
        cout<<A[i]<<" ";
    }
}