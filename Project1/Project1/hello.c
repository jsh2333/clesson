#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <float.h>
#include <stdbool.h>
#include <string.h>//memset(), strlen()

#define false	0
#define true	1
#define bitsize 8

struct Person {
	char name[20];
	int age;
	char addr[100];
};

struct Data {
	char c1;
	int* p1;
};

void ifTest() {
	int n1;
	printf("input a number{10, 100, 1000}:  ");
	scanf_s("%d", &n1);

	if (n1 == 10) {
		printf("10, your number=%d \n", n1);
	}
	else if (n1 == 100) {
		printf("100, your number=%d \n", n1);
	}
	else if (n1 == 1000) {
		printf("1000, your number=%d \n", n1);
	}
	else {
		printf("else, your number=%d \n", n1);
	} 
}
void operatorTest() {
	int n1 = -10;
	int n2 = 0;

	printf("������: %d, �����:  %d \n", n1 / 2, n1 % 2 );
	printf("������: %d, �����:  %d \n", n1 / 3, n1 % 3);
	printf("������: %d, �����:  %d \n", n1 / 4, n1 % 4);

	printf("������: %d, �����:  %d \n", -3 / 4, -3 % 4);
}

void asciiTest() {
	char c1 = 'a';
	char c2 = 'b';
	char c3 = 'A';
	char c4 = 'B';

	printf("\n");
	printf("ascii character -> char number \n");
	printf("---------------------------------\n");
	printf("%c, %d \n", c1, c1);
	printf("%c, %d \n", c2, c2);
	printf("%c, %d \n", c3, c3);
	printf("%c, %d \n", c4, c4);
	
	printf("\n");
	printf("char number -> ascii character \n");
	printf("---------------------------------\n");
	c1 = 97;
	c2 = 98;
	c3 = 65;
	c4 = 66;
	printf("%c, %d \n", c1, c1);
	printf("%c, %d \n", c2, c2);
	printf("%c, %d \n", c3, c3);
	printf("%c, %d \n", c4, c4);

}

void overflowTest() {
	char num1 = CHAR_MAX + 1;
	printf("char max + 1 = %d\n", num1);

	float fnum1 = FLT_MIN;
	float fnum2 = FLT_MAX;

	fnum1 = fnum1 / 100000000.0f; //underflow
	fnum2 = fnum2 * 1000.0f;//overflow
	
	printf("underflow: %e \n", fnum1);//underflow
	printf("overflow:  %e \n", fnum2);//overflow
	
}
void underflowTest() {
	char num1 = CHAR_MIN - 1;
	printf("char min - 1 = %d", num1);
}
void dataType() {
	int8_t num1 = -128;

	printf("int8_t: %d \n", sizeof(int8_t));
	printf("int16_t: %d \n", sizeof(int16_t));
	printf("int32_t: %d \n", sizeof(int32_t));
	printf("int64_t: %d \n", sizeof(int64_t));

	printf("uint8_t: %u \n", sizeof(uint8_t));
	printf("uint16_t: %u \n", sizeof(uint16_t));
	printf("uint32_t: %u \n", sizeof(uint32_t));
	printf("uint64_t: %u \n", sizeof(uint64_t));

	                                                                       
}

