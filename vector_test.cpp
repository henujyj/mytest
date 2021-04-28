#include<iostream>
#include<vector>

void print(std::vector<int> a)
{
	for (int i = 0; i < a.size(); i++)
	{
		std::cout << a[i] << "  ";
	}

	std::cout << "\n";
}

int main()
{
	const int MAX_LENGTH = 16;
	bool is_admin = false;
	char destination[MAX_LENGTH];
	std::string source = "12345678901234567";
	strcpy(destination, source.c_str());

	std::cout << is_admin << std::endl;


	//std::vector<int> first, second;
	//first.assign(5, 11);
	//second.assign(5, 22);
	//print(first);

	//std::cout << "使用push_back在向量尾部插入元素\nfirst :";
	//first.push_back(3);
	//print(first);

	//std::cout << "使用iterator insert方法，向第3个元素前插入元素33\nfirst :";
	//std::vector<int>::iterator it;
	//it = first.begin();
	//first.insert(it + 2, 33);
	//print(first);


	//std::cout<< "使用iterator insert方法，向第2个元素前插入2个元素，均为55\nfirst :";
	//first.insert(it + 1, 2, 55);
	//print(first);


	//std::cout << "使用iterator insert方法，向第1个元素前插入second的第2个到第4个元素(排除第4个元素)\nfirst :";
	//std::vector<int>::iterator seiter = second.begin();
	//it = first.begin();
	//first.insert(it, seiter+1, seiter+3);
	//print(first);
	
	return 0;

	//std::vector<int> first;
	//std::vector<int> second;
	//std::vector<int> third;

	//first.assign(7, 100);             // 7 ints with a value of 100

	//std::vector<int>::iterator it;
	//it = first.begin() + 1;

	////std::cout << "it=" << *it<< std::endl;

	//second.assign(it, it + 2); // the 5 central values of first

	////int myints[] = { 1776,7,4 };
	////third.assign(myints, myints + 3);   // assigning from array.

	//std::cout << "first vector is ";
	//for (int i = 0; i < first.size(); i++)
	//{
	//	first[i] = i;
	//	//std::cout << first[i] << "    ";
	//}
	//first.push_back(10);
	//std::vector<int>::iterator iter;
	//
	//std::cout << "\n";


	//for (std::vector<int>::const_iterator iter = first.begin(); iter != first.end(); iter++)
	//{
	//	//const_iterator只读，不能修改容器中的值
	//	std::cout << *iter <<"   ";
	//}
	//std::cout << std::endl;

	//std::vector<int>::iterator s2;
	//s2 = second.begin();
	//second.insert(s2 ,2, 0);

	//std::cout << "second vector is ";
	//for (std::vector<int>::size_type it = 0; it != second.size(); it++)
	//{
	//	std::cout << second[it] << "   ";
	//}
	//std::cout << std::endl;
	//std::cout << "Size of first: " << int(first.size()) << '\n';
	//std::cout << "Size of second: " << int(second.size()) << '\n';
	//std::cout << "Size of third: " << int(third.size()) << '\n';


}
