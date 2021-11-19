# include  <time.h>
# include  <stdlib.h>
# include  <stdio.h>
# include  "generator.h"




int main(){
        
    clock_t start, stop;
    double runTime =0.0;  
    FILE *f;
    //initializes clock function with variables

    f= fopen("Spam.txt", "w");
    //opens spam.txt

   
    start = clock();
    //gets start time from clock

   
    generate (f);
    //calls generate function from generate.c

    stop = clock();
    //gets stop time from clock

    fclose(f);
    //closes file

    runTime =(double)stop-start/ CLOCKS_PER_SEC;
    //calculates total runtime using stop and start values

    printf("Program run in %f milliseconds\n\n",runTime);
}

