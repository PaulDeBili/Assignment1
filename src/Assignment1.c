
// GPA Program
// Intermediate C



#define Arr_Length 10

double grades[Arr_Length] = {3.7, 2.2, 4.3, 3.4, 3.2, 2.8, 3.9, 2.6, 4.1, 3.0};

double calc_gpa() {
	double gpa = 0;
	int i;
	for (i=0; i < Arr_Length; i++) {
		gpa += grades[i];
	}
	return gpa / Arr_Length;
}

int main() {
	;
	printf("Hello my name is: %s and this is a small program to show the"
		" grades of my completed courses and my GPA\n", "Izzat");
	printf("Here are the grades of the courses I completed successfully: ");
	int i;
	for (i=0; i < Arr_Length; i++) {
		printf("%.1f ", grades[i]);
	}
	printf("\nMy overall GPA is: %.1f\n", calc_gpa());
	printf("The length of my array is: %d\n", Arr_Length);
	printf("The size of my array is: %d\n", sizeof(grades));

}