void min_maxTest() {
	char ch1_min = CHAR_MIN;
	char ch1_max = CHAR_MAX;
	printf("char min = %d \n", ch1_min);
	printf("char max = %d", ch1_max);
	printf("char:  %d ~ %d \n", CHAR_MIN, CHAR_MAX);

	printf("short:  %d ~ %d \n", SHRT_MIN, SHRT_MAX);
	printf("int:  %d ~ %d \n", INT_MIN, INT_MAX);
	printf("long:  %ld ~ %ld \n", LONG_MIN, LONG_MAX);
	printf("long long:  %lld ~ %lld \n", LLONG_MIN, LLONG_MAX);


	double num3 = DBL_MIN;
	double num4 = DBL_MAX;
	long double num5 = LDBL_MIN; //�ּ�
	long double num6 = LDBL_MAX; //�ִ�
	printf("double:  %e ~ %e", num3, num4);
	printf("long double: %Le ~ %Le", num5, num6);
}
void sizeTest() {
	printf("�����ͻ�� ���ڽ��ϴ�\n");
	printf("char: %d \n", sizeof(char));
	printf("int: %d \n", sizeof(int));
	printf("short: %d \n", sizeof(short));
	printf("long: %d \n", sizeof(long));
	printf("double: %d \n", sizeof(double));
	printf("float: %d \n", sizeof(float));
}
void basic() {
	char ch1;
	printf("���ڸ� �Է����ּ���: ");
	scanf_s("%c", &ch1);
	printf("����:  %c ", ch1); // f : formatter, %s ���ڿ� (string) 

	printf("\n");
	char str[100] = "hellow world  ";//[0], [1], [2],..., [99] '\0' null 
	char str2[100] = "12345";
	printf("%s", str2);

	printf("���ڿ��� �Է����ּ���: ");
	scanf_s("%s", str, 100);
	printf("str:  %s ", str); // f : formatter, %s ���ڿ� (string) 
	printf("\n");

	int  n1 = 1000;
	int  n2 = 1000;
	printf("\n");
	printf("���ڸ� �ϳ� �Է����ּ���: ");
	scanf_s("%d", &n1);
	printf("\n");

	printf("number = %d ", n1); // 10���� ���ڸ� ǥ�� %d (decimal) 

	printf("\n");
	printf("�� ���ڸ� ���޾� �Է����ּ���: ");
	scanf_s("%d, %d", &n1, &n2);// * ������(pointer), & �ּҿ����� 
	printf("\n");

	printf("number1 = %d, number2 = %d ", n1, n2); // 10���� ���ڸ� ǥ�� %d (decimal) 


}

void calcTest();
int sum(int n1, int n2);
int sub(int n1, int n2);
int mul(int n1, int n2);
float div(int n1, int n2);

void menuCalc2();
void whileTest();
void whileTest2();
void dowhileTest();
void menuCalc3();

void hw2();
void breakContinueTest();
void ex30_7();
void forforTest();
void ex31_3();
void ex33_3();
void printBinary();

void pointerTest();
void pointertype();
void pointerarray();
//--------------------------------------
// test
void t1();
void T12();
void stringTest();
void stringWriteTest();
void stringWriteTest2();
void strlenTest();
void strtokTest();
void atoiTest();
void structTest();
void structTest2();
int main()
{
	
	//basic();
	//sizeTest();
	//min_maxTest();
	//dataType();
	//overflowTest();
	//underflowTest()\
	//asciiTest();
	//operatorTest();
	//ifTest();
	//incdecTest();
	//menuCalc();
	
	//menuCalc2();

	//whileTest();
	//whileTest2();
	//dowhileTest();
	//menuCalc3();

	//hw2();

	//breakContinueTest();
	//ex30_7();

	//forforTest();

	//ex31_3();


	//ex33_3();
	//shiftTest();
	//operatoroderTest();
	
	/*printf("���ڸ� �Է����ּ���>  \n");
	int n1 = 0;
	scanf_s("%d", &n1); 
	printf("10���� -> 2���� ��ȯ ����...\n");
	*/
	//printBinary(n1);

	//pointerTest();
	//pointerarray();

	//T12();

	//stringTest();
	//stringWriteTest();
	//stringWriteTest2();
	//strlenTest();
	//strtokTest();
	//atoiTest();
	//structTest();
	structTest2();
	return  0;
}


