//PRIORITY QUEUE
//the queue in which elememt are arrange in asscending order itself 
#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int > p;
    p.push(36);
    p.push(65);
    p.push(8);
cout<<p.top();
    return 0;

}