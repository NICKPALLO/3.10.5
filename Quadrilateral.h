#pragma once
#include"Figure.h"

class Quadrilateral : public Figure
{
protected:
	int a, b, c, d, A, B, C, D;
	Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D, std::string name);
public:
	Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D);
	void print_info() override;
};