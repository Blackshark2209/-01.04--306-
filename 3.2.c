#include <stdio.h>

void escape(char s[], char t[])
{
	int i, j;
	
	i = j = 0;
	
	while (t[i] != '\0') {
		switch (t[i]) {
			
		case '\n':
			s[j++] = '\\';
			s[j++] = 'n';
			break;
			
		case '\t':
			s[j++] = '\\';
			s[j++] = 't';
			break;
			
		case '\b':
			s[j++] = '\\';
			s[j++] = 'b';
			break;
			
		case '\\':
			s[j++] = '\\';
			s[j++] = '\\';
			break;
			
		default:
			s[j++] = t[i];
			break;
		}
		
		i++;
	}
	
	s[j] = '\0';
}


void unescape(char s[], char t[])
{
	int i, j;
	
	i = j = 0;
	
	while (t[i] != '\0') {
		
		if (t[i] == '\\') {
			
			switch (t[i + 1]) {
				
			case 'n':
				s[j++] = '\n';
				i++;
				break;
				
			case 't':
				s[j++] = '\t';
				i++;
				break;
				
			case 'b':
				s[j++] = '\b';
				i++;
				break;
				
			case '\\':
				s[j++] = '\\';
				i++;
				break;
				
			default:
				s[j++] = t[i];
				break;
			}
			
		} else {
			s[j++] = t[i];
		}
		
		i++;
	}
	
	s[j] = '\0';
}
