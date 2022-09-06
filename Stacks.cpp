#include <iostream>
#include <stack>

using namespace std;

int main(){
    
    stack<int> s;
    
    s.push(20);
    s.push(34);
    s.push(90);
    while (!s.empty()) {
		cout << ' ' << s.top();
		s.pop();

    }
    
    
    
}
