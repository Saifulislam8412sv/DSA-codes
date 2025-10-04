#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(12);
    st.push(120);
    st.push(132);
    st.push(142);
    st.push(1842);
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}