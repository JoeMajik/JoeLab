#include <vector>
#include <string>

std::vector<int> LSR_vector(std::vector<int> input, int shiftamt ,int val)
{
	std::vector<int> output(input.size());
	for (int i = 0; i < input.size(); i++)
	{
		if (i <= (shiftamt - 1))
			output[i] = val;
		else
			output[i] = input[i - shiftamt];
	}
	return output;
}

std::string LSR_string(std::string input, int shiftamt, char val)
{
	std::string output(input.size(),' ');
	for (int i = 0; i < input.size(); i++)
	{
		if (i <= (shiftamt - 1))
			output[i] = val;
		else
			output[i] = input[i - shiftamt];
	}
	return output;
}