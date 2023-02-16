//#include<iostream>
#include <bits/stdc++.h>
#include<queue>
using namespace std;

int main(){
    //create queue
    queue<int> q;
    q.push(11);
    cout <<"front of q is" <<q.front() <<endl;
    q.push(15);
     cout <<"front of q is" <<q.front() <<endl;

    q.push(20);
     cout <<"front of q is" <<q.front() <<endl;
    cout << "size of queue is :" <<q.size()<<endl;

    q.pop();

    cout  <<"size of queue is : " <<q.size()<< endl;

    if(q.empty()){
        cout <<"queue is empty" << endl;

    }
    else{
        cout << "queue is not empty" << endl;
    }
     return 0;
}