/*-------------------------------------------
// Course: COMP 150
// Last Name: Singh
// First Name: Rajveer
// Student ID: 300202522
// 
// File: distanceSlope31_SinghRS
//
// Summary: Reads two x-y coordinates as 4 floats (x1,y1,x2,y2) and computes the distance between
			them and the slope of the line. Also outputs if the line is vertical, horizontal or neither.        	           
//
*-------------------------------------------*/

#import <iostream>
#import <cmath>
#import <iomanip>
using namespace std;

int main()
{
	// Initializing x-y points and uncalculated distance, slope,and slope denominator 
	float x1, y1, x2, y2, distance, slope, slope_denominator;
	
	// Reading input to store data for x-y points
	cout << "Enter x1: ";
	cin >> x1;
	cout << "Enter y1: ";
	cin >> y1;
	cout << "Enter x2: ";
	cin >> x2;
	cout << "Enter y2: ";
	cin >> y2;
	
	// Calculating distance
	distance = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
	
	// Calculating slope
	slope_denominator = (x1-x2);	// Used to determine if denominator will be 0, which results in an undefined slope value 
	slope = (y1-y2) / slope_denominator; 
	
	// Outputting distance 
	cout << fixed << setprecision(2) << "\nThe distance is " << distance << endl;
	
	// Outputting if the line is horizontal, vertical, or neither, depending on the slope value 
	if (slope_denominator == 0.0)	// Undefined slope
	{
		cout << "The line is vertical.\n";
	}
	else if (slope == 0.0)
	{
		cout << "The line is horizontal.\n";
	}
	else
	{
		cout << fixed << setprecision(2) << "The slope is " << slope << ", neither vertical or horizontal.\n";
	}
	
	return 0;  
}
