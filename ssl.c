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
	


//Section where algorithm for second stage of labor is implemented


//bool ready = true;
//bool contraction = true;
int curPress, curPush;
int goal, totPushes, secs, retTime;
goal = 200;
secs = 5;
totPushes = 0;

//srand(time(NULL));

printf("\nStarting up data collection\n");
curPress = 20;
retTime = time(0) + secs;

while(totPushes < goal){
	while(time(0) < retTime){
		printf("Current stabalized pressure is: %d\n", curPress);
	}
	secs = 3;

	printf("Contractions are about to occur\n");
	printf("Enter your push strength:");
	scanf("%d", &curPush);
	printf("\nYour push strength was: %d\n", curPush);
	totPushes += curPush;
	retTime = time(0) + secs;	
}

if(totPushes >= goal){
	printf("\n\nYour total pushes reached the goal of: %d\n", goal);
	printf("Congratulations on your beautiful delivery!\n\n");
  }


return(0);
}
