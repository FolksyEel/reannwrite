#include<iostream>
#include<fstream>
#include<string>


namespace Lib {

	template <typename T>
	void print(T t)
	{
		std::cout << t << "\n";
	}

	void WritetoFile(std::string filePath)
	{
		std::ofstream file(filePath);
		std::string fileContent;
		std::getline(std::cin, fileContent);
		file << fileContent;
		file.close();
	}
}



int main()
{
	Lib::print("Hej");
	Lib::WritetoFile("myFile.txt");



}