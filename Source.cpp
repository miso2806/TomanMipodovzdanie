		#include <stdio.h>
		#include <string.h>
		#include <ctype.h>
		#define POCET    ('Z' - 'A' + 1)

	FILE*fr;
	//vykonanie funkcie N pri vstupe pismenka n nacita sa pole s povodnym textom 
void n(char *pt,int count) {  
	//ak sa nepodari otvorit subor sifra.txt tak sa funkcia automaticky zastavi a vypise sa ze sa subor nepodarilo otvorit 
	if ((fr = fopen("sifra.txt", "r")) == NULL) { 
		printf("Subor sifra.TXT sa nepodarilo otvorit\n");
		return; 
	} 
	//ak sa subor otvori funkcia prebehne a do pola sa nacita retazec ktory je v subore. 
	count=0;
	while((*pt=fgetc(fr))!=EOF) 
	{ printf("%c",*pt); 
	 count++; } 
	printf("\n"); }
	
	
	//vykonanie funkcie V pri vstupe pismenka v sa vypise pole 
	  void v(char *pt, char *ut,  int count)
	{    //ak je pole pt prazdne tak sa vypise sprava nebola nacitana
	     if ((pt)==NULL){
		  
      	 printf("Sprava nie je nacitana");
         return;
	  }
          //sprava sa premiestni z povodneho pola do upraveneho pola
	    int i;
        *ut=*pt;
         for (i = 0; i < count; i++) 
         //sprava sa zapise do upraveneho pola
         putchar(*ut);
         printf("\n");

}

      void u(char *pt, char *ut,int count)
      {
      	if ((pt)==NULL){
		  
      	 printf("Sprava nie je nacitana");
         return;
	  }
      	int c, i;
	    int pole[POCET];
	    
	    for (i = 0; i < count; i++)
         ut = 0;
         for (i = 0; i < count; i++)
      	  while ((c = *pt)) {
	        if (isupper(c))
		      putchar(*ut);
                   
      }
	  }
      
      void s(char *ut,int count1){
      	if ((ut)==NULL){
		  
      	 printf("Nie je k dispozicii upravena sprava");
         return;
	  }
      	int i;
      	for (i=0;i<count1;i++)
      	 printf("%c",ut);
      	 printf("\n");
	  }
	  
	  
	  void d(pt){
	  	if ((pt)==NULL){
		  
      	 printf("Sprava nie je nacitana");
         return;
	  }
	   printf("Zadaj cislo k:\n")
	   int k;
	      while(k>=1 && k<=100){
	    	scanf("%d",&k);
	    	if (k<1 && k>100){
	    	 printf("zadal si nespravne 'k'\n");
	    }
	    else{
	    	break
		} 	 
		}
	  printf("zadal si spravne k");
	  
	  }
	  
	  void h(char *ut){
	  	if ((ut)==NULL){
		  
      	 printf("Nie je k dispozicii upravena sprava");
         return;
	  }
	   int i,c;
	  int pole[POCET];
	  for (i = 0; i < POCET; i++)
      pole[i] = 0;   
       while ((c = *ut)) {
	        if (isupper(c))
	        putchar(c);
    }
    for (i = 0; i < POCET; i++) {
      printf("%c - %2d\t", i + 'A', pole[i]); 
      for (c = 0; c < pole[i]; c++) { 
        putchar('*');                 
      }
      putchar('\n'); 
}
	  	
	  	
	  	
	  }
      
      
	 //inicializovanie mainu   
	int main(void)
	{
	//nacitanie pola
	int count=0;
	int count1=0;
	char  povodny_text[1000]; 
	char  upraveny_text[1000];
	char *pt = &povodny_text[count];
	char *ut = &upraveny_text[count1];
	//nacitanie suboru
	FILE *fr = fopen("sifra.txt", "r");
	  int c, d;
    // nacitanie pismenka ktore vypiseme do pola podla typu pismenka sa vykona akcia
	  for (;;) {
	    d = getchar();
	    while (getchar() != '\n');
	    if (d == 'n') {
	      n(pt,count);	
	}
		if (d == 'v') {
		memcpy(ut, pt, sizeof(count));
			for (int i=0;i<count;i++)
			  printf("%c",*ut);
			  printf("\n");
		}
		if (d == 'u'){
		u(pt,ut,count);
		}
		if (d == 's'){
		  s(ut,count1);
		}
	    if (d == 'd'){
		  d(pt);
		}
		if (d == 'h'){
		  h(ut);
		}
		if (d == 'c'){
		 
		}
	    if (d == 'k')
	      break;
        //ak sa nacita ine pismeno tak sa nevypise nic len medzera
	    if (d != 'n' && d != 'k' && d !='v' && d !='u' && d !='s' && d!='d' && d!='h' && d!='c' )
	     printf("\n");
	  }
	  return 0;
	}
 
