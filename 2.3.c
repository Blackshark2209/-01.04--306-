#include <stdio.h>
#include <ctype.h>
#include <locale.h>

unsigned int htoi(const char s[])
{
	unsigned int result = 0;
	int i = 0;
	int hex_digit;
	
	if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
		i = 2;
	}
	
	while (s[i] != '\0') {
		char c = s[i];
		
		if (c >= '0' && c <= '9') {
			hex_digit = c - '0';
		} else if (c >= 'a' && c <= 'f') {
			hex_digit = c - 'a' + 10;
		} else if (c >= 'A' && c <= 'F') {
			hex_digit = c - 'A' + 10;
		} else {
			break;
		}
	
		result = result * 16 + hex_digit;
		i++;
	}
	
	return result;
}

int main()
{
	setlocale(LC_ALL, "");
	
	const char *tests[] = {
		"0x0",           // 0
		"0x1",           // 1
		"0xA",           // 10
		"0xF",           // 15
		"0x10",          // 16
	};
	
	int num_tests = sizeof(tests) / sizeof(tests[0]);
	
	for (int i = 0; i < num_tests; i++) {
		unsigned int value = htoi(tests[i]);
		printf("htoi(\"%s\") = %u (0x%X)\n", tests[i], value, value);
	}
	
	return 0;
}
