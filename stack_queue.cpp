#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    stack<int> s; // int형 스택 선언

    s.push(7); // 7을 삽입
    s.push(5); // 5를 삽입
    s.push(4); // 4를 삽입
    s.pop(); // 4를 삭제
    
    while(!s.empty()){
        cout << s.top() << ' '; // 5 7
        s.pop();
    }

    printf("\n");

    queue<int> q; // int형 큐 선언

    q.push(7); // 7을 삽입
    q.push(5); // 5를 삽입
    q.push(4); // 4를 삽입
    q.pop(); // 7을 삭제

    while(!q.empty()){
        cout << q.front() << ' '; // 5 4
        q.pop();
    }

    return 0;
}