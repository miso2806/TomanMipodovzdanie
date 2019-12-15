		#include <stdio.h>
		#include <string.h>
		#include <ctype.h>
		#define POCET    ('Z' - 'A' + 1)

	FILE*fr;
	//void na N
	void n(char *pt,int count)
	{     
	if ((fr = fopen("sifra.txt", "r")) == NULL) {
	    printf("Subor sifra.TXT sa nepodarilo otvorit\n");
	    return;
	}    
	      count=0;
	      while((*pt=fgetc(fr))!=EOF) {
	      	printf("%c",*pt);
		    count++;
	    }	
	    printf("\n");
	}
	
	
	//void na V
	  void v(char *pt, char *ut,  int count)
	{    
	     if ((pt)==NULL){
		  
      	 printf("Sprava nie je nacitana");
         return;
	  }
	    int i;
        *ut=*pt;
         for (i = 0; i < count; i++) 
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
      
      
	int main(void)
	{
	//nacitanie pola
	int count=0;
	int count1=0;
	char  povodny_text[1000]; 
	char  upraveny_text[1000];
	char *pt = &povodny_text[count];
	char *ut = &upraveny_text[count1];
	//nacitanie sifry
	FILE *fr = fopen("sifra.txt", "r");
	  int c, d;
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
	    if (d != 'n' && d != 'k' && d !='v' && d !='u' && d !='s' && d!='d' && d!='h' && d!='c' )
	     printf("\n");
	  }
	  return 0;
	}

 
