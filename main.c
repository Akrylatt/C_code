#include <stdio.h>

int main() {

	FILE *fr;
  FILE *fw;

	if ((fr = fopen("input.txt", "r")) == NULL) {
		printf("Soubor se nepodarilo otevrit");
		return(1);
	}

  fw = fopen("output.txt", "w");

  int c;
  int n = 0;

  while((c = getc(fr)) != EOF){
    if(c == '\n'){
      fprintf(fw, "\n%d\n", n);
      n = 0;
    }
    else{
      fprintf(fw, "%c", c);
      n++;
    }
    
   /* n = 0;
    while((c = getc(fr)) != 13){
      fprintf(fw, "%c", c);
      n++;
    }
    fprintf(fw, "\n%d\n", n);*/
  }


  if (fclose(fw) == EOF) {
		printf("Soubor se nepodarilo zavrit");
		return(1);
	}
	
	if (fclose(fr) == EOF) {
		printf("Soubor se nepodarilo zavrit");
		return(1);
	}


		
}