#include "Shallow.h"
Shallow::Shallow(int d)
{
	data = new int(d);
}
Shallow::Shallow(const Shallow& source):Shallow(*source.data) {

}

int Shallow::getData() {
	return *data;
}
Shallow::~Shallow() {
	delete data;
}
