#include"lr.h" 
#include<stdio.h>
#define YES 1
#define NO 0
float put(float v1, float l){
float t;
    v1=v1*1000/3600;
    t=l/v1;
    return t;
}
int pow(int x, int y){
    int x1=x;
    if (y==0){
        return 1;
    }
    for(int i = 1; i < y; i++){
        x1*=x;}
    return x1;
}
int ras(char* word) {
    int c[26] = {0}; 
    
    for (int i = 0; word[i] != '\0'; i++) {
        if ((word[i] >= 'a' && word[i] <= 'z') || (word[i]>='A' && word[i]<='Z')) {
            int index = word[i] - 'a';
            c[index]++;
            if (c[index] > 1) {
                return 0; 
            }
        }
    }
    return 1; 
}
int lab1(){
float v1, l, t;
    scanf("%f", &l);
    scanf("%f", &v1);
    v1=v1*1000/3600;
    t=l/v1;
    printf("%f", t);
return 0;
}
int lab11(){
    float v1, l;
    scanf("%f", &l);
    scanf("%f", &v1);
    printf("%.2f", put(v1, l));
    return 0;
}

int lab2(){
double s, a=30001, i;
float esp;
int sing;
scanf("%f", &esp);
i=3;
sing=1;
while (a>esp)
{
a = i / ((i-2)*(i-1));
s=s+a*sing;
i = i+1;
sing=-sing;
}
printf("s=%.2f", s);
return 0;
}

int lab21(){
double s, a, i;
float esp;
int n, sing;
scanf("%f", &esp);
scanf("%d", &n);
i=3;
sing=1;
while (i<=n)
{
a = i / ((i-2)*(i-1));
if (a<=esp){
    break;
}else{s=s+a*sing;
i = i+1;
sing=-sing;}
}
printf("s=%.2f", s);
return 0;
}

int lab3(){
char c;
    int cnt = 0;
    int flag = NO;

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            if (!flag) {
                cnt++;
                flag = YES;
            }
        } else {
            flag = NO;
        }
    }

    printf("%d", cnt);

    return 0;
}
struct slst{
    int i;
    int j;
};
int lab4(){
char str[100];
    fgets(str, sizeof(str), stdin);
    char word[50];
    int i = 0, j = 0;
    while (str[i] != '\0') {
            
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            word[j++] = str[i];
        } else {
            
            word[j] = '\0';
            if (j > 0 && ras(word)) {
                printf("%s ", word);
            }
            j = 0;
        }
        i++;
    }
return 0;
}

int lab41(){
char str[100];
    fgets(str, sizeof(str), stdin);
    char word[50];
    struct slst x;
    x.i = 0;
    x.j = 0;
    while (str[x.i] != '\0') {
            
        if ((str[x.i] >= 'a' && str[x.i] <= 'z') || (str[x.i] >= 'A' && str[x.i] <= 'Z')) {
            word[x.j++] = str[x.i];
        } else {
            
            word[x.j] = '\0';
            if (x.j > 0 && ras(word)) {
                printf("%s ", word);
            }
            x.j = 0;
        }
        x.i++;
    }
return 0;
}

#include<stdio.h>
int lab5(){
int arr[10];
int b,q,cnt=0,geom;
for (int i=0;i<10;i++){
 scanf("%d", &arr[i]);
}
b=arr[0];
q=arr[1]/arr[0];
for (int j=0;j<10;j++){
 int h=j;
 int pow=1;
 while(h>0){
 pow*=q;
 h--;
 }
 geom=b*pow;
 if (arr[j]==geom){
 cnt++;
 }
}
if (cnt==10){
 printf("YES");
}else{
 printf("NO");
}
return 0;
}

int lab51(){
int arr[10];
int b,q,k,cnt=0,geom,ctn=0;
for (int i=0;i<10;i++){
    scanf("%d", &arr[i]);
}
b=arr[0];
q=arr[1]/arr[0];
k=arr[0]/arr[1];
if(arr[0]<arr[1]){
for (int j=0;j<10;j++){
    int h=j;
    int pow=1;
    while(h>0){
        pow*=q;
        h--;
    }
    geom=b*pow;
    if (arr[j]==geom){
        cnt++;
    }
}
}else{
if(arr[0]>arr[1]){
for (int j=0;j<10;j++){
    int h=j;
    int pow=1;
    while(h>0){
        pow*=k;
        h--;
    }
    geom=b/
    pow;
    if (arr[j]==geom){
        ctn++;
    }
}
}
}
if (cnt==10){
    printf("YES ITS GEOMETRIC PROGRESS");
}else{
    if(ctn==10){
        printf("YES ITS GEOMETRIC REGRESS");
    }else{
    printf("No");
    }
}
return 0;
}

int lab6(){
int n=3,k=4,min,x,y,i,j;
int arr[n][k];
for(i=0;i<n;i++){
    for(j=0;j<k;j++){
        scanf("%d", &arr[i][j]);
        }
}
min=31000;
for(i=0;i<n;i++){
    for(j=0;j<k;j++){
            
        if(arr[i][j]<min){
            
min=arr[i][j];
            x=i;
            y=j;
        }
    }
}


for(i=0;i<n;i++){
    for(j=0;j<k;j++){
        
            if(x==i || y==j){
                arr[i][j]=0;
            }
    }
}
for(i =0;i<n;i++){
    for(j=0; j<k;j++){
            
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
return 0;
}
int lab6_1(){
    int N=3,M=4;
    int step = N * M;
    float kof = 1.3;
    int flag = 0;
    int arr[N][M];
    srand(time(0));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            arr[i][j]=rand() %100+1;
            printf("%d ", arr[i][j]);
        }printf("\n");
    }

    while (!flag) {
        step = step / kof;
        if (step <= 1) {
            step = 1;
            flag = 1;
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                int stepi = i * M + j + step;
                if (stepi < N * M) {
                    if (arr[i][j] > arr[stepi / M][stepi % M]) {
                        int temp = arr[i][j];
                        arr[i][j] = arr[stepi / M][stepi % M];
                        arr[stepi / M][stepi % M] = temp;
                        flag = 0;
                    }
                }
            }
        }
    }
    printf("\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
return 0;
}
int lab7(){
unsigned n, l = 0, ml = 0;
    scanf("%d", &n);
    do {
        if (n & 1) {
            if (++l > ml) ++ml;
        } else l = 0;
    } while (n >>= 1);
    printf("%d", ml);
return 0;
}
