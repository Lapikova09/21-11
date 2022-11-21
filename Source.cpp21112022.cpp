#include <iostream>
#include <ctime>
using namespace std;
/*. Описать функцию Sign(X) целого типа, возвращающую для вещественного числа X следующие значения:
−1, если X < 0; 0, если X = 0; 1, если X > 0.
С помощью этой функции найти значение выражения Sign(A) + Sign(B)
для данных вещественных чисел A и B.*/
/*int sign(double x) {
	if (x < 0)  return -1; 
    else if (x == 0)  return 0; 
	else if (x > 0)  return 1; 
}
int main() {
	double a; double b;
	cin >> a; cin >> b;
	double p = sign(a);
	double k = sign(b);
	cout << p + k << endl;
}*/
/*Proc17. Описать функцию RootsCount(A, B, C) целого типа, определяющую
количество корней квадратного уравнения A·x
2 + B·x + C = 0 (A, B, C —
вещественные параметры, A 6= 0). С ее помощью найти количество корней
для каждого из трех квадратных уравнений с данными коэффициентами.
Количество корней определять по значению дискриминанта:*/
/*int rootscount(double a, double b, double c) {
	if (b * b - 4 * a * c < 0)return 0;
	else if (b * b - 4 * a * c == 0)return 1;
	else if (b * b - 4 * a * c > 0)return 2;
}
int main() {
	srand(time(nullptr));
	for (int i = 1; i <= 3; i++) {
		double x = rand() % 11;
		double y = rand() % 11;
		double z = rand() % 11;
		double x1 = rootscount(x, y, z);
		cout << x << ' ' << y << ' ' << z << ' ' << x1 << endl;
	}
		
}*/
/*Proc18. Описать функцию CircleS(R) вещественного типа, находящую площадь круга радиуса R (R — вещественное). С помощью этой функции
найти площади трех кругов с данными радиусами. Площадь круга радиуса R вычисляется по формуле S = π·R
2
. В качестве значения π использовать 3.14.*/
/*double circles(double r) {
	return 3.14 * r;
}
int main() {
	srand(time(nullptr));
	for (int i = 1; i <= 3; i++) {
		double x = rand() % 11;
		double a = circles(x);
		cout << x << ' ' << a << endl;
	}
}*/
/*Proc19. Описать функцию RingS(R1, R2) вещественного типа, находящую площадь кольца, заключенного между двумя окружностями с общим центром
и радиусами R1 и R2 (R1 и R2 — вещественные, R1 > R2). С ее помощью
найти площади трех колец, для которых даны внешние и внутренние радиусы. Воспользоваться формулой площади круга радиуса R: S = π·R
2
. В
качестве значения π использовать 3.14.*/
/*double ringS(double R1, double R2) {
	if (R1>R2)return R1 * 3.14 - R2 * 3.14;
	if (R1 < R2)return R2 * 3.14 - R1 * 3.14;
}
int main() {
	srand(time(nullptr));
	for (int i = 1; i <= 3; i++) {
		double x = rand() % 11;
		double y = rand() % 11;
		cout << x << ' ' << y << ' ' << ringS(x, y) << endl;
	}
}*/
/*Proc20. Описать функцию TriangleP(a, h), находящую периметр равнобедренного треугольника по его основанию a и высоте h, проведенной к
основанию (a и h — вещественные). С помощью этой функции найти
периметры трех треугольников, для которых даны основания и высоты.
Для нахождения боковой стороны b треугольника использовать теорему
Пифагора:*/
/*double trianglep(double a, double h) {
	return a + sqrt((a / 2) * (a / 2) + h * h) + sqrt((a / 2) * (a / 2) + h * h);
}
int main() {
	for (int i = 1; i <= 3; i++) {
		double x; cin >> x;
		double y; cin >> y;
		cout << x << ' ' << y << ' ' << trianglep(x, y) << endl;
	}
}*/
/*Proc21◦
. Описать функцию SumRange(A, B) целого типа, находящую сумму
всех целых чисел от A до B включительно (A и B — целые). Если A > B,
то функция возвращает 0. С помощью этой функции найти суммы чисел
от A до B и от B до C, если даны числа A, B, C.*/
int sumrange(int a, int b) {
	int s1 = 0;
	for (int i = a; i <= b; i++) {
		s1 = s1 + i;
	}
	return s1;
}
int main() {
	int x,y, z;
	cin >> x >> y >> z;
	cout << sumrange(x, y) << endl;
	cout << sumrange(y, z) << endl;
}




