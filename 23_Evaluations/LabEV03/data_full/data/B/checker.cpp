#include<bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ACTUAL 0
#define WSIG 1
#define CSIG 2
ui64           judgeActualHash[] = { 16300345570033663131ULL, 14580168564937300327ULL,  9429752719510356106ULL,  5633922987678622987ULL,  2506356717284168779ULL, 11062673147985795553ULL,  2935694007198558163ULL, 18008508271811036528ULL,  9507330361051055220ULL, 12365880506547311935ULL};
ui64         judgeWSIgnoreHash[] = {  1527386680619990997ULL, 18253953749233179809ULL, 13103537903806235588ULL,  9307708171974502469ULL,  6180141901580048261ULL,  1466183501595013115ULL, 11785948434517327341ULL,  8412018625420254090ULL, 14986504927168388874ULL,  2769390860156529497ULL};
ui64    judgeWS_CaseIgnoreHash[] = {  1527386680619990997ULL, 18253953749233179809ULL, 13103537903806235588ULL,  9307708171974502469ULL,  6180141901580048261ULL,  1466183501595013115ULL, 11785948434517327341ULL,  8412018625420254090ULL, 14986504927168388874ULL,  2769390860156529497ULL};

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
