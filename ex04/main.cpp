# include <iostream>
# include <fstream>
# include <string>

bool is_string(const std::string &line, const char *str)
{
	size_t pos = line.find(str);
	return (pos != std::string::npos);
}

void replace_line(std::string &line, const char *str, const char *replace)
{
	size_t pos = 0;
	while ((pos = line.find(str, pos)) != std::string::npos)
	{
		line.replace(pos, strlen(str), replace);
		pos += strlen(replace);
	}
}

int main(int ac, char **av)
{
	std::ifstream myfile;
	std::ofstream newfile;
	std::string	  line;

	if (ac != 4)
	{
		std::cout << "Usage: ./replace <filename> <string_to_replace> <replacement_string>" << std::endl;
		return 1;
	}
	if (av[1][0] == '\0' || av[2][0] == '\0' || av[3][0] == '\0')
	{
		std::cout << "Arguments cannot be empty!" << std::endl;
		return 1;
	}
	if (av[2][0] == av[3][0])
	{
		std::cout << "Replacement string cannot be the same as the string to replace!" << std::endl;
		return 1;
	}	
	myfile.open(av[1]);
	if (!myfile.is_open())
	{
		std::cout << "Error opening file: " << av[1] << std::endl;
		return 1;
	}
	newfile.open(std::string(av[1]) + ".replace");
	if (!newfile.is_open())
	{
		std::cout << "Error creating file: " << av[1] << ".replace" << std::endl;
		myfile.close();
		return 1;
	}
	while (std::getline(myfile, line))
	{
		if (is_string(line, av[2]))
			replace_line(line, av[2], av[3]);
		newfile << line << std::endl;
	}
	myfile.close();
	newfile.close();
	std::cout << "Replacement completed successfully!" << std::endl;
	return 0;
}