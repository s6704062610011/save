#include <stdio.h>
float InputDouble ( ) {
float x;
	printf ( "\nInput real value : " );
	scanf ( "%f", &x );
	return x ;
}
	float SumDouble ( float x, float y ) {
	return x + y ;
}
	void PrintOut ( float x ) {
	printf ( "\n Result of sum is : %.2f", x );
}
	int main ( ) {
	float a1, a2, sumVal;
	a1 = InputDouble( );
	fflush(stdin);
	a2 = InputDouble( );
	sumVal = SumDouble ( a1, a2 );
	PrintOut ( sumVal );
return 0;
}
