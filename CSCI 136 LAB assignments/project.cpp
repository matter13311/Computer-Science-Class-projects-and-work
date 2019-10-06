#include<iostream>
#include<fstream>
#include<string>

using namespace std;
string match(string allsentences, string words)
{
	int i, o;
	o = 0;
	string temporary, permanent;
	temporary = "";
	permanent = "";
	for (i = 0; i < (int)allsentences.length(); i++)
	{
	temporary = temporary + allsentences[i];
		if(allsentences[i]==words[o] && o<(int)words.length()||allsentences[i] == '.')
		{
			if (allsentences[i] == words[o])
			{
				o++;
			}

			if (allsentences[i] == '.' && o == words.length())
			{
				permanent += temporary + "\n";
				temporary = "";
				o = 0;
			}
			else if (o != words.length() && allsentences[i] == '.')
			{
				temporary = "";
				o = 0;
			}
		}
		cout << permanent;
		return(permanent);
}
	int main()
	{
		ifstream sentencesfile, wordsfile;
		ofstream outputmatch;
		sentencesfile.open("sentences.txt");
		wordsfile.open("words.txt");
		if (sentencesfile.fail())
		{
			cerr << "Error opening sentences.txt" << endl;//checks if file fails to open
			exit(1);
		}

		if (wordsfile.fail())
		{
			cerr << "Error opening words.txt" << endl;//checks if file fails to open
			exit(1);
		}
		string one, two, three, four, five, six, seven, eight, allsentences, answer;
		while (!wordsfile.eof())
		{
			wordsfile >> one >> two >> three >> four >> five >> six >> seven >> eight;//assigns all words in words file into a variable.
		}


		while (!sentencesfile.eof())
		{
			getline(sentencesfile, allsentences);
		}

		outputmatch.open("match.txt");
		answer = match(allsentences, one);
		outputmatch << "The answer is " << answer;


		sentencesfile.close();
		outputmatch.close();
		wordsfile.close();
	}

