#include <stdio.h>

int main()
{
  
	int appleQuantity;
	double applePrice = 1.49;
	double appleReview;
	int appleReviewDisplay;
	const char appleLocation = 'F';

	appleQuantity = 1;
	appleReview = 82.5;
	appleReviewDisplay = appleReview;

	if(appleQuantity < 10)
	{
		printf("Sale on apples today, today only they are: $%.2f\n", applePrice * .9);
	}

	//tasks 1 and 2
	appleReview = 823;
	int reviewers = 9;
	appleReview /= reviewers;

	int new_review = 52;
	int old_total = 823;
	appleReview = (old_total + new_review) / 10;

	appleReviewDisplay = appleReview;

	int dayOfWeek = 0;
	int x = 55; //where x represents the passed days
	dayOfWeek += x; //same as dayOfWeek = dayOfWeek + x
 


	if (dayOfWeek % 7 == 3 || appleQuantity < 10)

	// Put all your code above this and if you declare your variables using the given names and types there is no need to change any of the code below.
		printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!", applePrice, appleQuantity, appleLocation, appleReviewDisplay);

}
