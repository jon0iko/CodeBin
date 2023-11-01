#include<bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ACTUAL 0
#define WSIG 1
#define CSIG 2
ui64           judgeActualHash[] = {  1474286178389342620ULL,  1474286178389342620ULL, 15059061500805605684ULL, 15059061500805605684ULL,  1474286178389342622ULL, 15059061500805605680ULL, 15059061500805605688ULL, 15059061500805605688ULL,  1474286178389342618ULL,  1474286178389342614ULL};
ui64         judgeWSIgnoreHash[] = { 10127966706749630592ULL, 10127966706749630592ULL,  8852122913306413710ULL,  8852122913306413710ULL, 10127966706749630594ULL,  8852122913306413706ULL,  8852122913306413714ULL,  8852122913306413714ULL, 10127966706749630590ULL, 10127966706749630586ULL};
ui64    judgeWS_CaseIgnoreHash[] = { 12723863496077744736ULL, 12723863496077744736ULL,  7227910876845074574ULL,  7227910876845074574ULL, 12723863496077744738ULL,  7227910876845074570ULL,  7227910876845074578ULL,  7227910876845074578ULL, 12723863496077744734ULL, 12723863496077744730ULL};

bool isWS(char c){
    return c == ' ' || c == '\n' || c == '\r' || c == '\t';
}

ui64 findHash(char filename[], int flag = ACTUAL){
    FILE *fp = fopen(filename,"r");
    ui64 p = 1000000007;
    char c;
    ui64 hash = 0, coeff = 1;
    while((c = fgetc(fp))!=EOF){
        if(isWS(c) && (flag & WSIG))continue;
        if(isalpha(c) && (flag & CSIG)) c = tolower(c);
        hash += (c * coeff);
        coeff *= p;
    }
    fclose(fp);
    return hash;
}

void check(int cs){
    int i;
    ui64 scHash;
    for(i = 1; i <= cs; i++){
        char file[100],infile[100],stsfile[100];
        sprintf(file,"%d.out",i);
        sprintf(infile,"%d.in",i);
        sprintf(stsfile,"%d.status",i);
        printf("Case %d: ",i);
        FILE *fp;
        int flag = 0;
        if((fp = fopen(infile, "r")) == NULL) flag = 1;
        if(flag) printf("Input File Missing!!!\n");
        else{
            FILE *stsfp = fopen(stsfile, "r");
            char sts[100];
            fgets(sts, 100, stsfp);
            if(strncmp(sts, "TLE", 3) == 0) printf("Time Limit Exceeded\n");
            else if(strncmp(sts, "timeout", 7) == 0) printf("Run Time Error\n");
            else if(strncmp(sts, "+Accepted", 8) == 0) printf("*********************PASSED***********************\n");
            else {
                scHash = findHash(file);
                if(scHash == judgeActualHash[i-1])printf("*********************PASSED***********************\n");
                else{
                    scHash = findHash(file, WSIG);
                    if(scHash == judgeWSIgnoreHash[i-1])printf("White Space Error\n");
                    else{
                        scHash = findHash(file, WSIG | CSIG);
                        if(scHash == judgeWS_CaseIgnoreHash[i-1])printf("Upper/Lower Case Error\n");
                        else printf("Failed\n");
                    }
                }
            }
        }
    }
}
int main(){
	check(10);
	return 0;
}
