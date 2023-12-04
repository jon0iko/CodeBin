#include<stdio.h>
// #include<iostream>
// using namespace std;

int main(){
    char s[1000];
    scanf("%s",s);
    int len = 0;
    while(s[len]!='\0') len++;
    int ans = 0;
    while(1){
        int is_p = 1, id = 0, n_len = len - ans;
        for(int j = 0; j < n_len / 2; j++){
           // cout<<s[ans+j]<<" "<<s[ans+n_len-1 - id]<<endl;
            if(s[ans+j]!=s[ans+n_len-1 - id]){
                is_p = 0;
                break;
            }
            id++;
        }
        //cout<<is_p<<" "<<ans<<endl;
        if(is_p){
            break;
        }
        ans++;
    }
    printf("%d\n",ans);

}