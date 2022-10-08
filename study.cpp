#include <fstream>
#include <iostream>
using namespace std;
 
int main ()
{
    
   char data[100];
 
   // 以写模式打开文件
   ofstream writefile;
   writefile.open("afile.dat");
 
   cout << "Writing to the file" << endl;
   cout << "Enter your name: "; 
   cin.getline(data, 100);
 
   // 向文件写入用户输入的数据
   writefile << data << endl;
 
   cout << "Enter your age: "; 
   cin >> data;
   cin.ignore();
   
   // 再次向文件写入用户输入的数据
   writefile << data << endl;
 
   // 关闭打开的文件
   writefile.close();
 
   // 以读模式打开文件
   ifstream readfile; 
   readfile.open("afile.dat"); 
 
   cout << "Reading from the file" << endl; 
   readfile >> data; 
 
   // 在屏幕上写入数据
   cout << data << endl;
   
   // 再次从文件读取数据，并显示它
   readfile >> data; 
   cout << data << endl; 
 
   // 关闭打开的文件
   readfile.close();
 
   return 0;
}