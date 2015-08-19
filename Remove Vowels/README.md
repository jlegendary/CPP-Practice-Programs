Problem:
>
Write a program that prompts the user to input a string. The program then uses the function substr to remove all the vowels from the string. For example, if str = "There", then after removing all the vowels, str = "Thr".  After removing all the vowels, output the string.





Analysis:
 Input a string, and use substr to remove all the vowels from it, then display the new string.
 
 void removeVowels(string &str)
 	-Removes the vowels and returns the altered string.
 	-Reference parameter to pass the string to a void function.

 bool isVowel(char ch)
 	-Determines if input parameter is a vowel and returns true if it is, otherwise it returns false.
 
strVar.substr(pos, len)
	-Returns a string that is a substring of strVar starting at pos.
 	The length of the substring is at most len characters.
 	If len is too large, it means ‘‘to the end‘‘ of the string in strVar.

Access individual characters:
	[] operator	
		-To access the individual characters by location. For example :
 