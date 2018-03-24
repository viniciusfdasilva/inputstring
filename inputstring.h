/* Library for reading strings
 *
 * Copyright (C) 2018 Vinicius Francisco da Silva All Rights Reserved.
 * Written by Vinicius Francisco da Silva (vinicius.silva.1046664@sga.pucminas.br - vinicius.silva.programmer@gmail.com)
 * - Derived from biblioteca stdio.h
 *
 * This program is open source software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public Licence
 * as published by the Free Software Foundation; either version
 * 2 of the Licence, or (at your option) any later version.
 */
#include<stdio.h>
#include<stdlib.h>
#include"string.h"
#define LENGTH_STRING 1000000000000000000 // Value for initialization of allocated strings

void clear(char* str){
	for(int i = 0; i < length(str); i++){
		str[i] = ' ';
	}// End for
}// End clear()

/*
 * Function that performs the input reading and returns a corresponding string line
 * @param void
 * @return char pointer (string)
 * @error if the string is empty
 */
char* readLine(){
	char str[LENGTH_STRING];
	//char* str = (char*)malloc(LENGTH_STRING*sizeof(char));
	char chr;
	int i = 0;
	for(scanf("%c",&chr); chr != '\n'; scanf("%c",&chr), i++) str[i] = chr;	
	if(isEmpty(str)) printf("error: no value typed in string\n"), exit(1);
	char* string = (char*)malloc(length(str)*sizeof(char));
	return string;
}// End readLine()

/*
 * Function that performs the input reading and returns a corresponding string line from a file
 * @param file pointer
 * @return char pointer (string)
 * @error if the string is empty 
 */
char* freadLine(FILE* file_pointer){
	char* str = (char*)malloc(LENGTH_STRING*sizeof(char));
	if(file_pointer != NULL){
		char chr;
		int i = 0;
		for(fscanf(file_pointer,"%c",&chr); chr != '\n'; fscanf(file_pointer,"%c",&chr), i++) str[i] = chr;
		if(isEmpty(str)) printf("error: no value typed in string\n"), exit(1);
	}// End if
	else printf("error: file not found\n"), exit(1);
	return str;
}// End freadLine()

/*
 * Function that performs the input reading and writes to a corresponding string line passed by parameter
 * @param format type
 * @param char pointer (string)
 * @return void
 * @error if the format of the past type is incorrect
 * @error if the string is empty
 */
void nextLine(char* format,char* str){
	// WARNING: the function should be used only when the input string is less than the size of the allocated string
	char chr;
	int i = 0;
	clear(str);
	if(equals(format,"%ln")){
		for(scanf("%c",&chr); chr != '\n'; scanf("%c",&chr), i++) str[i] = chr;
	}else if(equals(format,"%ln\n")){
		for(scanf("%c",&chr); chr != '\n'; scanf("%c",&chr), i++) str[i] = chr;
		scanf("\n");
	}else if(equals(format,"%ln\t")){
		for(scanf("%c",&chr); chr != '\n'; scanf("%c",&chr), i++) str[i] = chr;
		scanf("\t");
	}else printf("error: format type error:\n"), exit(1);
	if(isEmpty(str)) printf("error: no value typed in string\n"), exit(1);
}// End nextLine()	

/*
 * Function that performs the reading of a line in a file and writes a corresponding string line passed by the parameter
 * @param file pointer
 * @param format type
 * @param char pointer (string)
 * @return void
 * @error if the format of the past type is incorrect
 * @error if the string is empty
 */
void fnextLine(FILE* file_pointer,char* format,char* str){
	// WARNING: the function should be used only when the input string is less than the size of the allocated string
	if(file_pointer != NULL){
		if(equals(format,"%ln") || equals(format,"%ln\n") || equals(format,"%ln\t")){
			char chr;
			int i = 0;
			for(fscanf(file_pointer,"%c",&chr); chr != '\n'; fscanf(file_pointer,"%c",&chr), i++) str[i] = chr;
			if(isEmpty(str)) printf("error: no value typed in string\n"), exit(1); 
		}// End if
		else printf("error: format type error:\n"), exit(1);
	}// End if
	else printf("error: file not found\n"), exit(1);
}// End fnextLine()

/*
 * Function that performs the input reading and returns to single corresponding string
 * @param void
 * @return char pointer (string)
 * @error if the string is empty
 */
char* readString(){	
	char* str = (char*)malloc(LENGTH_STRING*sizeof(char));
	char chr;
	int i = 0;
	for(scanf("%c",&chr); chr != ' ' && chr != '\n'; scanf("%c",&chr),i++) str[i] = chr;
	if(isEmpty(str)) printf("error: no value typed in string\n"), exit(1);
	return str;
}// End readString()

/*
 * Function that performs the reading of a line in a file and returns to a single corresponding string
 * @param file pointer
 * @return char pointer (string)
 * @error if string is empty
 * @error if file is not found
*/
char* freadString(FILE* file_pointer){
	char* str = (char*)malloc(LENGTH_STRING*sizeof(char));	
	if(file_pointer != NULL){
		char chr;
		int i = 0;
		for(fscanf(file_pointer,"%c",&chr); chr != ' ' && chr != '\n'; fscanf(file_pointer,"%c",&chr),i++) str[i] = chr;
		if(isEmpty(str)) printf("error: no value typed in string\n"), exit(1);
	}// End if
	else printf("error: file not found\n"), exit(1);
	return str;
}// End freadString()

/*
 * Function that performs the input read and writes to single corresponding string row passed by parameter
 * @param char pointer (string)
 * @return void
 * @error if the format of the past type is incorrect
 * @error if the string is empty
 */
void nextString(char* format,char* str){
	// WARNING: the function should be used only when the input string is less than the size of the allocated string
	if(equals(format,"%s") || equals(format,"%s\n") || equals(format,"%s\t")){
		char chr;
		int i = 0;
		for(scanf("%c",&chr); chr != ' ' && chr != '\n'; scanf("%c",&chr), i++) str[i] = chr;
		if(isEmpty(str)) printf("error: no value typed in string\n"), exit(1);
	}// End if
	else printf("error: format type error:\n"), exit(1);
}// End nextString()

/*
 * Function that performs the reading of a line in a file and returns to a single corresponding string
 * @param file pointer
 * @param format file
 * @param char pointer (string)
 * @return void
 * @error if string is empty
 * @error if the format of the past type is incorrect
 * @error if file is not found
*/
void fnextString(FILE* file_pointer,char* format,char* str){
	// WARNING: the function should be used only when the input string is less than the size of the allocated string
	if(file_pointer != NULL){
		if(equals(format,"%s") || equals(format,"%s\n") || equals(format,"%s\t")){
			char chr;
			int i = 0;
			for(fscanf(file_pointer,"%c",&chr); chr != ' ' && chr != '\n'; fscanf(file_pointer,"%c",&chr), i++) str[i] = chr;
			if(isEmpty(str)) printf("error: no value typed in string\n"), exit(1);
		}// End if	
		else printf("error: format type error:\n"), exit(1);	
	}// End if
	else printf("error: file not found\n"), exit(1);	
}// End fnextString()