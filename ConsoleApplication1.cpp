#include <stdio.h>
#include <math.h>
/*void main() {
	unsigned int a, b, c;
	printf("Enter the lengths of triangle\n");
	scanf_s("%d %d %d", &a, &b, &c);
	if ((a + b > c) && (a + c > b) && (b + c > a)) {
		if ((a == b) && (b == c))
			printf("Ravnost");
		else if ((a == b) || (b == c) || (a == c))
			printf("Ravnobedr");
		else if ((a * a + b * b == c * c) || (b * b + c * c == a * a) || (a * a + c * c == b * b))
			printf("Pryamoug");
		else
			printf("Proizvol");
	}
	else
		printf("Triangle doesn't exist");
}
*/
/*void main() {
	int a = 0, b = 0, c = 0;
	float disc = 0;
	printf("Enter coef\n");
	scanf_s("%d %d %d", &a, &b, &c);
	disc = b * b - 4 * a * c;
	if (disc > 0) {
		printf("%.3lf", (-b + sqrt(disc)) / 2 * a);
		printf("%.3lf", (-b - sqrt(disc)) / 2 * a);
	}
	else if (disc == 0)
		printf("%d", -b / 2 * a);
	else
		printf("Korney net");
}
*/
void main() {
	float h, w, t1 = 0.5, stenka = 0, p_dvp = 0.82, p_dsp = 0.8, mass;
	printf("Enter h, w\n");
	scanf_s("%f %f", &h, &w);
	stenka = p_dvp * h * w * t1;
	float d, t2 = 1.5, bokovina, krishki, doors, polki;
	printf("Enter d\n");
	scanf_s("%f", &d);
	bokovina = p_dsp * 2 * h * d * t2;
	krishki = p_dsp * 2 * w * d * t2;
	doors = p_dsp * 2 * h * w;
	polki = h / 40 * krishki / 2;
	mass = stenka + bokovina + krishki + doors + polki;
	printf("Massa = %f", mass/1000);
}
/*void main() {
	signed int x1, x2, y1, y2, figure;
	printf("Enter x1, x2, y1, y2\n");
	scanf_s("%d %d %d %d", &x1, &x2, &y1, &y2);
	printf("Enter your figure: 0 - King, 1 - Ferz, 2 - Ladiya, 3 - Slon, 4 - Kon\n");
	scanf_s("%d", figure);
	if ((figure > 4) || (x1 > 8 || x1 < 1) || (x2 > 8 || x2 < 1) || (y1 > 8 || y1 < 1) || (y2 > 8 || y2 < 1))
		printf("Figure doesn't exists");
	else {
		if (figure == 0) {
			if (x1 - 1 == x2 || y1 - 1 == y2 || x1 + 1 == x2 || y1 + 1 == y2) {
				printf("Mozhet");
			}
			else {
		}
	}
}
*/