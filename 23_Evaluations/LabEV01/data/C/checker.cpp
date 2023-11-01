#include<bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ACTUAL 0
#define WSIG 1
#define CSIG 2
ui64           judgeActualHash[] = {  5952182339547453051ULL, 14987054234222870621ULL,  6279597230902845929ULL, 16923197644954691451ULL,  7706722900176053081ULL, 12478125024902937297ULL,  4737287302696239860ULL,  5801687960919269443ULL, 13627058216980426878ULL, 10189307384059915719ULL};
ui64         judgeWSIgnoreHash[] = { 10083697872632379031ULL,  8437889052644515113ULL, 17957390758194977047ULL, 14287008728362447735ULL,   425447090602629813ULL,  3781815565721977499ULL,  7266443193172464658ULL,  5362804638885067901ULL,  2394258174532632702ULL,  2546768398473783847ULL};
ui64    judgeWS_CaseIgnoreHash[] = { 12232776124122416791ULL, 10586967304134552873ULL,  9688555806087362839ULL,  6018173776254833527ULL, 10603356212204567221ULL,  1142319517480432283ULL,  4626947144930919442ULL, 15740560688292707453ULL, 18201506200000639102ULL, 18354016423941790247ULL};

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
