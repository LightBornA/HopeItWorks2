#pragma once
using namespace std;
#include <iostream>
#include <string>
class Director
{
public: void SetDir()
{
	ConsoleOut("Choose a homework(1-6) or exit(0): \n");
	OpenSubDir(GetNInput());
}
private: void ConsoleOut(string str)
{
	cout << (str);
}
private: float GetFInput()
{
	ConsoleOut("Enter a float number: \n");
	float inp;
	cin >> inp;
	return(inp);
}
private: int GetNInput()
{
	ConsoleOut("Enter an int number: \n");
	int inp;
	cin >> inp;
	return(inp);
}
private: string GetInput()
{
	ConsoleOut("Enter a string: \n");
	string inp;
	cin >> inp;
	return(inp);
}
private: void OpenSubDir(int inp)
{
	try
	{
		switch (inp)
		{
		case(0): break;
		case(1):
			HomeworkOne(); break;
		case(2) :
			HomeWorkTwo(); break;
		default:
			ConsoleOut("Something is wrong, try again \n");
			OpenSubDir(GetNInput());
			break;
		}
	}
	catch (exception)
	{
		ConsoleOut("Something is wrong, try again \n");
		OpenSubDir(GetNInput());
	}
}
private: void HomeworkOne()
{
	ConsoleOut("Choose a homework: \n 1 - Name \n 2 - Ariphmetics \n 3 - equasion \n 4 - another equasion \n 5 - bulb \n");
		try
		{
			int inp = GetNInput();
			switch (inp)
			{
			case(1):
				h11();
				break;
			case(2):
				h12();
				break;
			case(3):
				h13();
				break;
			case(4):
				h14();
				break;
			case(5):
				h15();
				break;
			default:
				break;
			}
		}
		catch (exception)
		{
			   ConsoleOut("Something is wrong, try again \n");
			   HomeworkOne();
		}
}
//stuff for homeworkone
private: void h11() 
{
	ConsoleOut("What's your name? \n");
	ConsoleOut("Your name is: " + GetInput());
}
private: void h12()
{
	ConsoleOut("num1:");
	float num1 = GetFInput();
	ConsoleOut("num2:");
	float num2 = GetFInput();
	if (num2 != 0)
	{
		ConsoleOut("Sum: " + to_string(num1 + num2) + "\n" + "residual: " + to_string(num1 - num2) + "\n" "multiplication: " + to_string(num1 * num2) + "\n" + "divison: " + to_string(num1 / num2) + "\n");
	}
	else
	{
		ConsoleOut("Sum: " + to_string(num1 + num2) + "\n" + "residual: " + to_string(num1 - num2) + "\n" "multiplication: " + to_string(num1 * num2) + "\n" + "divison is not possible");
	}
}
private: void h13()
{
	ConsoleOut("b:");
	float b1 = GetFInput();
	ConsoleOut("c:");
	float c1 = GetFInput();
	ConsoleOut("x= " + to_string((-c1) / b1));
}
private: void h14()
{
	ConsoleOut("a:");
	float a = GetFInput();
	ConsoleOut("b:");
	float b = GetFInput();
	ConsoleOut("c:");
	float c = GetFInput();
	float disc = b * b - 4 * a * c;
	ConsoleOut("x1 = " + to_string((-b + pow(disc, 0.5)) / (2 * a)) + "\n");
	ConsoleOut("x2 = " + to_string((-b - pow(disc, 0.5)) / (2 * a)) + "\n");
}
private: void h15()
{
	bool brightout = false;
	bool curtainscl = false;
	bool brightbulb = false;
	ConsoleOut("Enter cur time(hours): \n");
	int time = GetNInput();
	ConsoleOut("Are curtains closed(yes/no)? \n");
	string curtains = GetInput();
	ConsoleOut("Is bulb turned on(yes/no)? \n");
	string bulb = GetInput();
	if (time > 5 && time < 20)
	{
		bool brightout = true;
	}
	if (bulb == "yes")
		brightbulb = true;
	if (curtains == "yes")
		curtainscl = true;
	if (!curtainscl && brightout || brightbulb)
		ConsoleOut("It's bright in the room");
	else
		ConsoleOut("It's dark in the room");
}
//
private: void HomeWorkTwo()
{
	ConsoleOut("Choose a homework: \n 1 - cone \n 2 - branching \n 3 - function \n 4 - order \n 5 - tabs \n");
	try
	{
		int inp = GetNInput();
		switch (inp)
		{
		case(1):
			h21();
			break;
		case(2):
			h22();
			break;
		case(3):
			h23();
			break;
		case(4):
			h24();
			break;
		case(5):
			h25();
			break;
		default:
			break;
		}
	}
	catch (exception)
	{
		ConsoleOut("Something is wrong, try again \n");
		HomeworkOne();
	}
}
//stuff for HomeWorkTwo
private: void h21()
{
	float V, S, R,l,r,h;
	ConsoleOut("R? \n");
	R = GetFInput();
	ConsoleOut("r? \n");
	r = GetFInput();
	ConsoleOut("h? \n");
	h = GetFInput();
	if (h > 0 && r > 0 && R > 0)
	{
		l = sqrt(h * h + pow(R - r, 2));
		V = 3.14 * h * (R * R + R * r + r * r) / 3;
		S = 3.14 * (R * R + (R + r) * l + r * r);
		ConsoleOut("V: " + to_string(V) + "\n S: " + to_string(S));
	}
	else 
	{ 
		ConsoleOut("R, r, h can't be less(or) zero");
		h21(); 
	}
}
private: void h22()
{
	float w;
	ConsoleOut("x? \n");
	float x = GetFInput();
	ConsoleOut("a? \n");
	float a = GetFInput();
	if (x * x < a && x == 0)
	{
		if (abs(x) < 1)
			w = a * log(abs(x));
		else
			w = pow(a - x * x, 0.5);
		ConsoleOut("W: " + to_string(w));
	}
	else
	{
		ConsoleOut("X cant be 0 and also x^2 can't be more than a");
		h22();
	}

	
}
private: void h23()
{
	float x, y, b;
	ConsoleOut("x? \n");
	x = GetFInput();
	ConsoleOut("y? \n");
	y = GetFInput();
	ConsoleOut("b? \n");
	b = GetFInput();
	if (b > y && x < b) 
	{
		ConsoleOut("Z= " + to_string(log(b - y) * pow(b - x, 0.5)));
	}
	else
	{
		ConsoleOut("y can't be less than y, x can't be more than b");
		h23();
	}
	
}
private: void h24()
{
	int j = 1;
	ConsoleOut("N? \n");
	int N = GetNInput();
	if(N>1)
	for (int i = N+1; i < N + 11; i++)
	{
		ConsoleOut(to_string(j) + ": " + to_string(i) + "\n");
		j += 1;
	}
	else
		for (int i=1;i<11;i++)
		{
			ConsoleOut(to_string(j) + ": " + to_string(i) + "\n");
			j += 1;
		}
}
private: void h25()
{	
	float x = -4;
	while (x< 4.5)
	{
		if (x - 1 != 0)
		{
			ConsoleOut("x = " + to_string(x) + " y= " + to_string((x * x - 2 * x + 2) / (x - 1)) + "\n");
			x += 0.5;
		}
		else
			ConsoleOut("x=1, y can't exist(division over zero)");
	}
}

//stuff for HomeWorkThree
private: void h31()
{
	float S, r,m;
	int n, p;
	ConsoleOut("S?\n");
	S = GetNInput();
	ConsoleOut("p?\n");
	p = GetNInput();
	ConsoleOut("n?\n");
	n = GetNInput();
	m = (S * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
	ConsoleOut("m = "+ to_string(m));
}
private: void h32()
{

}

};