void structTest2() {
	int n1 = 10;
	
	struct Data d1;
	struct Data* d2 = malloc(sizeof(struct Data));
	d1.p1 = &n1;
	n1 = 11;
	d2->p1 = &n1;

	printf("%d \n", *(d1.p1));
	printf("%d \n", *(d2->p1));
	printf("%d \n", *((*d2).p1));

	d1.c1 = 'a';
	d2->c1 = 'b';
	printf("%c  \n", (d1.c1));
	printf("%c  \n", (d2->c1));

	printf("%d  \n", *(*d2).p1);
	printf("%c  \n", (*d2).c1);
	

	
	free(d2);

}
void structTest() {
	//char *p1
	struct Person* p1 = malloc(sizeof(struct Person) * 10);
	strcpy(p1->name, "ȫ�浿");
	p1->age = 30;
	strcpy(p1->addr, "����� ������ ȭ�");

	for(int i=0;i<10;i++){
	  //printf("%s, %d, %s \n", p1->name, p1->age, p1->addr);
		printf("%s, %d, %s \n", (*p1).name, (*p1).age, (*p1).addr);
	}
	free(p1);
}
void atoiTest() {


	printf("���ڿ��ε� ���ڸ� ���ں����� ��ȯ  \n");

	char *s1 = malloc(sizeof(char) * 10);

	printf("4�ڸ� ���ڸ� �Է��ϼ��� >   ");
	scanf("%s", s1);

	printf("�Էµ� ���ڿ��� %s �Դϴ�. \n", s1);

	printf("���ں����� ��ȯ......\n");
	int n1 = 0;
	n1 = atoi(s1);

	printf("���ں����� ��>  %d \n", n1);
	
	printf("n1 + 1000 = %d  \n", n1 +1000);

	
}
void strtokTest() {
	//char s1[100] = "abc def 123 456";
	char s1[100] = "abc-def=12+3-456";
	//char s1[100] = "2020-04-14T15:30:21";

	char* TOK = "-=+";
	printf("strtok test: \n");
	printf("test string: %s  \n", s1);
	char* p = strtok(s1, TOK);
	int i = 0;
	while (p != NULL) {
		printf("[%d] %s \n", i++, p);
		p = strtok(NULL, TOK);

	}

}
void strlenTest() {
	printf("1) strlen(s1) test  \n");
	char* s1 = malloc(sizeof(char)*10);
	*s1 = "Hello";
	char s2[10] = "Hello2";
	printf("%s  ,strlen: %d\n", s1, strlen(s1));
	printf("%s  ,strlen: %d\n", s2, strlen(s2));

	printf("\n");
	printf("2) strcmp(s1,s2) test  \n");
	printf("10�ڸ� �̸��� ���ڿ��� �Է����ּ���! \n");
	printf("s1 ���ڿ��� �Է����ּ���>  ");
	scanf("%s", s1);
	printf("s2 ���ڿ��� �Է����ּ���>  ");
	scanf("%s", s2);
	int result;
	for (int i = 0;i<20;i++) {
	  printf("....%d ���ڿ��� ���մϴ�.....\n", i);
	}
	result = strcmp(s1, s2);
	printf("strcmp(s1, s2): %d\n", result);

	if (result == 0) {
		printf("�� ���ڿ��� ���ƿ�  \n");
	}
	else if (result == 1) {
		printf("s1> s2, ascii �ڵ� �������� s1�� Ŀ�� \n");
	}
	else if (result == -1) {
		printf("s1< s2, ascii �ڵ� �������� s2�� Ŀ�� \n");
	}
	printf("%c %d  \n", 'a', 'a');
	printf("%c %d  \n", 'A', 'A');

	printf("\n");
	printf("3) sprintf (s1, \"hello %cs \", s2) \n",'%' );
	sprintf(s1, "abc-%s", s2);
	printf("s1: %s, strlen: %d  \n", s1, strlen(s1));
	printf("s2: %s, strlen: %d  \n", s2, strlen(s2));
	
	printf("\n");
	printf("4) strcat(s1,s2) test  \n");
	strcat(s1, s2);
	printf("s1: %s, strlen: %d  \n", s1, strlen(s1));
	printf("s2: %s, strlen: %d  \n", s2, strlen(s2));

	printf("\n");
	printf("5) strcpy(s1,s2) test  \n");
	strcpy(s1, s2);
	printf("s1: %s, strlen: %d  \n", s1, strlen(s1));
	printf("s2: %s, strlen: %d  \n", s2, strlen(s2));

	printf("\n");
	printf("6) strchr(s1,'a') test  \n");
	char * p1 = strchr(s1, 'e');
	printf("s1: %s, strlen: %d  \n", s1, strlen(s1));
	
	int i = 0;
	while (p1 !=NULL) {
		printf("[%d] %s  \n",i++,  p1);
		p1 = strchr(p1 + 1, 'e');

	}


	printf("\n");
	printf("7) strstr(s1,s2) test  \n");

	printf("s1 ���ڿ��� �Է����ּ���>  ");
	scanf("%s", s1);
	printf("s2 ���ڿ��� �Է����ּ���>  ");
	scanf("%s", s2);

	p1 = strstr(s1, s2);
	printf("s1: %s, strlen: %d  \n", s1, strlen(s1));
	i = 0;
	while (p1 != NULL) {
		printf("[%d] %s  \n", i++, p1);
		p1 = strstr(p1 + 1, s2);
	}
}
void stringWriteTest2() {
	char s1[10];
	char s2[10];

	printf("�� ���ڿ��� �Է����ּ���>    ");
	scanf("%s %s", s1, s2);

	printf("%s  \n", s1);
	printf("%s  \n", s2);
}
void stringWriteTest() {
	char s1[10];
	printf("���ڿ� �Է�>  ");
	scanf("%s", s1);
	printf("%s \n", s1);

	/*char *s2 = "hello";
	printf("���ڿ� �Է�>  ");
	scanf("%s", s2);
	printf("%s \n", s2);*/

	char *s2 = malloc(sizeof(char)*10);
	printf("���ڿ� �Է�>  ");
	scanf("%s", s2);
	printf("%s \n", s2);
	free(s2);
}
void stringTest() {
	char c1 = 'a';
	char c2[2] = "a";
	char* s1 = "Hello";
	char s2[10]="Hello";
	printf("%p, %c \n",&c1,  c1);
	printf("%p, %s \n",&c2,  c2);
	printf("%p, %s \n",&s1,  s1);
	printf("%p, %s \n",s2,  s2);

	s2[2] = '\0';
	printf("%p, %s \n",s2,  s2);

	


}
void T12() {
	int n1;
	int i = 0;
	printf("����>  ");
	scanf("%d", &n1);
	do {
		i++;
		if (i % 3 == 0) {
			continue;
		}
		printf("%d \n", i);
		
	} while (i < n1);
	printf("exit\n");


}

