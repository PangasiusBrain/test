// Bài 1 //
#include <iostream>
using namespace std;
#include <math.h>
int ktsnt(int n);
int main(){
    int a, dem=0;
    do{
        cout<<"nhập n: ";
        cin>>a;
    } while (a<0);
    
    for (int i=1;i<=a;i++)
        if (ktsnt(i))
            dem++;
    cout<<"từ 1 đến "<<a<<" có "<<dem<<" số nguyên tố";
    return 0;
}
int ktsnt(int n){
    if (n<2)
        return 0;
    for (int i=2;i<=sqrt(n);i++)
        if (n%i==0)
            return 0;
    return 1;
}
// Bài 2 //
#include <iostream>
using namespace std;
#include <math.h>
int phantich(int n);
int main(){
    int a;
    do{
        cout<<"nhập n: ";
        cin>>a;
    } while (a<0);
    phantich(a);
    return 0;
}
int phantich(int n){
    for (int i=2;i<=n;i++)
        while (n%i==0){
            cout<<i<<" ";
            n/=i;
        }
}
// Bài 3 //
#include <iostream>
using namespace std;
#include <math.h>
int ucln(int a, int b);
int bcnn(int a, int b);
int main(){
    int x,y;
    do{
        cout<<"nhập a,b: ";
        cin>>x>>y;
    } while (x<0 || y<0);
    
    cout<<"ước chung lớn nhất là: "<<ucln(x,y)<<endl;
    cout<<"bội chung nhỏ nhất là: "<<bcnn(x,y)<<endl;
    return 0;
}
int ucln(int a, int b){
    int r=a%b;
    while (r!=0){
        a=b;
        b=r;
        r=a%b;
    }
    return b;
}
int bcnn(int a, int b){
    int t=a*b/ucln(a,b);
    return t;
}
// Bài 4 //
#include <iostream>
using namespace std;
#include <math.h>
void sdn(int n);
int main(){
    int a;
    do{
        cout<<"nhập n: ";
        cin>>a;
    } while (a<0);
    sdn(a);
    return 0;
}
void sdn(int n){
    int s=0,t=n;
    while (n!=0){
        s=s*10+(n%10);
        n/=10;
    }
    cout<<"số đảo ngược là: "<<s<<endl;
}
// Bài 5 //
#include <iostream>
using namespace std;
#include <math.h>
int doinhiphan(int n);
int main(){
    int a;
    do
    {
        cout<<"nhập số n: ";
        cin>>a;
    } while (a<0);
    
    cout<<"số nhị phân của "<<a<<" là: "<<doinhiphan(a)<<endl;
    return 0;
}
int doinhiphan(int n){
    int thuong,tam,du,kq=0;
    tam=1;
    thuong=n;
    while (thuong!=0){
        du=thuong%2;
        thuong/=2;
        kq+=du*tam;
        tam*=10;
    }
    return kq;
}
// Bài 6 //
#include <iostream>
using namespace std;
#include <math.h>
int thetich(int x, int y, int z);
int main(){
    int a,b,c;
    do{
        cout<<"nhập vào chiều dài, rộng, cao: ";
        cin>>a>>b>>c;
    }
    while (a<0 || b<0 || c<0);
    cout<<"thể tích là: "<<thetich(a,b,c)<<endl;
    return 0;
}
int thetich(int x, int y, int z){
    int v=1;
    v=x*y*z;
    return v;
}
// Bài 7 //
Tìm bội chung
// Bài 8 //
Sửa n+sum(n-1)
Tính tổng n số hạng
// Bài 9 //
#include <iostream>
using namespace std;
#include <math.h>
void nhapm(int a[], int &n);
void xuatm(int a[], int n);
int minm(int a[], int n);
int main(){
    int a[100], x;
    nhapm(a,x);
    xuatm(a,x);
    cout<<"giá trị nhỏ nhất của mảng: "<<minm(a,x)<<endl;
    return 0;
}
void nhapm(int a[], int &n){
    cout<<"nhập số phần tử của mảng: ";
    cin>>n;
    for (int i=0;i<n;i++){
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
}
void xuatm(int a[], int n){
    cout<<"các phần tử của mảng là: "<<endl;
    for (int i=0;i<n;i++)
        cout<<"a["<<i<<"]= "<<a[i]<<endl;
}
int minm(int a[], int n){
    int min=a[0];
    for (int i=1;i<n;i++)
        if (a[i]<min)
            min=a[i];
    return min;
}

// Bài 10 //
#include <iostream>
using namespace std;
void nhapm(int a[], int &n);
int demsl(int n);
void xuly(int a[], int n);
int main(){
    int a[100],x,v;
    nhapm(a,x);
    xuly(a,x);
    return 0;
}
void nhapm(int a[], int &n){
    cout<<"nhập số phần tử của mảng: ";
    cin>>n;
    for (int i=0;i<n;i++)
        do{
            cout<<"a["<<i<<"]= ";
            cin>>a[i];
        } while (a[i]<0); 
}
int demsl(int n){
    int dem=1;
    while (n>=10){
            dem++;
            n/=10;
        }
    return dem;
}
void xuly(int a[], int n){
    for (int i=0;i<n;i++)
        cout<<"số lượng các chữ số nguyên dương của a["<<i<<"] là: "<<demsl(a[i])<<endl;
}

// Bài 11 //
#include <iostream>
using namespace std;
#include <math.h>
void nhapm(int a[], int &n);
void xuatm(int a[], int n);
float tbn(int a[], int n);
int main(){
    int a[100],x;
    nhapm(a,x);
    cout<<"trung bình nhân của các phần tử trong mảng là: "<<tbn(a,x)<<endl;
    return 0;
}
void nhapm(int a[], int &n){
    cout<<"nhập số phần tử của mảng: ";
    cin>>n;
    for (int i=0;i<n;i++){
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
}
void xuatm(int a[], int n){
    cout<<"các phần tử của mảng là: "<<endl;
    for (int i=0;i<n;i++)
        cout<<"a["<<i<<"]= "<<a[i]<<endl;
}
float tbn(int a[], int n){
    float tbn1;
    int t=1;
    for (int i=0;i<n;i++)
        if (a[i]>0)
            t*=a[i];
    tbn1=pow(t,1*1.0/n);
    return tbn1;
}
// Bài 12 //
#include <iostream>
using namespace std;
#include <math.h>
void nhapm(int a[], int &n);
void xuatm(int a[], int n);
int kt(int a[], int n, int x);
int main(){
    int a[100],n,x;
    nhapm(a,n);
    cout<<"nhập số nguyên x: ";
    cin>>x;
    cout<<"số lần xuất hiện của "<<x<<" là: "<<kt(a,n,x)<<endl;
    return 0;
}
void nhapm(int a[], int &n){
    cout<<"nhập số phần tử của mảng: ";
    cin>>n;
    for (int i=0;i<n;i++){
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
}
void xuatm(int a[], int n){
    cout<<"các phần tử của mảng là: "<<endl;
    for (int i=0;i<n;i++)
        cout<<"a["<<i<<"]= "<<a[i]<<endl;
}
int kt(int a[], int n, int x){
    int dem=0;
    for (int i=0;i<n;i++)
        if (a[i]==x)
            dem++;
    return dem;
}
// Bài 13 //
#include <iostream>
using namespace std;
#include <math.h>
int ktsnt(int n);
void msnt(int n, int a[], int &na);
void xuly(int n, int a[], int na);
int main(){
    int a[100],n,na;
    cout<<"nhập n: ";
    cin>>n;
    xuly(n,a,na);
    return 0;
}
int ktsnt(int n){
    if (n<2)
        return 0;
    for (int i=2;i<=sqrt(n);i++)
        if (n%i==0)
            return 0;
    return 1;
}
void msnt(int n, int a[], int &na){
    na=0;
    for (int i=1;i<=n;i++)
        if (ktsnt(i))
            a[na++]=i;
}
void xuly(int n, int a[], int na){
    msnt(n,a,na);
    int dem=0;
    for (int i=0;i<na-1;i++)
        for (int j=i+1;j<na;j++)
            for (int k=0;k<na;k++)
                if ((pow(a[i],2)+pow(a[j],2))==a[k]){
                    cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
                    dem++;
                }
    if (dem==0)
        cout<<"-1"<<endl;
}
// Bài 14 //
#include <iostream>
using namespace std;
#include <math.h>
void nhapm(int a[], int &n);
void xuatm(int a[], int n);
void hv(int &a, int &b);
void sxtang(int a[], int n);
int main(){
    int a[100],n;
    nhapm(a,n);
    sxtang(a,n);
    xuatm(a,n);
    return 0;
}
void nhapm(int a[], int &n){
    cout<<"nhập số phần tử của mảng: ";
    cin>>n;
    for (int i=0;i<n;i++){
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
}
void xuatm(int a[], int n){
    cout<<"các phần tử của mảng là: "<<endl;
    for (int i=0;i<n;i++)
        cout<<a[i]<<" "<<endl;
}
void hv(int &a, int &b){
    int t=a;
    a=b;
    b=t;
}
void sxtang(int a[], int n){
    for (int i=0;i<n-1;i++)
        for (int j=i+1;j<n;j++)
            if (a[i]>a[j])
                hv(a[i],a[j]);
}
// Bài 15 //
a) int numberlist[20];
b) int numberlist[5]={1,2,3,4,5};
c) for (int i=0;i<5,i++)
    a[i]=b[i];
// Bài 16 //
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main(){
    int a[6]={0};
    srand(time(NULL));
    for (int i=1; i<=6000000; i++){
        int res =rand() % 6;
        if (res == 1)
            a[1]++;
        if (res == 2)
            a[2]++;
        if (res == 3)
            a[3]++;
        if (res == 4)
            a[4]++;
        if (res == 5)
            a[5]++;
        if (res == 0)
            a[0]++;
    }
    cout<<"số lần xuất hiện của số 1 là: " <<a[1]<<endl;
    cout<<"số lần xuất hiện của số 2 là: " <<a[2]<<endl;
    cout<<"số lần xuất hiện của số 3 là: " <<a[3]<<endl;
    cout<<"số lần xuất hiện của số 4 là: " <<a[4]<<endl;
    cout<<"số lần xuất hiện của số 5 là: " <<a[5]<<endl;
    cout<<"số lần xuất hiện của số 6 là: " <<a[0]<<endl;
}
// Bài 17 //
#include <math.h>
void nhapm(int a[][100], int m, int n);
void xuatm(int a[][100], int m, int n);
void tongmt(int a[][100], int b[][100], int c[][100], int m, int n);
int main(){
    int a[100][100], b[100][100], c[100][100], m, n;
    cout<<"nhập số hàng, cột: ";
    cin>>m>>n;
    nhapm(a,m,n);
    nhapm(b,m,n);
    tongmt(a,b,c,m,n);
    return 0;
}
void nhapm(int a[][100], int m, int n){
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++){
            cout<<"a["<<i<<"]["<<j<<"]= ";
            cin>>a[i][j];
        }
    cout<<endl;
}
void xuatm(int a[][100], int m, int n){
    cout<<"các phần tử của mảng: "<<endl;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
void tongmt(int a[][100], int b[][100], int c[][100], int m, int n){
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++)
            c[i][j]=a[i][j]+b[i][j];
    xuatm(c,m,n);
}
// Bài 18 //
#include <iostream>
using namespace std;
#include <math.h>
void nhapm(int a[][100], int m, int n);
void xuatm(int a[][100], int m, int n);
void tichmt(int a[][100], int b[][100], int c[][100], int m, int n, int p);
int main(){
    int a[100][100], b[100][100], c[100][100], m, n, p;
    cout<<"nhập các số m,n,p: ";
    cin>>m>>n>>p;
    nhapm(a,m,n);
    nhapm(b,n,p);
    tichmt(a,b,c,m,n,p);
    return 0;
}
void nhapm(int a[][100], int m, int n){
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++){
            cout<<"a["<<i<<"]["<<j<<"]= ";
            cin>>a[i][j];
        }
    cout<<endl;
}
void xuatm(int a[][100], int m, int n){
    cout<<"các phần tử của mảng: "<<endl;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
void tichmt(int a[][100], int b[][100], int c[][100], int m, int n, int p){
    int s;
    for (int i=0;i<m;i++)
        for (int j=0;j<p;j++){
            s=0;
            for(int k=0;k<n;k++)
                s+=a[i][k]*b[k][j];
            c[i][j]=s;
        }
    xuatm(c,m,p);
}
// Bài 19 //
#include <iostream>
using namespace std;
#include <math.h>
void nhapm(int a[][100], int &n);
void xuatm(int a[][100], int n);
int tongdcc(int a[][100], int n);
int main(){
    int a[100][100], b[100][100], c[100][100], m, n, p;
    nhapm(a,n);
    cout<<"tổng các phần tử trên đường chéo chính là: "<<tongdcc(a,n)<<endl;
    return 0;
}
void nhapm(int a[][100], int &n){
    cout<<"nhập số dòng, cột: ";
    cin>>n;
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++){
            cout<<"a["<<i<<"]["<<j<<"]= ";
            cin>>a[i][j];
        }
    cout<<endl;
}
void xuatm(int a[][100], int n){
    cout<<"các phần tử của mảng: "<<endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
int tongdcc(int a[][100], int n){
    int t=0;
    for (int i=0;i<n;i++)
        t+=a[i][i];
    return t;
}
// Bài 20 //
#include <iostream>
using namespace std;
#include <math.h>
void nhapm(int a[][100], int &n);
void xuatm(int a[][100], int n);
int tongdcp(int a[][100], int n);
int main(){
    int a[100][100], n;
    nhapm(a,n);
    cout<<"tổng các phần tử trên đường chéo phụ là: "<<tongdcp(a,n)<<endl;
    return 0;
}
void nhapm(int a[][100], int &n){
    cout<<"nhập số dòng, cột: ";
    cin>>n;
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++){
            cout<<"a["<<i<<"]["<<j<<"]= ";
            cin>>a[i][j];
        }
    cout<<endl;
}
void xuatm(int a[][100], int n){
    cout<<"các phần tử của mảng: "<<endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
int tongdcp(int a[][100], int n){
    int t=0;
    for (int i=0;i<n;i++)
        t+=a[i][n-1-i];
    return t;
}
// Bài 21 //
#include <iostream>
using namespace std;
#include <math.h>
void nhapm(int a[][100], int &m, int &n);
void xuatm(int a[][100], int m, int n);
void hv(int &a, int &b);
void xuly(int a[][100], int m, int n, int x, int y);
int main(){
    int a[100][100], b[100][100], m, n, x, y;
    nhapm(a,m,n);
    cout<<"nhập vào 2 cột cần đổi: ";
    cin>>x>>y;
    xuly(a,m,n,x,y);
    xuatm(a,m,n);
    return 0;
}
void nhapm(int a[][100], int &m, int &n){
    cout<<"nhập số dòng, cột: ";
    cin>>m>>n;
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++){
            cout<<"a["<<i<<"]["<<j<<"]= ";
            cin>>a[i][j];
        }
    cout<<endl;
}
void xuatm(int a[][100], int m, int n){
    cout<<"các phần tử của mảng: "<<endl;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
void hv(int &a, int &b){
    int t=a;
    a=b;
    b=t;
}
void xuly(int a[][100], int m, int n, int x, int y){
    for (int i=0;i<n;i++)
        hv(a[i][x],a[i][y]);
}
// Bài 22 //
#include <iostream>
using namespace std;
#include <math.h>
void nhapm(int a[][100], int &m, int &n);
void xuatm(int a[][100], int m, int n);
void hv(int &a, int &b);
void sxtcot(int a[][100], int m, int n);
int main(){
    int a[100][100], b[100][100], m, n;
    nhapm(a,m,n);
    sxtcot(a,m,n);
    xuatm(a,m,n);
    return 0;
}
void nhapm(int a[][100], int &m, int &n){
    cout<<"nhập số dòng, cột: ";
    cin>>m>>n;
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++){
            cout<<"a["<<i<<"]["<<j<<"]= ";
            cin>>a[i][j];
        }
    cout<<endl;
}
void xuatm(int a[][100], int m, int n){
    cout<<"các phần tử của mảng: "<<endl;
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
void hv(int &a, int &b){
    int t=a;
    a=b;
    b=t;
}
void sxtcot(int a[][100], int m, int n){
    for (int i=0;i<n;i++)
        for (int j=0;j<m-1;j++)
            for (int k=j+1;k<m;k++)
                if (a[j][i]>a[k][i])
                    hv(a[j][i],a[k][i]);
}
// Bài 23 //
#include <iostream>
using namespace std;
void nhapm(int a[][100], int &m, int &n);
void mind(int a[][100], int m, int n, int b[]);
void maxc(int a[][100], int m, int n, int c[]);
int main(){
    int a[100][100], b[100], c[100], m, n;
    nhapm(a,m,n);
    mind(a,m,n,b);
    maxc(a,m,n,c);
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++)
            if (a[i][j]==b[i] && b[i]==c[i])
                cout<<"giá trị nhỏ nhất trên dòng và lớn nhất trên cột là: "<<b[i]<<endl;
    return 0;
}
void nhapm(int a[][100], int &m, int &n){
    cout<<"nhập số dòng, cột: ";
    cin>>m>>n;
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++){
            cout<<"a["<<i<<"]["<<j<<"]= ";
            cin>>a[i][j];
        }
    cout<<endl;
}
void mind(int a[][100], int m, int n, int b[]){
    for (int i=0;i<m;i++){
        int min=a[i][0];
        for (int j=1;j<n;j++)
            if (a[i][j]<min)
                min=a[i][j];
        b[i]=min;
    }
}
void maxc(int a[][100], int m, int n, int c[]){
    for (int i=0;i<n;i++){
        int max=a[0][i];
        for (int j=1;j<m;j++)
            if (a[j][i]>max)
                max=a[j][i];
        c[i]=max;
    }
}
// Bài 24 //
#include <iostream>
#include <math.h>
using namespace std;
struct sp{
    int thuc;
    int ao;
};
void nhapsp(sp &n);
void xuatsp(sp n);
sp tongsp(sp n, sp m);
sp hieusp(sp n, sp m);
void xuatkq(sp n);
float dolonsp(sp n);
int main(){
    sp s1, s2, tong, hieu;
    nhapsp(s1);
    nhapsp(s2);
    tong=tongsp(s1,s2);
    cout<<"tổng 2 số phức là: ";
    xuatkq(tong);
    hieu=hieusp(s1,s2);
    cout<<"hiệu 2 số phức là: ";
    xuatkq(hieu);
    cout<<"độ lớn của 2 số phức là: "<<dolonsp(s1)<<" và "<<dolonsp(s2)<<endl;
}
void nhapsp(sp &n){
    cout<<"nhập phần thực: ";
    cin>>n.thuc;
    cout<<"nhập phần ảo: ";
    cin>>n.ao;
}
sp tongsp(sp n, sp m){
    sp t;
    t.thuc=n.thuc+m.thuc;
    t.ao=n.ao+m.ao;
    return t;
}
sp hieusp(sp n, sp m){
    sp h;
    h.thuc=n.thuc-m.thuc;
    h.ao=n.ao-m.ao;
    return h;
}
void xuatkq(sp n){
    if (n.ao>0 && n.thuc!=0)
        cout<<n.thuc<<"+"<<n.ao<<"i"<<endl;
    if (n.ao<0 && n.thuc!=0)
        cout<<n.thuc<<n.ao<<"i"<<endl;
    if (n.thuc==0)
        cout<<n.ao<<"i"<<endl;
    if (n.ao==0)
        cout<<n.thuc<<endl;
}
float dolonsp(sp n){
    int a=pow(n.thuc,2)+pow(n.ao,2);
    return sqrt(a);
}

