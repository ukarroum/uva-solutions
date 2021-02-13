#include <iostream>

using namespace std;

int main()
{
	string inp, out;
	bool open = true;

	while(getline(cin, inp))
	{
		out = "";
		for(int i = 0; i < inp.size(); i++)
		{
			if(inp[i] == '"' and open)
			{
				out += "``";
				open = !open;
			}
			else if(inp[i] == '"' and !open)
			{
				out += "''";
				open = !open;
			}
			else
				out.push_back(inp[i]);
			
		}
		cout << out << endl;
	}

	return 0;
}
