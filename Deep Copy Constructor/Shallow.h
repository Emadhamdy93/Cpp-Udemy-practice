#pragma once
class Shallow
{
private:
	int* data;
public:
	Shallow(int d);
	Shallow(const Shallow& source);
	~Shallow();
	int getData();

};

