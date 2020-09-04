#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, m, a, b, count = 0, la, lb;
    cin>>n>>m;
    la = int(sqrt(n));
    lb = int(sqrt(m));
    for(a = 0; a<=la; a++){
        for(b = 0; b<=lb; b++){
            if((a*a + b == n) && (a + b*b == m)){
                count += 1;
            }
        }
    }
    cout<<count;
    return 0;
}