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
#include<stdlib.h>
#include<stdbool.h>
#include <stdio.h>

// Iinicio do arquivo .h

static int length(char* line){
	int i;
	for(i = 0; line[i] != '\0'; i++);
	return i;
}// End length()

static char* subString(char* line,int index_inicio,int index_fim){
	char* string = (char*)malloc((int)length(line)*sizeof(char));
	int j = 0;
	for(int i = 0; i <= index_fim; i++){
		if(i >= index_inicio && i <= index_fim){
			string[j] = line[i];
			j++;
		}// End if
	}// End for
	return string;
}// End subString()

static bool equals(char* str1,char* str2){
	bool resp = false;
	if(length(str1) == length(str2)){
		for(int i = 0; i < length(str1); i++){
			if(str1[i] == str2[i]){
				resp = true;
			}// End if
			else{
				resp = false;
				i = length(str1);
			}// End else 
		}// End for
	}// End if
	return resp;
}// End equals()

static int indexOff(char* str,char chr){
	for(int i = 0; i < length(str); i++){
		if(str[i] == chr) return i;
	}// End for
	return -1;
}// End indexOff()

static bool contains(char* line,char* substring){
	bool resp = false;
	char* string = (char*)malloc(1000*sizeof(char));
	if(length(line) < length(substring)){
		return resp;
	}// End if
	else{
		for(int i = 0; i < length(line); i++){
			if(line[i] == substring[0]){
				string = subString(line,i,((i+length(substring)-1)));	
				if(equals(string,substring)){
					resp = true;
				}// End if
			}// End if
		}// End for
	}// End else
	free(string);
	return resp;
}// End contains()

static bool isEmpty(char* str){
	return length(str) <= 0 ? true : false;
}// End isEmpty()

/*
static int compareTo(char* str1,char* str2){
	int compare = 0;
	if(length(str1) > length(str2)){
		for(int i = 0; i < length(str2); i++){
			if(str1[i] > str2[i]){
				compare++;
			}// End if
			else if(str1[i] < str2[i]){
				compare--;
			}// End else
			else if(i == (length(str2)-1)){
				compare = ((i+1) + length(str2));
			}// End else if
		}// End for
	}// End if
}// End compareTo()

static char* replace(char* str,char chr){
	char* line = (char*)malloc((int)length(str)*sizeof(char));
	int j = 0;
	for(int i = 0; i < length(str); i++){
		if(str[i] != chr){
			line[j] = str[i]; 
			j++;
		}// End if
	}// End for
}// End replace()
*/
