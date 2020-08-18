#include <stdio.h>

int main() {

	FILE *fr1;
  FILE *fr2;

	if ((fr1 = fopen("input1.txt", "r")) == NULL) {
		printf("Soubor 1 se nepodarilo otevrit");
		return(1);
	}

  if ((fr2 = fopen("input2.txt", "r")) == NULL) {
		printf("Soubor 2 se nepodarilo otevrit");
		return(1);
	}

  int c1;
  int c2;

  int n = 0;
  int m = 0;

  while((c1 = getc(fr1)) != EOF && (c2 = getc(fr2)) != EOF){
    
    if(c1 != c2){
      n++;
    }
    else{
      m++;
    }
  }

  if(n == 0){
    printf("Soubory jsou shodne\n");
  }
  else{
    printf("Soubory se lisi v %d znacich\n", n);
  }

  if (fclose(fr1) == EOF) {
		printf("Soubor 1 se nepodarilo zavrit");
		return(1);
	}
	
	if (fclose(fr2) == EOF) {
		printf("Soubor 2 se nepodarilo zavrit");
		return(1);
	}
}
