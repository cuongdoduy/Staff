#include <bits/stdc++.h>

using namespace std;
class NhanVien
{
private:
    string Name,Sex,Birth,Address,Idtax,DaySigned;
    int Id;
    static int Countt;
public:

    friend istream& operator >> (istream&,NhanVien &a);
    friend ostream& operator << (ostream&,NhanVien a);
    friend bool operator < (NhanVien a, NhanVien b);
    string getBirth()
    {
        return Birth;
    }
};

bool operator < (NhanVien a, NhanVien b)
{
    int m1=stoi(a.getBirth().substr(0,2)),m2=stoi(b.getBirth().substr(0,2));
    int d1=stoi(a.getBirth().substr(3,2)),d2=stoi(b.getBirth().substr(3,2));
    int y1=stoi(a.getBirth().substr(6,4)),y2=stoi(b.getBirth().substr(6,4));
    if (y1 < y2) return a.Birth < b.Birth;
    if (m1 < m2) return a.Birth < b.Birth;
    if (d1 < d2) return a.Birth < b.Birth;
}
int NhanVien::Countt=0 ;
istream& operator >> (istream&,NhanVien &a)
{
     a.Countt++;
    a.Id=a.Countt;
    cin.ignore();
    getline(cin,a.Name);
    cin>>a.Sex>>a.Birth;
    cin.ignore();
    getline(cin,a.Address);
    cin>>a.Idtax>>a.DaySigned;
}
ostream& operator << (ostream&,NhanVien a)
{
    cout<< setfill('0') << setw(5)<< a.Id;
    cout<<" "<<a.Name<<" "<<a.Sex<<" "<<a.Birth<<" "<<a.Address<<" "<<a.Idtax<<" "<<a.DaySigned<<endl;
     //int y1=stoi(a.getBirth().substr(6,4)); cout<<y1<<" ";
}
int main()
{
    NhanVien a[1000];
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
      sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
        cout<<a[i];
        cout<<"heello";
    return 0;
}
