#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    int x; 
    int a,b;
    int element;
    cin >>n;
    vector <int> v;
    v.clear();

    for(int i=0; i<n; i++){
        cin >> element;
        v.push_back(element);
    }

    cin >> x;

    v.erase(v.begin()+x-1);

    cin >> a >> b;

    v.erase(v.begin()+a-1, v.begin()+b-1);

    cout << v.size() << endl;

    for(auto i: v)
        cout << i << " ";
 
    return 0;
}