void t1() {
	int n1, n2;
	printf("�� ���� �Է��ϼ���> ");
	scanf("%d %d", &n1, &n2   );

	for(int i=3;i<5;i++){
		if (n1 % i == 0) {
			printf("%d�� %d�� ����Դϴ�.\n", n1, i);
		}
		if (n2 % i == 0) {
			printf("%d�� %d�ǹ���Դϴ�.\n",n2, i);
		}
	}
	printf("���α׷� ����\n");
}


void operatoroderTest() {
	int n1;
	int n2 = 3;

	n1 = 10 + 2 / (5 - 3) * ++n2;
	//(5 - 3) -> 2;
	//n1 = 10 +  4;

	printf("10 + 2 / (5 - 3) * ++%d  = %d \n", n2, n1);


	bool b1;
	b1 = (false || false) && !false || false;

	// b1 = (false) || false;
		
		
	printf("(false || false) && !false || false = %d \n", b1);


	n1 = 1;
	n2 = 2;
	int n3;

	n3 = n1 << 2 + n2 << 1;
	//n3 = 0b000100000 << (0b0100 ) << 1;

	printf("n1 << 2 + n2 << 1 = %d \n", n3);

}
void shiftbitTest() {
	
		printf("%x <<3 %x \n", 0x38, 0x38<<3);
		printf("%x >>2 %x \n", 0x80, 0x80 >>2);
		printf("%x >>3 %x \n", 0x30, 0x30 >>3);

}
void pointerarray() {
	int arr1[5] = { 10, 20, 30, 40, 50 };
	char arr2[5] = { 'a', 'b', 'c', 'c', 'e' };
	
	printf("%d \n", arr1[0]);

	int* p1 = arr1;
	char* p2 = arr2;

	printf("%d \n", *p1);
	printf("%d \n", *arr1);

	printf("arr[1] : %d \n", arr1[1]);
	printf("p1[1] : %d \n", p1[1]);

	int size = sizeof(arr1) / sizeof(int);
	printf("�迭�� �ε����� ���� size: %d \n", size);

	for(int i=0;i<size;i++){
		printf("%p, (p1+%d) = %d, p1[%d] = %d \n", (p1 + i),  i,  *(p1 + i), i,  p1[i]);
		
	}
	
	size = sizeof(arr2) / sizeof(char);
	printf("�迭�� �ε����� ���� size: %d \n", size);

	for (int i = 0; i < size; i++) {
		printf("%p, (p2+%d) = %c, p2[%d] = %c \n", (p2 + i), i, *(p2 + i), i, p2[i]);

	}
	





}
void pointerTest() {

	int* p1;

	int n1 = 1000;

	p1 = &n1;

	printf("sizeof(n1): %d, n1: %d  memaddr: %p (%X)\n", sizeof(n1), n1, &n1, &n1);
	printf("sizeof(p1): %d, p1: %d  memaddr: %p (%X)\n", sizeof(p1), *p1, p1, p1);


	printf(" %d \n", sizeof(char*));
	printf(" %d \n", sizeof(short*));
	printf(" %d \n", sizeof(int*));
	printf(" %d \n", sizeof(float*));

	long long* pllong;
	float* pfloat;
	int* pn;
	char* pchar;

	long long nllong = 10;
	float nfloat = 3.5;
	n1 = 10;
	char c1 = 'a';

	pllong = &nllong;
	pfloat = &nfloat;
	pn = &n1;
	pchar = &c1;

	printf("%lld \n", *pllong);
	printf("%f \n", *pfloat);
	printf("%d \n", *pn);
	printf("%c \n", *pchar);

}
void printBinary(int input) {
	int mask; 
	for (int i = (32 -1); i >= 0; i--) {
		mask = 1 << i; 
		printf("%d", input & mask ? 1 : 0);
		if (i % 8 == 0) 
			printf(" "); 
	} 
	printf("\n"); 
}
void ex33_3() {
	for (int i = 0; i <= 100; i++) {
		printf("���ڴ� %d :    ", i);
		if (i % 3 == 0 && i % 5 == 0) { //�����
			printf("3,5�� �����!  \n");
		}else if(i % 3 == 0) {
			printf("3�� �����!  \n");
		}
		else if (i % 5 == 0) {
			printf("5�� �����!  \n");
		}
		else {
			printf("3, 5�� ������� �ƴմϴ�!  \n");
		}
		
	}
	
}
void ex31_3() {
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0;j<5; j++) {
			if (j < (i + 1)) {
				printf("*");
			}
		}
		printf("\n");
	}
	
	for (int i = 4; i > 0; i--) {
		for (int j = 0; j < 5; j++) {
			printf("\n");
		}
	}
}
void gugudan_full() {
	for (int i = 0; i < 9; i++) {
		if (i == 0) {
			continue;
		}
		printf("===== %d �� =====\n", (i + 1));
		for (int j = 0; j < 9; j++) {
			printf("%d x %d = %d \n", (i + 1), (j + 1), (i + 1) * (j + 1));
		}

	}
}
void gugudan_select() {
	int m;
	printf("������ ����� ���� �Է����ּ���> \n");
	scanf_s("%d", &m);


	for (int i = 0; i < 9; i++) {
		if (i == 0) {
			continue;
		}
		if ((i+1) != m) {
			continue;
		}

		printf("===== %d �� =====\n", (i + 1));
		for (int j = 0; j < 9; j++) {
			printf("%d x %d = %d \n", (i + 1), (j + 1), (i + 1) * (j + 1));
		}

	}
}
void gugudan_selectrange() {
	int m, n;
	printf("������ ����� ������ ���� �Է����ּ���. \n");
	printf("�� ���ڸ� �Է�> \n");
	scanf_s("%d %d", &m, &n);
	for (int i = (m-1); i < 9; i++) {
		if (i == 0) {
			continue;
		}
		if (i == (n)) {
			break;
		}
		printf("===== %d �� =====\n", (i + 1));
		for (int j = 0; j < 9; j++) {
			printf("%d x %d = %d \n", (i + 1), (j + 1), (i + 1) * (j + 1));
		}

	}
}
int menu_gugudan() {
	printf("========================================================================\n");
	printf("������ �޴�:  1 ��ü���, 2����, 3���� 0 ���� 9�޴����� \n");
	printf("1) ��ü �������� ����غ�����\n ");
	printf("2) ��, �ϳ��� ���ڸ� �Է¹��� �������� ���� ������ּ���\n ");
	printf("3) ��, �� ���ڸ� �Է¹ް� �������� �Է¹����� �������� ������ּ��� \n");
	int n;
	printf("����> ");
	scanf_s("%d", &n);

	return n;
}
void forforTest() {
	int m = 0;
	do {
		m = menu_gugudan();

		switch (m) {
		case 1:
			gugudan_full();
			break;
		case 2:
			gugudan_select();
			break;
		case 3:
			gugudan_selectrange();
			break;
		case 0:
			//exit
			return;
			break;
		case 9:
			//menu
			break;
		
		}

	}while (m!=0);
	//1)
	//gugudan_full();
	//2)
	//gugudan_select();
	//3)
	gugudan_selectrange();
}

