#include <stdio.h>

void	main(){

	int idx1  = 0x11223344, idx2 = -0x11223344;

	printf(" idx1 : %X id2 :%X\n", idx1, idx2);
	printf(" idx1 : %p id2 :%p\n\n", idx1, idx2);

	/*
		32비트 플랫폼에서 0x11223344는 음수로 전환했을 때
		11223344 -> EEDDCCBC가 된다

		컴퓨터는 음수를 '2의 보수를 통해 표현한다
		11223344의 0001 0001 0010 0010 0011 0011 0100 0100을
		2의 보수인 1110 1110 1101 1101 1100 1100 1011 1100으로
		마지막 1100에 +1 함으로써 EEDDCCBC가 된다
	*/

	printf("Shift >> 8 : %X\n", idx2 >> 8);

	/*
		음수의 쉬프트는 양수와 다르게 패딩에서 F로 채워진다
		음수 표기를 위해 0이 아닌 F로 채워지는 것
	*/
}
