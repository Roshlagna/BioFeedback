#include <stdio.h>
#include <string.h>
#include <time.h>

int main(){

int fp, sp, tp;
int totalOfFirst;
//First Stage of Labor Info and Data
printf("\nHere during the FSL I will just be monitoring the expulsive force of your uterine contractions with a tocometer just to get data that I can attribute to the second stage of labor (SSL).\n\n\n\n"); 

/*
How the sample SSL will work:
1. Random amounts of (pressure) data will be read every second
2. If the data reaches a contraction zone, expect to receive a slight increase in pressure; parabolic in nature.

Steps to do this:
1. Fill an array with random numbers representing the incoming data from the pressure sensor. **Can do a while there is incoming data**
2. Set random contractions to be in within a random amount of time ranging from (3-5) minutes and lasting about a minute. We want 

*/
printf("\nSecond Stage of Labor Delivery Tool\n\n");

printf("Press START when the cervix is fully dialated and ready to enter the second stage of labor\n\n");

printf("Things to expect:\n1.) Contractions may occur around every 3-5 minutes. Throughout the SSL our software will be more accurate when informing you when the next contractions may hit.\nThese contractions can be described as the baby trying to fight their way out. He's fighting... why shouldn't you!?\nThe best time to push are at the peak of your contraction so throughout the SSL I will try to inform you when that is");
printf("Enter the first push time: ");
scanf("%d", &fp);

printf("\nEnter the second push time: ");
scanf("%d", &sp);

printf("\nEnter the third push time: ");
scanf("%d", &tp);
totalOfFirst = (fp+sp+tp)/3;
printf("\nYour average starting out pushes were: %d", totalOfFirst);
printf("\n\nIf you can beat that just for a little you will have a healthy baby in no time. You got this!");


return 0;
}
