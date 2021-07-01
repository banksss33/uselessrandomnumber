//the program generate random number
//if you input number , (number == randomnumber) you correct
//if input < randnumber output = "Your value is smaller"
//if input > randnumber output = "Your value is bigger"
#include <stdio.h>
#include <time.h>

int main()
{
	int win = 0;
	int count = 1;
	int inp;
	while (count <= 10)
	{
		int randnum = srand()%100;
		printf("[%d] Enter Value 0-99: ",count);
		scanf("%d",&inp); //Get number from user
		if (inp > randnum)
		
		{
			printf("Your value is bigger\n");
		}
		else if (inp < randnum)
		{
			printf("Your value is smaller\n");
		}
		else
		{
			printf("correct\n");
			printf("Your Win!\n");
			win = 1;
			break;
		}
		count++;
	}
	if (win == 0)
	{
		printf("You lose!\n");
	}
}
