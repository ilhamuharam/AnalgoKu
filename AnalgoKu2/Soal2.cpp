/*	Nama : Ilham Muharam
	NPM	 : 140810170046
	Deskripsi : Tugas 2
*/
#include <iostream>
using namespace std;

main(){

int i, x[99],y,index,n;
bool found=false;
cout<<"Masukkan Jumlah Array : ";cin>>n;
i=1;
while (i<=n){
	cout<<"Input bilangan:";cin>> x[i];
	i++;
}
i=1;
cout<<"Input Bilangan Yang Dicari : ";cin>>y;
	while(i<n && found==false)
	{
		if (x[i] == y)
		{
			found=true;
		}
		else
			i=i+1;
	}
if (found==true)
	index=i;
else
	index=0;
cout<<"Bilangan berada di index ke-"<<index;
}
