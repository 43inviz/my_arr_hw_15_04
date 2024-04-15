#include "ARR.h"
#include <iostream>

ARR::ARR(int size, int* arr)
{
	this->arr = arr;
	this->size = size;
}

ARR::ARR(const ARR& arr)//copy
{
	this->arr = arr.arr;
	this->size = arr.size;
}

ARR::ARR(ARR&& arr)
{
	this->arr = arr.arr;
	this->size = arr.size;

	arr.arr = nullptr;
	arr.size = 0;
	
}
///////////////


int ARR::getSize() const
{
	return this->size;
}

int* ARR::getArr() const
{
	return this->arr;
}

void ARR::setSize(int size)
{
	this->size = size;
}

void ARR::getArr(int* arr)
{
	this->arr = arr;
}

///////////////



void ARR::changeSize(int newSize)
{
	int* newArr = new int[newSize];
	int index= 0;
	for (int i = index; i < newSize; i++) {
		newArr[i] = this->arr[i];
		index++;

	}

	if (index>=size) {
		for (int i = this->size; i < newSize; i++) {
			newArr[i] = 0;
		}

	}
	

	

	delete[] this->arr;
	this->arr = newArr;
	this->size = newSize;
}

int ARR::getMin()
{
	int min = this -> arr[0];
	for (int i = 0; i < this->size; i++) {
		if (this->arr[i] < min) {
			min = this->arr[i];
		}
	}
	return min;
}

int ARR::getMax()
{
	int max = this -> arr[0];
	for (int i = 0; i < this->size; i++) {
		if (this->arr[i] > max) {
			max = this->arr[i];
		}
	}
	return max;
}

void ARR::bubleSort()
{
	for (int i = 0; i < this->size; i++) {
		for (int j = 0; j < this->size - 1; j++) {
			if (this->arr[j] > this->arr[j + 1]) {
				int temp = this->arr[j];
				this -> arr[j] = this->arr[j + 1];
				this->arr[j + 1] = temp;

			}
		}
	}

}

//void ARR::delSize(int newSize)
//{
//	if (this->size >= newSize) {
//		return;
//	}
//
//	int* newArr = new int[newSize];
//
//	for(int i=0;i<)
//}

void ARR::addElInArr()
{
	
	for (int i = 0; i < this->size; i++) {
		int input = 0;
		std::cout << "Enter [" << i + 1 << "] element: ";
		std::cin >> input;
		this->arr[i] = input;
		
	}
}

void ARR::show()
{
	for (int i = 0; i < this->size; i++) {
		std::cout << this->arr[i] << " ";
	}
}

ARR::~ARR()
{
	if (arr != nullptr) {
		delete[] arr;
	}

}
