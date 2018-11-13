#include <stdio.h>
#include <math.h>

#define pi 3.141592

void main() {
	
	double x, y, angle;

	while(1){
		scanf("%lf %lf", &x, &y);
		if(x == 0){ printf("Divide by 0 error!\n"); return;}

		angle = atan(y/x);
		angle = angle * 180 / pi;

		if(y < 0){
			angle += 180;
			if(x > 0) angle += 180;
		}
		else if(x < 0) angle += 180;

		printf("%4.2lf\n", angle);

	}

	while(1);
}
