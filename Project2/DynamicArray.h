#pragma once
class DynamicArray {

private:
	int size;
	int* ptr;

public:
	DynamicArray(int size);
	virtual ~DynamicArray(); //메모리 누수 방지
	int getSize() const;

	void setValue(int idx, int value);

	int getValue(int idx) const;
};