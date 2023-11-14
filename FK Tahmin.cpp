#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int gizli;
	int tahmin;
	int yanit;
	cout<<"----- FK Tahmin'e Hosgeldiniz -----"<<endl<<endl;
	cout<<"Devam etmek icin herhangi bir tusa basip 'enter' deyin."<<endl<<endl;
	char bos ;
	cin>>bos;
	gizli = rand() % 100; 
	cout<<"Tahmin gir = ";
	cin>>tahmin;
	if(tahmin==gizli){
		cout<<"Tebrikler gizli sayiyi bildin"<<endl;
		cout<<"Gizli sayi"<<gizli<<endl;
		return 0;
	}
	else {
		cout<<endl<<"Yanlis cevap"<<endl<<endl;
		if(tahmin>gizli)
		cout<<"Baya yukseklerden ucuyon kanki"<<endl<<endl;
		else cout<<"Baya alcaklardan ucuyon kanki"<<endl<<endl;
	}
	cout<<"gizli sayiyi bilmek istermisin"<<endl<<endl;
	cout<<"evet icin 1 - hayir icin 2"<<endl;
	cin>>yanit;
	if(yanit==1) cout<<"gizli sayi="<<gizli<<endl;
    if(yanit==2) cout<<"program kapaniyor"<<endl;
    cout<<endl;
	return main();
	
	
}   
