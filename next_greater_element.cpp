#include <bits/stdc++.h>
using namespace std;
#if 0
vector<long long> nextLargerElement(vector<long long> a, int n) {
    vector<long long> sol(n);
    for (int i=0;i<n;i++) {
        int ans=-1;
        for (int j=i+1;j<n;j++) {
            if (a[j]>a[i]) {
                ans=a[j];
            }
            if (ans!=-1) {
                sol[i]=ans;
                break;
            }
        }
    }
    return sol;
}
#endif
void nextLargerElement(vector<int>a, int n) {
    vector<long long>sol(n);
    stack<int>st;
    for (int i=0;i<n;i++) {
        if (st.empty()) {
            st.push(a[i]);
        } else {
            int x=st.top();
            if (x>a[i]) {
                st.push(a[i]);
            } else
            {
                while (!st.empty()&&st.top()<a[i])
                {
                    cout<<st.top()<<" -> "<<a[i]<<endl;
                    st.pop();
                }
                st.push(a[i]);
                
            }
            
        }
    }
    while (!st.empty())
    {
        cout<<st.top()<<" -> "<<-1<<endl;
        st.pop();
    }
    
}

int main() {
    vector<int>a={1,3,2,4};
    int n=4;
    nextLargerElement(a, 4);
}