#include <iostream>
#include <string>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

class Words
{
	private:
		char *words[5];
		int count;

	public:
		Words()
		{
			count =0;
		}
		~Words()
		{
			for(int i=0;i<count;i++)
			{
				delete words[i];
			}
		}
		int getcount() 
		{
			return count;
		}

char *getlongestword(int pos)
{
	return words[pos];
}
void setword(char *line)
{
	char *tokens = strtok(line," ");
	while(tokens !=NULL)
	{
		if(count == 5)
			break;
		//cout<<tokens;
		words[count] = new char[strlen(tokens)];
		strcpy(words[count],tokens);
		tokens = strtok(NULL," ");
		count++;
	}
}
void display()
{
	cout<<"Count:"<<count<<endl;
	for(int i=0;i<count;i++)
		cout<<words[i]<<" ";
	cout<<endl;
}
bool replace(char* key, char *str)
{
	for(int i=0;i<count;i++)
	{
		if(strcmp(words[i],key)==0)
		{
			words[i]==new char[strlen(str)+1];
			strcpy(words[i],str);
			return true;
		}
	}
	return false;
}

int longword()
{
	int lng=strlen(words[0]);
	int pos=0;
	for(int i=1;i<count;i++)
	{
		if(lng<strlen(words[i]))
		{
			lng = strlen(words[i]);
			pos=i;
		}
	}
	return pos;
}
};
int main()
{
	Words W;
	string line;
	getline(cin,line);

	cout<<W.getlongestword(W.longword())<<endl;
	cout<<"\nEnter the word to search:";
	string key;
	cin>>key;
	cout<<"\nEnter the word to replace:";
		string str;
	cin>>str;
	if(W.replace((char*)key.c_str(),(char*)str.c_str())==true)
	{
		cout<<"After replacing:"<<endl;
		W.display();
	}
	return 0;
}
