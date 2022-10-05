#include <iostream>

//const int ErrorName = 1;
//const int ErrorAge = 2;
//const int ErrorFile = 3;

enum ErrorType
{
	ErrorName,
	ErrorAge,
	ErrorFile,
	ErrorNet
};

enum GoType
{
	Up,
	Down,
	Left,
	Right
};

enum class ArroewsKey
{
	Up = 78,
	Down = 81,
	Left = 95,
	Right = 88,
	Space = 20,
	Enter = 13,
	Esc = 27
};




int main()
{
	ArroewsKey code = ArroewsKey::Right;

	code = ArroewsKey::Enter;


	ErrorType error;

	switch (error)
	{
	case ErrorName:
		break;
	case ErrorAge:
		break;
	case ErrorFile:
		break;
	case ErrorNet:
		break;
	default:
		break;
	}

	while (true)
	{
		ArroewsKey key = (ArroewsKey)std::cin.get();
		switch (key)
		{
		case ArroewsKey::Up:
			break;
		case ArroewsKey::Down:
			break;
		case ArroewsKey::Left:
			break;
		case ArroewsKey::Right:
			break;
		case ArroewsKey::Space:
			break;
		case ArroewsKey::Enter:
			break;
		case ArroewsKey::Esc:
			break;
		default:
			break;
		}
	}
	

}
