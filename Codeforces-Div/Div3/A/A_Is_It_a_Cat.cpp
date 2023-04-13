#include<bits/stdc++.h>
using namespace std;
int main(){
	bool t=false,r=false,z=false,w=false;
	int n;
	cin>>n;
	int s;
	string f,m,e,o;
	while(n--){
       cin>>s;
       cin>>f;
       if((f.find('m'||'M')>s||f.find('m'||'M')<0)||(f.find('e'||'E')>s||f.find('e'||'E')<0)||(f.find('o'||'O')>s||f.find('o'||'O')<0)||(f.find('w'||'W')>s||f.find('w'||'W')<0))
       {cout<<"NO"<<endl;}
       else{
       m=f.substr(0,f.find('E'||'e'));
       f=f.substr(f.find('E'||'e'));
       e=f.substr(0,f.find('o'||'O'));
       f=f.substr(f.find('o'||'O'));
       o=f.substr(0,f.find('w'||'W'));
       f=f.substr(f.find('w'||'W'));
          for(int j=0;j<m.size();j++){
              if(m[j]=='m'||m[j]=='M')t=true;
              else {t=false;break;}
          }
          for(int l=0;l<e.size();l++){
              if(e[l]=='e'||e[l]=='E')r=true;
              else {r=false;break;}
          }
        for(int k=0;k<o.size();k++){
              if(o[k]=='o'||o[k]=='O')z=true;
              else {z=false;break;}
          }
        for(int x=0;x<f.size();x++){
              if(f[x]=='f'||f[x]=='f')w=true;
              else {w=false;break;}
          }
          if(t==true&&r==true&&z==true&&w==true){
          	cout<<"YES"<<endl;
          }
          else
          	cout<<"NO"<<endl;}
	}

}