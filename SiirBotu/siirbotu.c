#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

int i,j,k,l,m,n=-1,o,temp,s; //s= bir dizedeki kelime sayisi

char *ozne[] = {"Ben","Sen","O"};
char *ben_yuklem[] = {"giderdim","anlayamadim","dusundum","korktum","agladim","guluyordum","sevmistim","yalniz kaldim","bilmiyordum","sustum","goz kirptim","guldum","seslendim","sabrettim","severdim","karardim","yalnizdim","agladim","dusundum","konusmadim"};
char *sen_yuklem[] = {"giderdin","anlayamadin","dundun","korktun","agladin","guluyordun","sevmistin","yalniz kaldin","bilmiyordun","sustun","goz kirptin","guldun","seslendin","sabrettin","severdin","karardin","yalnizdin","agladin","dusundun","konusmadin"};
char *o_yuklem[] = {"giderdi","anlayamadi","dusundu","korktu","agladi","guluyordu","sevmisti","yalniz kaldi","bilmiyordu","sustu","goz kirpti","guldu","seslendi","sabretti","anlamadi","severdi","karardi","yalnizdi","agladi","dusundu","konusmadi"};
char *kelime[] = {"beyaz","karanlik","ask","sokak","ruya","son","derin","siyah","golge","yagmur","gul","bulbul","kararsiz","irmak","duman","sevgi","hayat","ucurum","deniz","dag","mazi","cicek","yorgun","sessiz","nefes","uyku","keder","derya","sabah","gonul","yol","insan","gozler","umut","dusunce","nihayet","renksiz","kalp","renkli","gece","ay","gunes","dunya","ses","gulen yuzun","gulum","seviyorum seni","sana mecburum","sokak lambaları","sen yoksun","sevgilim","saadet","gozlerin","sevda","uykusuz","goz goze","yalnizligim","sokakta","bir kiz","mutluluk","paramparca","islak","usudum","ay","ruzgar","yorgun","aksam ustu","kadinim","kirmizi","cicek","opuyorum","sonsuzluk"};



srand(time(NULL));
l = rand()%3 + 2;
temp = rand()%4 + 2;
s =temp;
for(i=0;i<2;i++)
{
	for(j=0;j<4;j++)
	{
		m = rand()%2;
		o = rand()%2;
			
		if(m)
		{
			n = rand()%3;
			printf("%s ",ozne[n]);
		}
		else
		{
			k = rand()%72;
			printf("%s ",kelime[k]);
		}
		
		for(;s-2>0;s--)
		{
			k = rand()%72;
			printf("%s ",kelime[k]);
		}
		s= temp;
		
		if(o)
		{
			if(!m)
			{
				n = rand()%3;
			}
		
			k = rand()%20;
			if(n==0)printf("%s ",ben_yuklem[k]);
			if(n==1)printf("%s ",sen_yuklem[k]);
			if(n==2)printf("%s ",o_yuklem[k]);
			
		}	
		else
		{
			k = rand()%72;
			printf("%s ",kelime[k]);
		}
		printf("\n");
	}
	printf("\n");
}
	return 0;
}