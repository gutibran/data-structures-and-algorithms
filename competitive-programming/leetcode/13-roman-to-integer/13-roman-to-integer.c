/***********************************************************************
 * File: 13-roman-to-integer.c
 * Description: My solution to https://leetcode.com/problems/roman-to-integer/
 * Author: Brandon Gutierrez
 * Purpose:
 * Usage:
***********************************************************************/
#include <stdio.h>

int romanToInt(char* s) {
    int roman_numerals[128]; // declare an array to store the values of the roman numerals

    // initialize values within the roman numerals array
    // use the ASCII representation of each roman numeral as the index to store
    // the value associated with it
    roman_numerals[(int)'I'] = 1;
    roman_numerals[(int)'V'] = 5;
    roman_numerals[(int)'X'] = 10;
    roman_numerals[(int)'L'] = 50;
    roman_numerals[(int)'C'] = 100;
    roman_numerals[(int)'D'] = 500;
    roman_numerals[(int)'M'] = 1000;

    // iterate through the characters within the input array of characters
    // representing a string
    int integer = 0;
    for (char* roman_numeral = s; *roman_numeral != '\0'; roman_numeral++) {
        if (*(roman_numeral + 1) != '\0') {
            if (roman_numerals[(int)*roman_numeral] >=
                roman_numerals[(int)*(roman_numeral + 1)]) {
                integer += roman_numerals[(int)*roman_numeral];
            } else {
                integer -= roman_numerals[(int)*roman_numeral];
            }
        } else {
            integer += roman_numerals[(int)*roman_numeral];
        }
    }
    return integer;
}
