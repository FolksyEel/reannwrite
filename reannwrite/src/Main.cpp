#include<iostream>
#include<fstream>
#include<string>


namespace Lib {


	//template print function
	template <typename T>
	void print(T t)
	{
		std::cout << t << "\n";
	}


	//Writes to textfile
	void WritetoFile(std::string filePath)
	{
		std::ofstream file(filePath);
		std::string fileContent;
		std::getline(std::cin, fileContent);
		file << fileContent;
		file.close();
	}

	void ReadFromFile()
	{
		std::string fileContent;
		std::ifstream openFile("myFile.txt");
		while (std::getline(openFile, fileContent))
		{
			std::cout << "St�r i Fil: " << fileContent << "\n";
		}
		openFile.close();
	}
}



int main()
{
	Lib::print("Hej");
	Lib::WritetoFile("myFile.txt");
	Lib::ReadFromFile();

}