void ex30_7() {
	int n1;
	int n2;
	int i;
	printf("30.7 �� �� ������ ���� �� 7�� ������ �ʴ� ���� ����ϱ�\n");
	printf("�� ���ڸ� �Է�> \n");
	scanf_s("%d %d", &n1, &n2);

	i = n1;
	while (1) {
		if (i > n2) {
			break;
		}
		
		if (i % 10 == 7) {	
			printf("%d \n", i);
			i++;
			continue;
		}
		//printf("%d \n", i);
		i++;
	}

	return;
}
void breakContinueTest() {
	int n1 = 0;

	while (n1 < 10) {
		n1 = n1 + 1;
		
		if (n1 == 3) {
			continue;
		}

		if (n1 > 5) {
			break;
		}
		printf("%d \n", n1*1000);		
	}
	printf("============================== \n");

	n1 = 0;
	while (1) {
		n1 = n1 + 1;

		if (n1 == 3) {
			continue;
		}

		if (n1 > 5) {
			break;
		}
		printf("%d \n", n1 * 1000);
	}
	printf("============================== \n");
	int n2 = 0;
	for (n2 = 1; n2 < 10; n2++) {
		

		if (n2 == 3) {
			continue;
		}

		if (n2 > 5) {
			break;
		}

		printf("%d \n", n2 * 1000);
	}

	printf("============================== \n");
	n2 = 0;
	for (n2 = 1, n1=100; ; n2++, n1++) {


		if (n2 == 3) {
			continue;
		}

		if (n2 > 5) {
			break;
		}

		printf("n1: %d,  n2: %d \n", n1, n2 * 1000);

	}

	printf("============================== \n");
	n2 = 0;
	for (n2 = 1, n1 = 100; n2<100 ; n2++, n1++) {


		if (n2 % 5 == 0) {
			//continue;
			printf("5�� ����� ã�ҽ��ϴ�:  %d \n", n2);
			continue;
		}

		/*if (n2 > 5) {
			break;
		}*/

		printf("n1: %d,  n2: %d \n", n1, n2 * 1000);

	}
	printf("����\n");
}
void hw2() {
	int item[10] = { 800, 800, 1200, 1000, 1500, 2100 };
	char name[10][20] = { "�ݶ�", "���̴�", "�����ֽ�", "ī���", "������", "����" };
	for(int i=0;i<6;i++){
		printf("[%d] item: %s %d ��\n",i+1, name[i], item[i]);
	}
}

