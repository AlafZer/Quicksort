#include "quicksort.h"

void qsort(std::vector<int>& vec)
{
	std::vector<int> uni;
	if (vec.size() < 2)
	{
		return;
	}

	int sup = vec[0];
	std::vector<int> right;
	std::vector<int> left;

	for (int i = 1; i < vec.size(); i++)
	{
		if (sup > vec[i])
		{
			left.push_back(vec[i]);
		}
		else
		{
			right.push_back(vec[i]);
		}
	}
	if (!(right.empty()))
	{
		qsort(right);
	}
	if (!(left.empty()))
	{
		qsort(left);
	}	

	for (auto i : left)
	{
		uni.push_back(i);
	}
	uni.push_back(sup);
	for (auto i : right)
	{
		uni.push_back(i);
	}
	vec = uni;
}

int main()
{

	std::vector<int> myVec{ 1, 2148};

	qsort(myVec);

	return 0;
}