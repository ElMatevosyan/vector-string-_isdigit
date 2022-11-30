#include <iostream>
#include <vector>

#include <string>

using namespace std;

vector<string> uni_tiv(vector<string>& my_v) {
for(int i=0; i<my_v.size(); i++)
{
    bool flag =true;
    for(int j=0; j<my_v[i].size(); j++)
        {
            if(my_v[i][j] >= '0' && my_v[i][j] <= '9')
            flag = false;
        }
    if(flag)
        my_v[i].erase();
}
return my_v;
}

int main() {
    vector<string> V={"Hello", "1student", "bestfrends4ever", "bye"};
    uni_tiv(V);
    for(int i=0; i<V.size(); i++)
       cout << V[i]<<endl;

    return 0;
}
