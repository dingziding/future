// lintcode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;  // string需要引入std命名空间

class Solution {
public:
	/*
	* @param s: A string
	* @return: A string
	*/
	string reverseWords(string &s) {
		// write your code here
		string restr(20,' ');
		int i,int j = 0;
		int len = s.length();
		if (s[0] != ' ')
		{
			if (' ' == s[1])
			{
				restr[j++] = s[0];
				restr[j++] = ' ';
			}
			else
			{
				restr[j++] = s[0];
			}
		}
		if (len>2)
		{
			for (i = 1; i <len - 1; i++)
			{
				if (s[i] != ' ')
				{
					if ( ' ' == s[i + 1])
					{
						restr[j++] = s[i];
						restr[j++] = ' ';
					}
					else
					{
						restr[j++] = s[i];
					}
				}
			}
		}
		if (len >=2 && s[len - 1] != ' ')
		{
			restr[j++] = s[len - 1];
		}
		
		if (j>0)
		{
			if (' ' != restr[j - 1])
			{
				for (i = j - 1; i >= 0; i--)
				{
					cout << restr[i];
				}
				cout << endl;
			}
			else
			{
				for (i = j - 2; i >= 0; i--)
				{
					cout << restr[i];
				}
				cout << endl;
			}
		}
		return restr;
	}
};

int main()
{
	Solution solu;
	string str;
	while (1)
	{
		getline(cin, str); 
		solu.reverseWords(str);
		if (str == "bye")
		{
			break;
		}
	}
	return 0;
}


// class Solution {
// public:
// 	/*
// 	* @param s: A string
// 	* @return: A string
// 	*/
// 	string reverseWords(string &s) {
// 		// write your code here
// 		string restr;
// 
// //		char *pl = 0, *pr = 0;
// //		char *pm;
// 		int i;
// 		int j = 0;
// 		int len = s.length();
// 		if (s[0] != ' ')

// 		{

// //			pl = &s[0];

// 			restr[j++] = s[0];

// 		}
// 		if (len>1)

// 		{

// 			for (i = 1; i <len - 1; i++)

// 			{

// 				if (s[i] == ' ')

// 				{

// 					i++;

// 					if (s[i - 1] != ' ')

// 					{

// 	//					pr = &s[i];

// 					}

// 				}

// 			    if ( s[i] != ' ')

// 				{

// 					if (s[i - 1] == ' ')

// 					{

// 	//					pl = &s[i];

// 					}

// 					else if(s[i+1]=' ')

// 					{

// 						restr[j++] = s[i];

// 						restr[j++] = ' ';

// 						i++;

// 					}

// 				}

// 			}

// 		}
// 		if (s[len - 1] != ' ')
// 		{
// //			pr = &s[len-1];
// 			restr[j++] = s[len-1];
// 		}
// //		cout << *pl << endl;
// //		cout << *pr << endl;
// 
// //		restr = s;
// //		cout << restr << endl;
// 		return restr;
// 	}
// };