// Bài 25 //
#include <iostream>
using namespace std;
struct toado{
    int x;
    int y;
};
void nhaptd(toado a[], int &n);
void demtd(toado a[], int n);
int main(){
    toado a[100];
    int n;
    nhaptd(a,n);
    demtd(a,n);
    return 0;
}
void nhaptd(toado a[], int &n){
    cout<<"nhập số điểm: ";
    cin>>n;
    for (int i=0;i<n;i++){
        cout<<"nhập x: ";
        cin>>a[i].x;
        cout<<"nhập y: ";
        cin>>a[i].y;
    }
    cout<<endl;
}
void demtd(toado a[], int n){
    int demt=0,demd=0,thuoc=0;
    for (int i=0;i<n;i++){
        if (a[i].y > ((-3*a[i].x-1)*1.0/4))
            demt++;
        if (a[i].y < ((-3*a[i].x-1)*1.0/4))
            demd++;
        if (a[i].y == ((-3*a[i].x-1)*1.0/4))
            thuoc++;
    }
    cout<<"số điểm nằm trên đường thẳng là: "<<demt<<endl;
    cout<<"số điểm nằm dưới đường thẳng là: "<<demd<<endl;
    cout<<"số điểm thuộc đường thẳng là: "<<thuoc<<endl;
}}

