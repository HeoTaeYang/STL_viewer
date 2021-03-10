#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

#include "structs_and_classes.h"

class bone
{
private:
	std::string& mFileName;
	std::vector<triangle>& mFacet;
	double x_min, x_max;
	double y_min, y_max;
	double z_min, z_max;
	double mOffset;

public:
	// �ʱ�ȭ(main�� �ִ� vector�� ������ �ڵ����� �߰���)
	bone(std::string& fileName, std::vector<triangle>& facet, double offset);
	
	void draw(); // �׸��� �Լ�
	void move(); // �̵� �Լ�
	void rotate(); // ȸ�� �Լ�
};