/*-------------------------------------------
// Course: COMP 150
// Last Name: Singh
// First Name: Rajveer
// Student ID: 300202522
// 
// File: ifelseCategory32_SinghRS
//
// Summary:	Prompts user to select one of the following two categories: Movies or Youtube videos.
			Upon selection, more nested sub items, categories, and text are prompted to the user
			based on the selection, eventually outputting a final text.
			
			Both the Movies and Youtube videos categories include a game that asks 4 questions and
			outputs the rank and score of the user when finished.
// 
*-------------------------------------------*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Storing user choices 
	string category_choice, movie_location, movie_round1, movie_round2, movie_round3, movie_round4, streaming_service, avatar_show, franchise_preference,
		content_preference, youtube_round1, youtube_round2, youtube_round3, youtube_round4, youtube_device_preference, learning_platform_preference;
	
	// Initializing movie and youtube game points to 0	 
	int movie_game_points{0}, youtube_game_points{0};
	
	// Welcoming users
	cout << "Hello! This program prompts you about video entertainment. You might even play a mini trivia game!" << endl;
	cout << "This program is case sensitive, enter the exact words shown and enter all characters in lower case." << endl;
	cout << "\nWhich form of video entertainment is your favorite: Movies or Youtube videos? (enter \"movies\" or \"youtube\") ";
	getline(cin, category_choice);
	
	// Outputting further options/categories and text for movies category 
	if (category_choice == "movies")
	{
		cout << "Movies are great! Especially when they're rich in story and cinematography." << endl;
		cout << "Tip: Watching movies without seeing the trailer is always more fun :)" << endl;
		cout << "\nDo you prefer watching movies in the theater or at home? (\"theater\" or \"home\") ";
		getline(cin, movie_location);
		
		// Theater category 	
		if (movie_location == "theater")
		{
			cout << "Great choice! Watching movies on a really big screen with surround sound is the best experience." << endl;
			cout << "\nLet's play a trivia game. You will be asked 4 questions that give you 2 movies and you'll have to determine which movie made more money in the worldwide box office." << endl;
			cout << "Inflation is not factored in. You'll get a point for each correct answer. DON'T USE THE WEB (try your best). Good luck!" << endl;
			
			// Movie game round 1
			cout << "\nTop Gun Maverick or Barbie (enter the movie name in lower case): ";
			getline(cin, movie_round1);
			if (movie_round1 == "barbie")
			{
				cout << "Incorrect. As of 2023/09/21, Top Gun Maverick has made $79,248,499 more than Barbie. This was a hard one!" << endl;
			}
			else if (movie_round1 == "top gun maverick")
			{
				cout << "Correct! Top Gun Mverick has made $1,495,696,292, which is $79,248,499 more than Barbie." << endl;
				cout << "+1 point" << endl;
				++movie_game_points;	
			}
			else
			{
				cout << "\nError, incorrect value entered. Correct value example (enter without quotations): \"top gun maverick\"";
				return -1;
			}
			
			// Movie game round 2
			cout << "\nPOTC: At World's End or The Dark Knight (enter the movie name in lower case): ";
			getline(cin, movie_round2);
			if (movie_round2 == "potc: at world's end")
			{
				cout << "Wrong. The Dark Knight has made $44,542,958 more than POTC. Good try!" << endl;
			}
			else if (movie_round2 == "the dark knight")
			{
				cout << "Right on! The Dark Knight has made $1,006,234,167, which is $44,542,958 more than POTC 3." << endl;
				cout << "+1 point" << endl;
				++movie_game_points;	
			}
			else
			{
				cout << "\nError, incorrect value entered. Correct value example (enter without quotations): \"potc: at world's end\"";
				return -1;
			}
			
			// Movie game round 3
			cout << "\nFight Club or The Karate Kid (enter the movie name in lower case): ";		
			getline(cin, movie_round3);
			if (movie_round3 == "the karate kid")
			{
				cout << "That's incorrect. Fight Club has made $10,090,383 more than The Karate Kid." << endl;
			}
			else if (movie_round3 == "fight club")
			{
				cout << "Correcto! Fight Club has made $101,209,702, which is $10,090,383 more than The Karate Kid." << endl;
				cout << "Remember the first rule of fight club: YOU DO NOT TALK ABOUT FIGHT CLUB." << endl;
				cout << "+1 point" << endl;
				++movie_game_points;	
			}
			else
			{
				cout << "\nError, incorrect value entered. Correct value example (enter without quotations): \"the karate kid\"";
				return -1;
			}
			
			// Movie game round 4
			cout << "\nKill Bill or John Wick (enter the movie name in lower case): ";
			getline(cin, movie_round4);
			if (movie_round4 == "john wick")
			{
				cout << "That's false. Kill Bill has made $94,824,226 more than John Wick. Good attempt!" << endl;
			}
			else if (movie_round4 == "kill bill")
			{
				cout << "You got it right! Kill Bill has made $180,906,076, which is $94,824,226 more than John Wick." << endl;
				cout << "+1 point" << endl;
				++movie_game_points;	
			}
			else
			{
				cout << "\nError, incorrect value entered. Correct value example (enter without quotations): \"kill bill\"";
				return -1;
			}
			
			cout << "\nThe game has concluded! That was fun wasn't it?" << endl;
			
			// Outputting movie game results
			switch(movie_game_points)
			{
				case 1:
					cout << "\nYou're a Noob, you got 1 point for getting 1/4 questions correct. You did your best, you have a lot more to learn! Good game." << endl;
					cout << "Keep enjoying movies at the movie theater, it's the best way to experience movies." << endl;
					break;
				
				case 2:
					cout << "\nYou're a Novice, you got 2 points for getting 2/4 questions correct. You did good! Some questions were harder than others, but you managed them well. Good game." << endl;
					cout << "Keep enjoying movies at the movie theater, it's the best way to experience movies." << endl;
					break;
				
				case 3:
					cout << "\nYou're an Expert! You got 3 points for getting 3/4 questions correct. You know the logistics about movies very well. Good game, incredible performance." << endl;
					cout << "Keep enjoying movies at the movie theater, it's the best way to experience movies." << endl;
					break;
					
				case 4:
					cout << "Your a Cinephile! You got 4 points for getting all the questions correct. You must be a huge moviegoer fan, you perfected this game. Well played!" << endl;
					cout << "Keep enjoying movies at the movie theater, it's the best way to experience movies." << endl;
					break;			
			}
		}
		
		// Home category
		else if (movie_location == "home")
		{
			cout << "That's a comfy choice! Watching movies at home is always cozy and relaxing." << endl;
			cout << "Plus, you don't have to worry about missing the movie to go to the bathroom or to get more snacks" << endl;
			
			cout << "\nBetween Netflix and Disney+, which one is your favorite streaming service? (enter \"netflix\" or \"disney+\") ";
			getline(cin, streaming_service);
			
			// Netflix category 
			if (streaming_service == "netflix")
			{
				cout << "Netflix is amazing. It has made amazing adaptions like the live action One Piece show." << endl;
				cout << "The live action Avatar: The Last Airbender show is also very much anticipated." << endl;
				cout << "\nHave you seen the animated Avatar: The Last Airbender tv show? (\"yes\" or \"no\") ";
				getline(cin, avatar_show);
				
				// Avatar show category
				if (avatar_show == "no")
				{
					cout << "\nYou should check it out as soon as you can. You can watch it on Netflix." << endl;
					cout << "Have fun watching Netflix at home :)" << endl;
				}
				else if (avatar_show == "yes")
				{
					cout << "\nAwesome! The show is filled with great characters and even better story telling." << endl;
					cout << "You should check out the sequel series The Legend of Korra and the comics. Cheers!" << endl;	
				}
				else
				{
				cout << "\nError, incorrect value entered. Correct value example (enter without quotations): \"yes\"";
				return -1;
				}	
			}
			
			// Disney+ category
			else if (streaming_service == "disney+")
			{
				cout << "Disney plus is incredible. It has all the Star Wars, the MCU, and Pixar movies." << endl;
				cout << "\nDo you like to watch MCU content more or Star Wars content more on Disney+? (\"mcu\" or \"star wars\") ";
				getline(cin, franchise_preference);
				
				// Franchise preference category
				if (franchise_preference == "mcu")
				{
					cout << "\nAwesome choice. There are more than 32 movies and all of them are available on Disney+ :D" << endl;
				}
				else if (franchise_preference == "star wars")
				{
					cout << "\nMAY THE FORCE BE WITH YOU!" << endl;	
				}
				else
				{	
				cout << "\nError, incorrect value entered. Correct value example (enter without quotations): \"star wars\"";
				return -1;
				}
			}
			else
			{
			cout << "\nError, incorrect value entered. Correct value example (enter without quotations): \"disney+\"";
			return -1;
			}			
		}
		else
		{
			cout << "\nError, incorrect value entered. Correct value example (enter without quotations): \"theater\"";
			return -1;
		}			
		
	}
	
	// Outputting further options/categories and text for youtube category 
	else if (category_choice == "youtube")
	{
		cout << "Youtube is revolutionary! You can find any type of video content on it." << endl;
		cout << "Countless videos of all type are uploaded daily to the platform." << endl;
		
		cout << "\nDo you watch entertainment or educational content more? (\"entertainment\" or \"educational\") ";
		getline(cin, content_preference);
		
		// Entertainment category
		if (content_preference == "entertainment")
		{
			cout << "Youtube is a great source for entertainment! Tons of channels with unique and entertaining content." << endl;
			cout << "\nLet's play a trivia game. You will be asked 4 questions that give you 2 youtube channels to choose from and you'll have to determine which channel has more subscribers." << endl;
			cout << "You'll get a point for each question answered correctly. DO NOT USE THE WEB (try your best). Good luck!" << endl;
			
			// Youtube game round 1
			cout << "\nKhan Academy or WatchMojo (enter the channel name in lower case): ";
			getline(cin, youtube_round1);
			if (youtube_round1 == "khan academy")
			{
				cout << "Incorrect. As of September 2023, Watchmojo has around 17 million more subscribers than Khan Academy. Both are amazing!" << endl;
			}
			else if (youtube_round1 == "watchmojo")
			{
				cout << "Correct! WatchMojo has 25.1 million subscribers right now, around 17 million more than Khan Academy. They've been at it since 2007." << endl;
				cout << "+1 point" << endl;
				++youtube_game_points;	
			}
			else
			{
				cout << "\nError, incorrect value entered. Correct value example (enter without quotations): \"khan academy\"";
				return -1;
			}
			
			// Movie game round 2
			cout << "\nMrBeast or WWE (enter the channel name in lower case): ";
			getline(cin, youtube_round2);
			if (youtube_round2 == "wwe")
			{
				cout << "Wrong. MrBeast has around 87 million more subscribers as of now. This one was tricky, WWE is a huge company!" << endl;
			}
			else if (youtube_round2 == "mrbeast")
			{
				cout << "Right on! MrBeast has 185 subscribers right now, around 87 million more than WWE. The second most on the platform." << endl;
				cout << "+1 point" << endl;
				++youtube_game_points;	
			}
			else
			{
				cout << "\nError, incorrect value entered. Correct value example (enter without quotations): \"mrbeast\"";
				return -1;
			}
			
			// Movie game round 3
			cout << "\nCinemaSins or CinemaWins (enter the channel name in lower case): ";		
			getline(cin, youtube_round3);
			if (youtube_round3 == "cinemawins")
			{
				cout << "That's incorrect. CinemaSins has around 7 million more subscribers right now. This was a hard one." << endl;
			}
			else if (youtube_round3 == "cinemasins")
			{
				cout << "Correcto! CinemaSins has 9.18 million subscribers as of Sept 2023, around 7 million more than CinemaWins." << endl;
				cout << "CinemaWins was inspired by CinemaSins, so they have similar content." << endl;
				cout << "+1 point" << endl;
				++youtube_game_points;	
			}
			else
			{
				cout << "\nError, incorrect value entered. Correct value example (enter without quotations): \"cinemawins\"";
				return -1;
			}
			
			// Movie game round 4
			cout << "\nMark Rober or Linus Tech Tips (enter the channel name in lower case): ";
			getline(cin, youtube_round4);
			if (youtube_round4 == "linus tech tips")
			{
				cout << "That's false. Mark Rober has around 10 million more subscribers currently. Good attempt!" << endl;
			}
			else if (youtube_round4 == "mark rober")
			{
				cout << "You got it right! Mark Rober has 25.6 million subscribers right now, around 10 million more than Linus Tech Tips." << endl; 
				cout << "He has experience working at NASA for 9 years!" << endl;
				cout << "+1 point" << endl;
				++youtube_game_points;	
			}
			else
			{
				cout << "\nError, incorrect value entered. Correct value example (enter without quotations): \"linus tech tips\"";
				return -1;
			}
			
			cout << "\nThe game has concluded! You made it all the way to the end, good job." << endl;
			
			// Outputting youtube game results
			switch(youtube_game_points)
			{
				case 1:
					cout << "\nYou're a Noob, you got 1 point for getting 1/4 questions correct. You did your best, you have a lot more to learn! Good game." << endl;
					cout << "Enjoy watching youtube, you can never really be bored, there's always new content to discover." << endl;
					break;
				
				case 2:
					cout << "\nYou're a Novice, you got 2 points for getting 2/4 questions correct. You did good! Some questions were harder than others, but you managed them well. Good game." << endl;
					cout << "Enjoy watching youtube, you can never really be bored, there's always new content to discover." << endl;
					break;
				
				case 3:
					cout << "\nYou're an Expert! You got 3 points for getting 3/4 questions correct. You know a lot about youtube and its content creators. Good game, incredible performance." << endl;
					cout << "Enjoy watching youtube, you can never really be bored, there's always new content to discover." << endl;
					break;
					
				case 4:
					cout << "You're a Cinephile! You got 4 points for getting all the questions correct. You must watch a lot of youtube and a variety of channels, you perfected this game. Well played!" << endl;
					cout << "Enjoy watching youtube, you can never really be bored, there's always new content to discover." << endl;
					break;			
			}
		}
		
		// Educational category
		else if (content_preference == "educational")
		{
			cout << "Youtube is an extremely useful place to learn something new. It has tutorials for everything, from cooking to coding." << endl;
			cout << "Not to mention those last minute math tutorials or videos on other subject concepts everyone watches before a test :)" << endl;
			cout << "\nDo you prefer to watch youtube tutorials on your PC or Phone? (enter \"pc\" or \"phone\") ";
			getline(cin, youtube_device_preference);
			
			// Device preference category 
			if (youtube_device_preference == "pc")
			{
				cout << "Interesting choice. It can be useful to follow along a youtube tutorial in realtime by having the tab open on one side of the screen." << endl;
				cout << "Welcome to the PC youtube club." << endl;
			}
			else if (youtube_device_preference == "phone")
			{
				cout << "Nice choice! Watching youtube on a phone is a really flexible choice." << endl;
				cout << "You can watch tutorials on a bus, in class, anywhere in your house, virutally anywhere." << endl;
			}
			else
			{
			cout << "\nError, incorrect value entered. Correct value example (enter without quotations): \"pc\"";
			return -1;
			}
			
			cout << "\nTo learn something new, do you get better results using youtube or ChatGPT? (enter \"youtube\" or \"chatgpt\") ";
			getline(cin, learning_platform_preference);
			
			// Platform preference category
			if (learning_platform_preference == "youtube")
			{
				cout << "\nThat's interesting. Seems like Youtube is still the GOAT to learn something new through tutorials." << endl;
				cout << "Likely due to the fact it''s easier for people if they can visually see what needs to happen, especially for complex concepts." << endl;
			}
			else if (learning_platform_preference == "chatgpt")
			{
				cout << "\nMaking way for the future it seems like! ChatGPT is useful for everyone" << endl;
				cout << "Especially useful for programmers, as ChatGPT can easily point out syntax and logical code errors." << endl;
				cout << "Don't use it to cheat!" << endl;
			}
			else
			{
			cout << "\nError, incorrect value entered. Correct value example (enter without quotations): \"chatgpt\"";
			return -1;
			}		
		}
		else
		{
			cout << "\nError, incorrect value entered. Correct value example (enter without quotations): \"entertainment\"";
			return -1;
		}
	}
	else
	{
		cout << "\nError, incorrect value entered. Correct value example (enter without quotations): \"movies\"";
		return -1;
	}			
	 
	return 0;  
}