void menu() {
	printf("--------------------------\n");
	printf("���� ���α׷��Դϴ� \n");
	printf(" �޴� �ȳ�:  \n");
	printf("  1 ������ \n");
	printf("  2 ������ \n");
	printf("  3 ������ \n");
	printf("  4 �������� \n");
	printf("  0 ���α׷����� \n");
	printf("  9 �޴����� \n");
	printf("--------------------------\n");

}
void menuCalc3() {
	int m = 0;
	int n1, n2;
	float fresult = 0;
	
	
	printf("1. �� ���ڸ� �Է��� �ּ��� \n");
	scanf_s("%d %d", &n1, &n2);

	printf("2. ����Լ��� ������ �ּ���(1~4) :  ");

	scanf_s("%d", &m);

	//do {} while ();

	switch (m) {
	case 1: {
		int m2 = 2;
		fresult = sum(n1, n2);
		break;
	}
	case 2: {
		fresult = sub(n1, n2);
		break;

	}
	case 3:
		fresult = mul(n1, n2);
		break;
	case 4:
		fresult = div(n1, n2);
		break;
	default:
		printf("�޴������� �ٽ� ���ּ��� \n");
		break;
	}
	printf("--------------------------\n");
	if (m >= 1 && m <= 4) {
		printf("�Էµ� ��:  n1 = %d,   n2 = %d \n", n1, n2);
		printf("��� ���:  %.2f \n", fresult);
	}
}

