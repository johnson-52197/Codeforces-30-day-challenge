#include <iostream>
#include <string.h>

using namespace std;

int main(){
    string str;
    cin>>str;
    int cnt = 0;
    for (int i = 0; i<str.size(); i++){
        for(int j = i+1; j<str.size(); j++){
            if (str[i] != str[j]){
                    cnt += 1;
            }
        }
    }
if((cnt%2) != 0) cout<<"IGNORE HIM";
else cout<<"CHAT WITH HER";
return 0;
}