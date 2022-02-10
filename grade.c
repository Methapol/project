#include <stdio.h>

// Function Declarations
	int grade (int score);
	int sum_score (int help_score ,int midterm_score ,int final_score);
int main (void)
{
// Local Declarations
	int help_score;
	int help_scoremax;
	int midterm_score;
	int midterm_scoremax;
	int final_score;
	int final_scoremax;
	int total_score;
	int grade_TS;

// Statements
	printf("help_scoremax: ");
	scanf("%d",&help_scoremax);
	
	printf("midterm_scoremax: ");
	scanf("%d",&midterm_scoremax);
	
	printf("final_scoremax: ");
	scanf("%d",&final_scoremax);
	
	printf("help_score: ");
	scanf("%d",&help_score);
	
	while(help_score > help_scoremax)
	{
		printf("pls try again\n");
		printf("help_score: ");
		scanf("%d",&help_score);
	}
	printf("midterm_score: ");
	scanf("%d",&midterm_score);
	while(midterm_score > midterm_scoremax)
	{
		printf("pls try again\n");
		printf("midterm_score: ");
		scanf("%d",&midterm_score);
	}
	
	printf("final_score: ");
	scanf("%d",&final_score);
	while(final_score > final_scoremax)
	{
		printf("pls try again\n");
		printf("final_score: ");
		scanf("%d",&final_score);
	}
	
	total_score = sum_score (help_score, midterm_score, final_score);
	
	grade_TS	= grade(total_score);
	
	printf("grade: %c, %d", grade_TS,total_score);
}	// main




int grade (int score)
{
// Local Declarations
	char grade;	
// Statements
	if (score >= 80 && score <= 100)
	{
		grade='A';
	}	//if
	else if (score>=70 && score<80)
	{
		grade='B';
	}
	else if (score>=60 && score<70)
	{
		grade='C';
	}
	else if (score>=50 && score<60)
	{
		grade='D';
	}
	else if (score<50)
	{
		grade='F';
	}
	else
	{
		printf("Error");
	}
	return (grade);
}





int sum_score (int help_score ,int midterm_score ,int final_score)
{
// Statements
	return (help_score + midterm_score + final_score);	
}

