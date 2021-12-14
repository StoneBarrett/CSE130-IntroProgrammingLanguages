// Program: Currency Conversion Table
// Description: This program will accept a user input number
// and return a table of equivalent values in foreign currencies, including: 
// United States Dollar, Great Britain Pound Sterling, Canadian Dollar, European Euro, Australian Dollar, and Japanese Yen.
// All exchange values are taken from Google currency conversion as of January 24, 2019.
// Author: Stone Barrett
// Email: scbarr04@louisville.edu
// Lab Section: 02
// Date: 1/24/19

#include <stdio.h>

int main()
{
	
	// USD to foreign
	
	const float usdtogbp = .77;
	const float usdtocad = 1.34;
	const float usdtoeur = .88;
	const float usdtoaud = 1.41;
	const float usdtojpy = 109.57;
	
	
	// GBP to foreign
	
	const float gbptousd = 1.31;
	const float gbptocad = 1.75;
	const float gbptoeur = 1.16;
	const float gbptoaud = 1.84;
	const float gbptojpy = 143.16;
	
	
	// CAD to foreign
	
	const float cadtousd = .75;
	const float cadtogbp = .57;
	const float cadtoeur = .66;
	const float cadtoaud = 1.06;
	const float cadtojpy = 82.03;
	
	
	// EUR to foreign
	
	const float eurtousd = 1.13;
	const float eurtogbp = .87;
	const float eurtocad = 1.51;
	const float eurtoaud = 1.6;
	const float eurtojpy = 123.81;
	
	
	// AUD to foreign
	
	const float audtousd = .71;
	const float audtogbp = .54;
	const float audtocad = .95;
	const float audtoeur = .63;
	const float audtojpy = 77.57;
	
	
	// JPY to foreign
	
	const float jpytousd = .0091;
	const float jpytogbp = .007;
	const float jpytocad = .012;
	const float jpytoeur = .0081;
	const float jpytoaud = .013;
	
	
	// Intro
	
	printf("\n\t Stone's Currency Conversion Chart\n");
	printf("Hello! Please enter a value you'd like to see converted.\n");
	
	
	// User input
	
	float userValue = 0;
	scanf("%f", &userValue);
	
	
	// Table 
	
	printf("\n\n\t\t\t\t\tTable\n");
	printf("\n\tUSD\t\tGBP\t\tCAD\t\tEUR\t\tAUD\t\tJPY\n");
	printf("\n [%12.2f]  [%12.2f]   [%12.2f]    [%12.2f]   [%12.2f]    [%12.2f]", userValue, (userValue * usdtogbp), (userValue * usdtocad), (userValue * usdtoeur), (userValue * usdtoaud), (userValue * usdtojpy));
    printf("\n [%12.2f]  [%12.2f]   [%12.2f]    [%12.2f]   [%12.2f]    [%12.2f]", (userValue * gbptousd), userValue, (userValue * gbptocad), (userValue * gbptoeur), (userValue * gbptoaud), (userValue * gbptojpy));
	printf("\n [%12.2f]  [%12.2f]   [%12.2f]    [%12.2f]   [%12.2f]    [%12.2f]", (userValue * cadtousd), (userValue * cadtogbp), userValue, (userValue * cadtoeur), (userValue * cadtoaud), (userValue * cadtojpy));
	printf("\n [%12.2f]  [%12.2f]   [%12.2f]    [%12.2f]   [%12.2f]    [%12.2f]", (userValue * eurtousd), (userValue * eurtogbp), (userValue * eurtocad), userValue, (userValue * eurtoaud), (userValue * eurtojpy));
	printf("\n [%12.2f]  [%12.2f]   [%12.2f]    [%12.2f]   [%12.2f]    [%12.2f]", (userValue * audtousd), (userValue * audtogbp), (userValue * audtocad), (userValue * audtoeur), userValue, (userValue * audtojpy));
    printf("\n [%12.2f]  [%12.2f]   [%12.2f]    [%12.2f]   [%12.2f]    [%12.2f]", (userValue * jpytousd), (userValue * jpytogbp), (userValue * jpytocad), (userValue * jpytoeur), (userValue * jpytoaud), userValue);

	return 0;
}
