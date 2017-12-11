#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct Maker{
	char name[64];
	int Age;

	
};

void testEatFood(struct Maker *maker)
{
	printf("%s在吃人饭！\n", maker->name);
}

struct Animal{
	char name[64];
	int Age;
	int type;
};

void AnimalEatFood(struct Animal *animal)
{
	printf("%s在吃动物饭\n", animal->name);
}

void test()
{
	struct Maker maker = { "安倍", 1000 };
	struct Animal animal = { "旺财", 5, 1 };











	
	AnimalEatFood(&maker);
	AnimalEatFood(&animal);

}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

