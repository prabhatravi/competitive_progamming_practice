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
void nextSmallestElement(vector<int>a, int n) {
    //vector<long long>sol(n);
    vector<int>sol(n);
    stack<int>st;
    for (int i=0;i<n;i++) {
        if (st.empty()) {
            st.push(i);
        } else {
            int x=a[st.top()];
            if (x<=a[i]) {
                st.push(i);
            } else
            {
                while (!st.empty()&&a[st.top()]>a[i])
                {
                    //cout<<st.top()<<" -> "<<a[i]<<endl;
                    sol[st.top()]=a[i];
                    st.pop();
                }
                st.push(i);
            }       
        }
    }
    while (!st.empty())
    {
        //cout<<st.top()<<" -> "<<-1<<endl;
        sol[st.top()]=-1;
        st.pop();
    }
    for (auto e:sol)    {
        cout<<e<<" ";
    }
    
    
}

int main() {
    vector<int>a={1, 3, 0, 2, 1};
    int n=4;
    nextSmallestElement(a, 4);
}