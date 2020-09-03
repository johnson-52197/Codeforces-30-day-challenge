# include <iostream>

using namespace std;

int main(){
    string str;
    cin>>str;
    int count = 0, a[26] = {0}, len;
    len = str.length();
    for (int i = 0; i<len; i++){
        if(a[str[i] - 'a'] == 0){
            count += 1;
            a[str[i] - 'a'] = 1;
        }
    }
    if(count%2 != 0) cout<<"IGNORE HIM";
    else cout<<"CHAT WITH HER";
    return 0;
}