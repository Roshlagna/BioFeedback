#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){

char c;
//First Stage of Labor Info and Data
printf("\nHere during the FSL I will just be monitoring the expulsive force of your uterine contractions with a tocometer just to get data that I can attribute to the second stage of labor (SSL).\n\n\n"); 

/*
How the sample SSL will work:
1. Random amounts of (pressure) data will be read every second
2. If the data reaches a contraction zone, expect to receive a slight increase in pressure; parabolic in nature.

Steps to do this:
1. Fill an array with random numbers representing the incoming data from the pressure sensor. **Can do a while there is incoming data**
2. Set random contractions to be in within a random amount of time ranging from (3-5) minutes and lasting about a minute. We want 
*/

printf("\nSecond Stage of Labor Delivery Tool\n\n");

printf("Press ENTER when the cervix is fully dialated and ready to enter the second stage of labor\n\n");

printf("Things to expect:\n1.) The second stage of labor will last anywhere from 20 minutes to 2 hours depending on the strength of your pushes. \n2.) Contractions last between 45-90 seconds and you will be advised to push at intervals of about 3-5 minutes.\n3.) By recording data throughout this process, the SSL software will be more accurate when informing you when the next contractions may hit and when to push. \n4.) The best time to push are at the peak of your contraction so throughout the SSL I will try to inform you when that is.\n\nThese contractions can be described as the baby trying to fight their way out. \nThey're fighting... why shouldn't you!?\n\n\n");

printf("\nPress ENTER to proceed:");
c = getchar();
	
/*	Questions to think about for pressure sensor

1.) The normalized average pressure is about 20 Hz, does it change depending on how far along the baby is?

2.) 

*/

//Section where algorithm for second stage of labor is implemented


//bool ready = true;
//bool contraction = true;
int curPress;
int curPush1[200], curPush2[200], curPush3[200];
int goal, totPushes, secs, retTime;
int j=0;
int i=0;
srand(time(NULL));
goal = 800;
secs = 3;
totPushes = 0;



printf("\nStarting up data collection\n");
curPress = 20;
retTime = time(0) + secs;

while(totPushes < goal){
	while(time(0) < retTime){
		printf("Current stabalized pressure is: %d\n", curPress);
		printf("Current stabalized pressure is: %d\n", curPress-1);
		printf("Current stabalized pressure is: %d\n", curPress-2);
		printf("Current stabalized pressure is: %d\n", curPress-3);
		printf("Current stabalized pressure is: %d\n", curPress-4);
		printf("Current stabalized pressure is: %d\n", curPress-5);
		printf("Current stabalized pressure is: %d\n", curPress-4);
		printf("Current stabalized pressure is: %d\n", curPress-3);
		printf("Current stabalized pressure is: %d\n", curPress-2);
		printf("Current stabalized pressure is: %d\n", curPress-1);
	}
	secs = rand() % 8 + 1;
	
	
	printf("Contractions are about to occur\n");
	printf("\nEnter your first push strength:");
	scanf("%d", &curPush1[i]);

	printf("\nEnter your second push strength:");
	scanf("%d", &curPush2[i]);

	if(curPush2[i] < curPush1[i]){
		printf("I believe in you! You got this\n\n");
	}
	printf("\nEnter your third push strength:");
	scanf("%d", &curPush3[i]);
	totPushes += curPush1[i]+curPush2[i]+curPush3[i];
	//printf("\nYour push strength was: %d\n", curPush[i]);
	
	i++;
	j++;
	retTime = time(0) + secs;	
}

if(totPushes >= goal){
	printf("\n\nYour total pushes reached the goal of: %d\n", goal);
	printf("Congratulations on your beautiful delivery!\n\n");
  }

printf("The number of sets were: %d\n\n", j);
for(i=0; i<j; i++){
	printf("Your first push in set %d was: %d\n", i, curPush1[i]);
	printf("Your second push in set %d was: %d\n", i, curPush2[i]);
	printf("Your third push in set %d was: %d\n\n\n", i, curPush3[i]);
}

return(0);
}
