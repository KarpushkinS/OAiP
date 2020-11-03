#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int array[] = { 1, 4, 5, 0, 3, 2 }; // ���������� ������� � ����������� ����������
	int n = sizeof(array) / sizeof(int);
	float k = 1.247; // ������ ����������
	for (int step = n - 1; step >= 1; step /= k) // �� ������������� ���������� ����� ������������� ���������� �������� � 1
		for (int i = 0; i < n - step; i++)
			if (array[i] > array[i + step]) // ���������� ������� ������� � ����������� �� ���� �� ���������� step
			{
				int temp = array[i];  // ���� ������� ������� ������, ������ �� �������
				array[i] = array[i + step];
				array[i + step] = temp;
			}
	
	for (int i = 0; i < n; i++)  // ����� ���������������� �������
		printf("%d ", array[i]);
}