void dowhileTest() {
	printf("100���ݺ� ����ϴ� ���α׷�\n");
	printf("�ݺ�ȸ���� �Է¹޾Ƽ� �ݺ�����ϴ� ���α׷�\n");
	int n;
	printf("�ݺ�ȸ���� �Է��ϼ���: \n");
	scanf_s("%d", &n);

	int i = 0;
	printf("%d�� ��� ���� \n", n);
	
	do {	//i = i + 1;
		i++;
		printf("[%d] %s", i, "hello world~!\n");
	} while (i < n);
	
	printf("%d�� ��� �ϼ� \n", n);
	//printf("100�� ��� �ϼ� \n");

}

void whileTest2() {
	printf("100���ݺ� ����ϴ� ���α׷�\n");
	printf("�ݺ�ȸ���� �Է¹޾Ƽ� �ݺ�����ϴ� ���α׷�\n");
	int n;
	printf("�ݺ�ȸ���� �Է��ϼ���: \n");
	scanf_s("%d", &n);

	int i = 0;
	printf("%d�� ��� ���� \n", n);
	while (n > 0) {
		//i = i + 1;
		n--;
		printf("[%d] %s", n, "hello world ~! \n");
	}
	//printf("100�� ��� �ϼ� \n");
	
}
void whileTest() {
	printf("100���ݺ� ����ϴ� ���α׷�\n");
	printf("�ݺ�ȸ���� �Է¹޾Ƽ� �ݺ�����ϴ� ���α׷�\n");
	int n;
	printf("�ݺ�ȸ���� �Է��ϼ���: \n");
	scanf_s("%d", &n);

	int i = 0;
	while (i < n) {
		//i = i + 1;
		i++;
		printf("[%d] %s", i, "hello world ~! \n");
	}
	//printf("100�� ��� �ϼ� \n");
	printf("%d�� ��� �ϼ� \n", n);
}
void menuCalc2() {
	int m = 0;
	int n1, n2;
	float fresult = 0;

	printf("--------------------------\n");
	printf("���� ���α׷��Դϴ� \n");
	printf(" �޴� �ȳ�:  \n");
	printf("  1 ������ \n");
	printf("  2 ������ \n");
	printf("  3 ������ \n");
	printf("  4 �������� \n");
	printf("--------------------------\n");

	printf("1. �� ���ڸ� �Է��� �ּ��� \n");
	scanf_s("%d %d", &n1, &n2);
	
	printf("2. ����Լ��� ������ �ּ���(1~4) :  ");
	
	scanf_s("%d", &m);


	switch (m) {
	case 1:{
		int m2 = 2;
		fresult = sum(n1, n2);
		break;
	}
	case 2: {
		fresult = sub(n1, n2);
		break;

	}
	case 3:
		fresult = mul(n1, n2);
		break;
	case 4:
		fresult = div(n1, n2);
		break;
	default:
		printf("�޴������� �ٽ� ���ּ��� \n");
		break;
	}
	printf("--------------------------\n");
	if(m>=1 && m<=4){
		printf("�Էµ� ��:  n1 = %d,   n2 = %d \n", n1, n2);
		printf("��� ���:  %.2f \n",fresult);
	}
}
void shiftTest() {
	int n = 10;
	int n1 = 10 << 1;
	printf("%d <<1  = %d \n", n, n1);
	int n2 = 10 >> 1;
	printf("%d >> 1  = %d \n", n, n2);

	int b = 0b00001010;
	int b1 = b << 1;
	printf("%d <<1  = %d \n", b, b1);
	int b2 = 10 >> 1;
	printf("%d >> 1  = %d \n", b, b2);

}
boolTest() {
	printf("int �� ũ��: %d\n ", sizeof(int));
	printf("bool �� ũ��: %d\n ", sizeof(bool));

}
void opTest() {
	int n1 = -1000;
	int n2 = 2;

	int result = n1 ? 100 : 200; //  3�� ����  (���� ��)? (True) : (False);
	printf("result = %d \n", result);

	result = (n1 > n2) ? 100 : 200; //  3�� ����  (���� ��)? (True) : (False);
	printf("result = %d \n", result);

}
void incdecTest() {
	int n = 10;
	int result = 0;
	printf("1) n++ test......\n");
	result = n++ + 1;
	printf("1)n: %d = result: %d\n", n, result);
	printf("\n");

	n = 10;
	result = 0;
	printf("2) ++n test.......\n");
	result = ++n + 1;
	printf("2) n: %d = result: %d \n", n, result);
}

void ifelse() {
	

	int balance = 10000;
	int age;
	scanf("%d", &age);

	if (age >= 7 && age <= 12)
		balance -= 450;
	else if (age >= 13 && age <= 18)
		balance -= 720;
	else if (age >= 19)
		balance -= 1200;


	printf("%d\n", balance);

}
void calcTest() {
	int result = 0;

	printf("�� ���� �Է����ּ���.\n");
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	result = sum(n1, n2);
	printf("���� �����: %d", result);

	printf("\n�� ���� �Է����ּ���.\n");
	scanf("%d %d", &n1, &n2);
	result = sub(n1, n2);
	printf("���� �����: %d", result);

	printf("\n�� ���� �Է����ּ���.\n");
	scanf("%d %d", &n1, &n2);
	result = div(n1, n2);
	printf("������ �����: %d", result);
}
int sum(int n1, int n2) {
	int sum = n1 + n2;
	
	return sum;
}
int sub(int n1, int n2) {
	int sum = n1 - n2;

	return sum;
}
int mul(int n1, int n2)
{
	int sum = n1 * n2;

	return sum;
}
float div(int n1, int n2)
{
	float sum = (float) n1 / n2;

	return sum;
}