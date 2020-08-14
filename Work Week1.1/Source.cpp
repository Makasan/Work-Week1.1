#include<stdio.h>
/*
	Score 0-49 Point Get Grade F
	Score 50-54 Point Get Grade D
	Score 55-59 Point Get Grade D+
	Score 60-64 Point Get Grade C
	Score 65-69 Point Get Grade C+
	Score 70-74 Point Get Grade B
	Score 75-79 Point Get Grade B+
	Score 80-100 Point Get Grade A
*/
int main()
{
	float score;
	scanf_s("%f", &score);
	if (score < 50 and score >= 0)
	{
		printf("Grade F");
	}
	else if (score >= 50 and score < 55)
	{
		printf("Grade D");
	}
	else if (score >= 55 and score < 60)
	{
		printf("Grade D+");
	}
	else if (score >= 60 and score < 65)
	{
		printf("Grade C");
	}
	else if (score >= 65 and score < 70)
	{
		printf("Grade C+");
	}
	else if (score >= 70 and score < 75)
	{
		printf("Grade B");
	}
	else if (score >= 75 and score < 80)
	{
		printf("Grade B+");
	}
	else if (score >= 80 and score <= 100)
	{
		printf("Grade A");
	}
	else if (score > 100 or score < 0)
	{
		printf("Error");
	}

	return 0;
}