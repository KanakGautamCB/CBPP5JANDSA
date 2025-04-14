#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int>st;
    st.insert(9);
    st.insert(8);
    st.insert(5);
    st.insert(7);

    st.erase(st.begin());

    st.insert(9);

    auto it = st.begin();
    while(it!=st.end()){
        cout<<*it<<endl;
        it++;
    }

    cout<<st.size()<<endl;

    st.clear();

    


}