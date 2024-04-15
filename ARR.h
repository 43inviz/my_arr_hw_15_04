#pragma once
class ARR
{
	int size;
	int* arr;
public:
	ARR(int size, int* arr);
	ARR():ARR(0,nullptr){}
	ARR(int size) :ARR(size, nullptr){}
	ARR(int* arr): ARR(0,arr){}

	ARR(const ARR& arr);
	ARR(ARR&& arr);
	
	////////
	int getSize() const;
	int* getArr() const;

	void setSize(int size);
	void getArr(int* arr);
	////////
	
	void changeSize(int newSize); //изменение размера
	int getMin();//min max
	int getMax();
	void bubleSort();//сортировка
	void addElInArr();//заполнение 

	void show();

	~ARR();
};

