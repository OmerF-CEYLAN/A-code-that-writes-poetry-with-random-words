#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(int argc, char *argv[]) {

int a,b,i,j,k,l,m,kita_sayisi;

char *ozne[]= {"ben"};
char *belirtili_nesne[]= {"seni","gozlerini","kadinimi","sevdami","hasretimi"};
char *gecisli_fiil[]= {"severim","severdim","bilirim","ozlerim","ozlerdim","gorurdum","beklerim","beklerdim","hissederim","merak ederim","merak ederdim","",""};
char *zarf_tumleci[]= {"cok","oldukca","ne kadar cok","sebepsizce","tarifsiz"};
char *isim_tamlamasi[]= {"gulen yuzu","sokak lambalari","senin gozleri","ipeksi saclari","ask istirabi","gecenin karanligi"};
char *belgisiz_zamir[]= {"o","bazi","bir kac","kimi"};
char *kelime[] = {"karanlik","ask","sokak","ruya","son","golge","yagmur","gul","irmak","duman","sevgi","hayat","ucurum","deniz","mazi","cicek","nefes","uyku","keder","derya","sabah","gonul","yol","insan","gozler","umut","dusunce","kalp","gece","ay","gunes","dunya","ses","sevgilim","saadet","gozlerin","sevda","goz goze","yalnizligim","bir kiz","mutluluk","paramparca","ruzgar","aksam ustu","kadinim","cicek","sonsuzluk"};


srand(time(NULL));
kita_sayisi= rand()%4 + 1;

while(kita_sayisi--)
{
for(b=0;b<4;b++)
{
a= rand()%15 + 1;

	i= rand()%5;
	j= rand()%5;
	k= rand()%5;
	l= rand()%5;
	m= rand()%5;

switch(a)
{
	
		case 1:
		printf("%s %s %s\n",ozne[0],belirtili_nesne[j],gecisli_fiil[k]);
		break;
		
		case 2:
		printf("%s %s %s\n",ozne[0],belirtili_nesne[j],gecisli_fiil[k]);
		break;
		
		case 3:	
		printf("%s %s %s %s\n",ozne[0],belirtili_nesne[j],zarf_tumleci[k],gecisli_fiil[l]);
		break;
		
		case 4:	
		printf("%s %s %s %s\n",belirtili_nesne[i],ozne[0],zarf_tumleci[k],gecisli_fiil[l]);
		break;
		
		case 5:	
		printf("%s %s %s %s\n",belirtili_nesne[i],zarf_tumleci[j],gecisli_fiil[k],ozne[0]);
		break;
		
		case 6:
		printf("%s %sni %s\n",ozne[0],isim_tamlamasi[j],gecisli_fiil[k]);
		break;
		
		case 7:
		printf("%s %sni %s %s\n",ozne[0],isim_tamlamasi[j],zarf_tumleci[k],gecisli_fiil[l]);
		break;
		
		case 8:
		printf("%s %sni %s %s\n",ozne[0],isim_tamlamasi,zarf_tumleci[j],gecisli_fiil[k]);
		break;			
		
		case 9:
		printf("%s %s %sni %s\n",ozne[0],belgisiz_zamir[j],isim_tamlamasi[k],zarf_tumleci[l],gecisli_fiil[m]);
		break;	
		
		case 10:
		printf("%s %sni %s %s %s\n",belgisiz_zamir[i],isim_tamlamasi[j],zarf_tumleci[k],gecisli_fiil[l],ozne[0]);
		break;	
		
		case 11:
		printf("%s %sni %s %s\n",belgisiz_zamir[i],isim_tamlamasi[j],zarf_tumleci[k],gecisli_fiil[l]);
		break;	
				
		case 12:
		printf("%s %sni %s %s %s\n",belgisiz_zamir[i],isim_tamlamasi[j],zarf_tumleci[k],gecisli_fiil[l],ozne[0]);
		break;	
		
		case 13:
		printf("%s %sni %s %s %s\n",belgisiz_zamir[i],isim_tamlamasi[j],zarf_tumleci[k],gecisli_fiil[l]);
		break;					
		
		case 14:
		i= rand()%60;
		j= rand()%60;
		k= rand()%60;
		l= rand()%60;
		m= rand()%60;
		printf("%s ,%s ,%s ,%s...\n",kelime[i],kelime[j],kelime[k],kelime[l]);
		break;	
		
		case 15:
		i= rand()%60;
		j= rand()%60;
		k= rand()%60;
		l= rand()%6;
		m= rand()%6;
		printf("%s ,%s ,%s ,%s...\n",kelime[i],kelime[j],kelime[k],isim_tamlamasi[l]);

		break;	
		fflush(0);
}			
}
}
	return 0;
}