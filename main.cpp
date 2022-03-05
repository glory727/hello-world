#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

using namespace std;

//git test
//git two test

int main()
{
	cout << "hello world!" << endl;
	const char *filename = "coco.names";
	FILE *file = fopen(filename, "r");
	if (!file)
		return 0;
	
	size_t size = 512;
	char *line = (char *)malloc(size * sizeof(char));
	if (!fgets(line, size, file)) {
		int a = 1;
		return 0;
	}
	else
		cout << line << endl;

	cout << "ni hao ya"<<endl;
	system("pause");
	return 0;
}