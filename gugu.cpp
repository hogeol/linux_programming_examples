#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
  string s;
  s = argv[1];
  //make and open txt file for writing multiplication table
	ofstream wF;
	wF.open(s);

  //calculate multiplication
	int gugugu;
  //write multiple value in txt file
	string write_gugugu;

  //n times table loop
	for(int i = 0; i < 9; i++)
	{
		write_gugugu = to_string(i+1);
		write_gugugu += " times table\n";
		wF.write(write_gugugu.c_str(), write_gugugu.size());
    for(int j = 0; j < 9; j++)
		{
    	gugugu = (i+1)*(j+1);
      write_gugugu = to_string(i+1);
      write_gugugu += " x ";
      write_gugugu += to_string(j+1);
      write_gugugu += " = ";
			write_gugugu += to_string(gugugu);
      //write result for multiplication
      cout << write_gugugu << endl;			
			wF.write(write_gugugu.c_str(), write_gugugu.size());
			wF.write("\n",1);
		}
		wF.write("\n",1);
    cout<<"\n";
	}
  //file close
	wF.close();
	return 0;
}
