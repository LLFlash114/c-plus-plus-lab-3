/*-------------------------------------------
// Course: COMP 150
// Last Name: Singh
// First Name: Rajveer
// Student ID: 300202522
// 
// File: smartThingsApp33_SinghRS
//
// Summary: Simulates the function and processes of the home automation phone app SmartThings which configures features
			of smart devices directly from the phone app. This program simulates the configuration of a TV, lights, and a fridge.
			
			Prompts user to select which device to configure, then prompts a variety of options and features for the 
			selected device. The user is guided through the sub processes and finally the feature that's configured/used is outputted.        
//
*-------------------------------------------*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Storing information for user choices
	int device_category, tv_power, tv_feature, app_choice, remote_function, tv_volume, ambient_mode, info_display, artwork_display, relaxation_video, room_lights, 
		rgb_support, lights_feature, dim_scale, rgb_option, timer_hours, timer_minutes, timer_seconds, scheduler_starting_hour, scheduler_starting_minute, scheduler_ending_hour,
		scheduler_ending_minute, fridge_feature, change_temperature, new_fridge_temperature, new_freezer_temperature, change_mode, new_fridge_mode, new_freezer_mode,
		power_cool_option, power_freeze_option, list_option, stop_list;     
	
	string scheduler_starting_meridiem, scheduler_ending_meridiem, food_list_input, fridge_food_list = "Products:", freezer_food_list = "Products:";
	
	// Storing house rooms in an array
	string house_room_lights[] = {"Living room lights",
        				   		 "Kitchen lights",
        				   		 "Bedroom lights",
              					 "Bathroom lights",
        						 "Basement lights",
        						 "Front door lights"};
    
	// Welcoming users and listing categories
	cout << "Welcome to the SmartThings app! Using this app you can manage and control many features of all your connected smart home devices from the luxury of your phone." << endl;
	cout << "You are currently on the \"all devices\" section of the devices tab. All connected smart devices are listed below.\n" 
			"(This program assumes all smart devices are compatible with SmartThings)" << endl;
	
	cout << "\nSelect a device listed below that you would like to manage (type a number 1-5)" << endl;
	cout << "1)  TV\n"
			"2)  Lights\n"
			"3)  Fridge\n"
			"4)  Connect a new device (future feature)" << endl;
	cin >> device_category;
	
	// Handling differnt devices based on user choice
	switch(device_category)
	{
		// Managing TV DEVICE features
		case 1:	
			cout << "\nThe TV management tab is open" << endl;
			cout << "\nPress ON to turn on TV (type 1)\n"
					"Press OFF to turn off TV (type 2)" << endl;
			cin >> tv_power;
			
			// TV turned on
			if (tv_power == 1)
			{
				cout << "\n*beep*" << endl;
				cout << "The TV is powered on" << endl;
				cout << "Select the feature you want to use (type a number 1-5)" << endl;
				cout << "\n1)  Open an App\n"
						"2)  Use TV Remote\n"
						"3)  Turn on Ambient Mode\n"
						"4)  View TV on phone\n"
						"5)  Edit settings (future feature)" << endl;
				cin >> tv_feature;
				
				// Opening TV app
				if (tv_feature == 1)	
				{
					cout << "\nA list of installed TV apps has opened on your phone" << endl;
					cout << "Select the app you want to open (type a number 1-5)" << endl;
					cout << "1)  Netflix\n"
							"2)  Prime Video\n"
							"3)  Disney+\n"
							"4)  Youtube\n"
							"5)  Spotify" << endl;
					cin >> app_choice;
					// Opening Netlfix
					if (app_choice == 1)
					{
						cout << "\n\n******" << endl;
						cout << "Netflix has opened on your smart TV" << endl; 
						cout << "******" << endl;
					}
					// Opening Prime
					else if (app_choice == 2)
					{
						cout << "\n\n******" << endl;
						cout << "Prime Video has opened on your smart TV" << endl; 
						cout << "******" << endl;
					}
					// Opening Disney+
					else if (app_choice == 3)
					{
						cout << "\n\n******" << endl;
						cout << "Disney+ has opened on your smart TV" << endl; 
						cout << "******" << endl;
					}
					// Opening Youtube
					else if (app_choice == 4)
					{
						cout << "\n\n******" << endl;
						cout << "Youtube has opened on your smart TV" << endl; 
						cout << "******" << endl;
					}
					// Opening Spotify
					else if (app_choice == 5)
					{
						cout << "\n\n******" << endl;
						cout << "Spotify has opened on your smart TV" << endl; 
						cout << "******" << endl;
					}
					else
					{
						cout << "\nError invalid input";
						return -1;
					}	
				}
				
				// Using TV remote
				else if (tv_feature == 2)
				{
					cout << "\n\n-------------------------------------------------------------------" << endl;
					cout << "*The TV Remote graphic has opened up on your phone screen*" << endl;
					cout << "-------------------------------------------------------------------" << endl;
					cout << "\nSelect a remote function you want to use (type a number 1-4)" << endl;
					cout << "1)  Use Navigation keys\n"
							"2)  Go Back\n"
							"3)  Go Home\n" 
							"4)  Set the Volume"<< endl;
					cin >> remote_function;
					// Using Navigation keys
					if (remote_function == 1)
					{
						cout << "\n\n*Navigation menu is open*" << endl;
						cout << "You can now navigate through the TV as if you were using the remote" << endl;
					}
					// Going Back
					else if (remote_function == 2)
					{
						cout << "\n\nGoing back...." << endl;
						cout << "*The TV has gone 1 screen back*" << endl;
					}
					// Going Home
					else if (remote_function == 3)
					{
						cout << "\n\nGoing Home...." << endl;
						cout << "*The TV has gone to the Home screen*" << endl;
					}
					// Setting the volume
					else if (remote_function == 4)
					{
						cout << "\nThe Volume scale tab is open" << endl;
						cout << "Set the scale to a number between 0-100 (type a number 0-100): " << endl;
						cin >> tv_volume;
						if (tv_volume < 0 || tv_volume > 100)
						{
						cout << "\nError, volume value entered not in the range 0-100" << endl;
						return -1;
						}
						else
						{
						cout << "\n\nChanging TV volume...." << endl;
						cout << "Voume have been changed to " << tv_volume << "%" << endl;																								
						} 
					}
					else
					{
						cout << "\nError invalid input";
						return -1;
					}
				}
				
				// Managing Ambient Mode
				else if (tv_feature == 3)
				{
					cout << "\nThe Ambient Mode selection menu has opened. Ambient Mode is the what's displayed on your smart TV when it's not being used" << endl;
					cout << "Select the Ambient Mode you want your smart TV to display (type a number 1-3)" << endl;
					cout << "1)  Info (displays useful information)\n"
							"2)  Artwork (displays a slideshow of pictures\n"
							"3)  Relaxation (displays a loop of a calm video with sounds)\n" << endl;
					cin >> ambient_mode;
					// Setting Info mode
					if (ambient_mode == 1)
					{
						cout << "\nSelect the information you want displayed (type a number 1-3)" << endl;
						cout << "1)  Clock\n"
								"2)  Weather\n"
								"3)  World Map\n" << endl;
						cin >> info_display;
						if (info_display == 1)
						{
							cout << "\n\nApplying mode...." << endl;
							cout << "Info Ambient Mode with clock information has been applied." << endl;
						}
						else if (info_display == 2)
						{
							cout << "\n\nApplying mode...." << endl;
							cout << "Info Ambient Mode with weather information has been applied." << endl;
						}
						else if (info_display == 3)
						{
							cout << "\n\nApplying mode...." << endl;
							cout << "Info Ambient Mode with world map information has been applied." << endl;
						}
						else
						{
							cout << "\nError invalid input";
							return -1;
						}
					}
					// Setting Artwork mode
					else if (ambient_mode == 2)
					{
						cout << "\nSelect the artwork slideshow you want displayed (type a number 1-3)" << endl;
						cout << "1)  Mountains\n"
								"2)  Cities\n"
								"3)  Pictures from gallery\n" << endl;
						cin >> artwork_display;
						if (artwork_display == 1)
						{
							cout << "\n\nApplying mode...." << endl;
							cout << "Artwork Ambient Mode with a mountain slideshow has been applied." << endl;
						}
						else if (artwork_display == 2)
						{
							cout << "\n\nApplying mode...." << endl;
							cout << "Artwork Ambient Mode with a cities slideshow has been applied." << endl;
						}
						else if (artwork_display == 3)
						{
							cout << "\n\nApplying mode...." << endl;
							cout << "Artwork Ambient Mode with a gallery slideshow has been applied." << endl;
						}
						else
						{
							cout << "\nError invalid input";
							return -1;
						}
					}
					// Setting Relaxation mode
					else if (ambient_mode == 3)
					{
						cout << "\nSelect the relaxation video loop you want displayed (type a number 1-3)" << endl;
						cout << "1)  Water\n"
								"2)  Sand\n"
								"3)  Spring\n" << endl;
						cin >> relaxation_video;
						if (relaxation_video == 1)
						{
							cout << "\n\nApplying mode...." << endl;
							cout << "Relaxation Ambient Mode with a Water video loop has been applied." << endl;
						}
						else if (relaxation_video == 2)
						{
							cout << "\n\nApplying mode...." << endl;
							cout << "Relaxation Ambient Mode with a Sand video loop has been applied." << endl;
						}
						else if (relaxation_video == 3)
						{
							cout << "\n\nApplying mode...." << endl;
							cout << "Relaxation Ambient Mode with a Spring video loop has been applied." << endl;
						}
						else
						{
							cout << "\nError invalid input";
							return -1;
						}
					}
					else
					{
						cout << "\nError invalid input";
						return -1;
					}
				
				}
				
				// Viewing TV on phone
				else if (tv_feature == 4)
				{
					cout << "\nYou have chosen to view TV on Phone" << endl;
					cout << "\n\nConnecting to [Smart TV]...." << endl;
					cout << "Your phone has connected to the Smart TV" << endl;
					cout << "***Smart TV screen is visble on your phone***" << endl;
				}
				
				// Editing settings
				else if (tv_feature == 5)
				{
					cout << "\nThis feature will be available in the future" << endl; 
				}
				else
				{
					cout << "\nError invalid input";
					return -1;					
				}
			}
			
			// TV is turned off
			else if (tv_power == 2)
			{
				cout << "\n*beep*" << endl;
				cout << "The TV is powered off" << endl;
			}
			else
			{
				cout << "\nError invalid input";
				return -1;	
			}	   
			break;
		
		
		case 2:
			// Managing LIGHTS DEVICE features
			cout << "\nThe lights management tab is open" << endl;
			
			// Choosing the room to manage the lights in 
			cout << "Select the room lights you want to manage (type a number 1-6)"<< endl;
			cout << "1)  Living room lights\n"
					"2)  Kitchen lights\n"
					"3)  Bedroom lights\n"
					"4)  Bathroom lights\n"
					"5)  Basement lights\n"
					"6)  Front door lights" << endl;
			cin >> room_lights;			
			cout << "\nThe " << house_room_lights[room_lights - 1] << " management tab is open" << endl;
			
			// Checking if lights are RGB
			cout << "Select if your light bulbs have RGB support" << endl;
			cout << "1)  Yes (type 1)\n"
					"2)  No (type 2)" << endl;
			cin >> rgb_support;
			
			cout << "\nSelect the feature you want to use (type a number 1-6)" << endl;
			cout << "1)  Turn ON lights\n"
					"2)  Turn OFF lights\n"
					"3)  Dim lights\n"
					"4)  Set RGB color\n"
					"5)  Timer\n"
					"6)  Schedule lights" << endl;
			cin >> lights_feature;
			
			// Turning lights ON
			if (lights_feature == 1)
			{
				cout << "\n\nYou have chosen to turn on the lights" << endl;
				cout << "***" << house_room_lights[room_lights - 1] << " have turned ON***" << endl;
			}
			
			// Turning lights OFF
			else if (lights_feature == 2)
			{
				cout << "\n\nYou have chosen to turn off the lights" << endl;
				cout << "***" << house_room_lights[room_lights - 1] << " have turned OFF***" << endl;
			}
			
			// Dimming lights
			else if (lights_feature == 3)
			{
				cout << "\nThe Light Dimmer scale tab is open" << endl;
				cout << "Set the scale to a number between 0-100 (type a number 0-100): " << endl;
				cin >> dim_scale;
				if (dim_scale < 0 || dim_scale > 100)
				{
					cout << "\nError, scale value entered not in the range 0-100" << endl;
					return -1;
				}
				else
				{
					cout << "\n\nDimming lights...." << endl;
					cout << house_room_lights[room_lights - 1] << " have been dimmed to " << dim_scale << "%" << endl;																								
				} 
			}
			
			// Setting RGB color
			else if (lights_feature == 4)
			{
				if (rgb_support == 1)
				{
					cout << "\nThe RGB color menu is open" << endl;
					cout << "Choose the color you want to change the lights to (type a number 1-6)" << endl;
					cout << "1)  Red\n"
							"2)  Green\n"
							"3)  Blue\n"
							"4)  Purple\n"
							"5)  Orange\n"
							"6)  Rainbow effect" << endl;
					cin >> rgb_option;
					// Settings color to red
					if (rgb_option == 1)
					{
						cout << "\n\nSetting the light color to red...." << endl;
						cout << "***" << house_room_lights[room_lights - 1] << " are red***" << endl;
					}
					// Settings color to green
					else if (rgb_option == 2)
					{
						cout << "\n\nSetting the light color to green...." << endl;
						cout << "***" << house_room_lights[room_lights - 1] << " are green***" << endl;
					}
					// Settings color to blue
					else if (rgb_option == 3)
					{
						cout << "\n\nSetting the light color to blue...." << endl;
						cout << "***" << house_room_lights[room_lights - 1] << " are blue***" << endl;
					}
					// Settings color to purple
					else if (rgb_option == 4)
					{
						cout << "\n\nSetting the light color to purple...." << endl;
						cout << "***" << house_room_lights[room_lights - 1] << " are purple***" << endl;
					}
					// Settings color to orange
					else if (rgb_option == 5)
					{
						cout << "\n\nSetting the light color to orange...." << endl;
						cout << "***" << house_room_lights[room_lights - 1] << " are orange***" << endl;
					}
					// Settings color to rainbow effect
					else if (rgb_option == 6)
					{
						cout << "\n\nSetting the light color to a rainbow effect...." << endl;
						cout << "***" << house_room_lights[room_lights - 1] << " have a rainbow effect***" << endl;
					}
					else
					{
						cout << "Error invalid input" << endl;
						return -1;
					}
				}
				// No RGB support error
				else
				{
					cout << "\nCannot set the RGB color, light bulbs do not have RGB support" << endl;
					return -1;	
				}
								
			}
			
			// Setting the timer
			else if (lights_feature == 5)
			{
				cout << "\nThe Timer menu is open" << endl;
				cout << "With this you can set a time limit for how long the lights will stay turned on" << endl;
				
				cout << "\nType in the number of hours: ";			// Getting the hours
				cin >> timer_hours;
				cout << "Type in the number of minutes (0-59): ";	// Getting the minutes
				cin >> timer_minutes;
				cout << "Type in the number of seconds: (0-59): ";  // Getting the seconds
				cin >> timer_seconds;
				
				if (timer_minutes < 0 || timer_minutes > 59)
				{
					cout << "\nError, minutes value not in the range 0-59" << endl;
					return -1;
				}
				else if (timer_seconds < 0 || timer_seconds > 59)
				{
					cout << "\nError, seconds value not in the range 0-59" << endl;
					return -1;
				}
				else
				{
					cout << "\n\nSetting up the lights timer...." << endl;
					cout << "The timer has started" << endl;
					cout << "\n***The " << house_room_lights[room_lights - 1] << " will stay turned on for " << timer_hours << " hours, " << timer_minutes << " minutes, and " << timer_seconds << " seconds***" << endl;
				}
			}
			
			// Scheduling the lights
			else if (lights_feature == 6)
			{
				cout << "\nThe light Scheduler menu is open" << endl;
				cout << "With this you can schedule what time the lights will turn on and turn off in [hh]:[mm] format" << endl;
				
				cout << "\nType in the starting hour (example 08, 10): ";		// Getting the starting hour
				cin >> scheduler_starting_hour;
				cout << "Type in the starting minutes (0-59, example 24): ";	// Getting the starting minutes
				cin >> scheduler_starting_minute;
				cin.ignore();   // used to fix an error  
				cout << "\nAM or PM? (type in \"AM\" or \"PM\"): ";				// Getting the meridiem
				getline(cin, scheduler_starting_meridiem);
				cout << "Start time gathered...." << endl;
				
				cout << "\nType in the ending hour (example 08, 10): ";			// Getting the ending hour
				cin >> scheduler_ending_hour;
				cout << "Type in the ending minutes (0-59, example 04): ";		// Getting the ending minutes
				cin >> scheduler_ending_minute;
				cin.ignore();  // used to fix an error
				cout << "AM or PM? (type in \"AM\" or \"PM\"): ";				// Getting the ending meridiem
				getline(cin, scheduler_ending_meridiem);
				cout << "Stop time gathered...." << endl;
					
				cout << "\n\nSetting up the schedule for the lights...." << endl;
				cout << "The scheduled time is set" << endl;
				cout << "\n***The " << house_room_lights[room_lights - 1] <<  " will turn on at " << scheduler_starting_hour << ":" << scheduler_starting_minute << scheduler_starting_meridiem << " and turn off at " 
					<< scheduler_ending_hour << ":" << scheduler_ending_minute << scheduler_ending_meridiem << "***" << endl;	
			}
			else
			{
				cout << "\nError invalid input" << endl;
				return -1;
			}
			break;
			
		case 3:
			// Managing FRIDGE DEVICE features
			cout << "\nThe Fridge management tab is open" << endl;
			cout << "|Fridge Temperature: 5c|    |Freezer Temperature: -19c|" << endl;
			cout << "\nSelect the feature you want to use (type a number 1-5)" << endl;
			cout << "1)  Change Temperature\n"
					"2)  Change the Mode\n"
					"3)  Enable Power Cool\n"
					"4)  Enable Power Freeze\n"
					"5)  Create Food List" << endl;
			cin >> fridge_feature;
			
			// Changing the temperature
			if (fridge_feature == 1)
			{
				cout << "\nThe Temperature menu is open" << endl;
				cout << "Select if you want to change the fridge temperature or freezer temperature" << endl;
				cout << "1)  Fridge (type 1)\n"
						"2)  Freezer (type 2)" << endl;
				cin >> change_temperature; 
				// Changing fridge temperature
				if (change_temperature == 1)
				{
					cout << "\nThe current fridge temperature is 5c" << endl;
					cout << "Note: The ideal temperature for a fridge is 3c" << endl;
					cout << "\nSet the scale to a number between 0 - 8 (type a number 0-8): " << endl;
					cin >> new_fridge_temperature;
					if (new_fridge_temperature < 0 || new_fridge_temperature > 8)
					{
						cout << "\nError, invalid temperature value entered, not in the range 0-8" << endl;
						return -1;
					}
					else
					{
						cout << "\n\nChanging the temperature...." << endl;
						cout << "**beep**beep**" << endl;
						cout << "\nFridge temperature has been changed to " << new_fridge_temperature << "c" << endl;																								
					} 
				}
				// Changing freezer temperature
				else if (change_temperature == 2)
				{
					cout << "\nThe current freezer temperature is -19c" << endl;
					cout << "Note: The ideal temperature for a freezer is -19c" << endl;
					cout << "\nSet the scale to a number between -16 to -24 (type a number -16 to -24: " << endl;
					cin >> new_freezer_temperature;
					if (new_freezer_temperature > -16 || new_freezer_temperature < -24)
					{
						cout << "\nError, invalid temperature value entered, not in the range -16 to -24" << endl;
						return -1;
					}
					else
					{
						cout << "\n\nChanging the temperature...." << endl;
						cout << "**beep**beep**" << endl;
						cout << "\nFreezer temperature has been changed to " << new_freezer_temperature << "c" << endl;																								
					} 
				}
				else
				{
					cout << "\nError invalid input" << endl;
					return -1;
				}
			}
			
			// Changing the mode
			else if (fridge_feature == 2)
			{
				cout << "\nThe Mode selection menu is open" << endl;
				cout << "Select if you want to change the desired mode for the fridge or freezer" << endl;
				cout << "1)  Fridge (type 1)\n"
						"2)  Freezer (type 2)" << endl;
				cin >> change_mode;
				// Changing the fridge mode
				if (change_mode == 1)
				{
					cout << "\nSelect a mode for the fridge (type 1 or 2)" << endl;
					cout << "1)  Fish/Meat\n"
							"2)  Fridge (default, ideal for fruits, vegetables, and chilled food)" << endl;
					cin >> new_fridge_mode;
					// Changing to Fish/Meat mode
					if (new_fridge_mode == 1)
					{
						cout << "\n\nChanging the fridge mode...." << endl;
						cout << "**beep**beep**" << endl;
						cout << "\nFridge mode has been changed to Fish/Meat to better suit for fish and meat products" << endl;
					}
					// Changing to Default mode
					else if (new_fridge_mode == 2)
					{
						cout << "\n\n*The fridge mode is already set to Default*" << endl;
					}
					else
					{
						cout << "\nError invalid input" << endl;
						return -1;
					}
				}
				// Changing the freezer mode
				else if (change_mode == 2)
				{
					cout << "\nSelect a mode for the freezer (type a number 1-5)" << endl;
					cout << "1)  Freeze (default)\n"
							"2)  Soft Freeze\n"
							"3)  Meat/Fish\n"
							"4)  Fruit/Veggies\n"
							"5)  Beverage\n" << endl;
					cin >> new_freezer_mode;
					// Changing to Default mode
					if (new_freezer_mode == 1)
					{
						cout << "\n\nThe freezer mode is already set to Default" << endl;
					}
					// Changing to Soft Freeze mode
					else if (new_freezer_mode == 2)
					{
						cout << "\n\nChanging the freezer mode...." << endl;
						cout << "**beep**beep**" << endl;
						cout << "\nFreezer mode has been changed to Soft Freeze" << endl;
					}
					// Changing to Meat/Fish mode
					else if (new_freezer_mode == 3)
					{
						cout << "\n\nChanging the freezer mode...." << endl;
						cout << "**beep**beep**" << endl;
						cout << "\nFreezer mode has been changed to Meat/Fish" << endl;
					}
					// Changing to Fruit/Veggies mode
					else if (new_freezer_mode == 4)
					{
						cout << "\n\nChanging the freezer mode...." << endl;
						cout << "**beep**beep**" << endl;
						cout << "\nFreezer mode has been changed to Fruit/Veggies" << endl;
					}
					// Changing to Beverage mode
					else if (new_freezer_mode == 5)
					{
						cout << "\n\nChanging the freezer mode...." << endl;
						cout << "**beep**beep**" << endl;
						cout << "\nFreezer mode has been changed to Beverage" << endl;
					}
					else
					{
						cout << "\nError invalid input" << endl;
						return -1;
					}
				}
				else
				{
					cout << "\nError invalid input" << endl;
					return -1;
				}
			}
			
			// Enabling Power Cool
			else if (fridge_feature == 3)
			{
				cout << "\nPower Cool rapidy lowers the inside temperature to 1c by increasing airflow and working the compressor at a high speed temporarily, reducing the time it takes for your food to reach the desired temperature." << endl;
				cout << "Note: Power Cool increases energy consumption." << endl;
				cout << "\nAre you sure you want to enable Power Cool?" << endl;
				cout << "1)  YES (type 1)\n"
						"2)  NO (type 2)\n" << endl;
				cin >> power_cool_option;
				// Enabling 
				if (power_cool_option == 1)
				{
					cout << "\n\nEnabling Power Cool...." << endl;
					cout << "**beep**beep**" << endl;
					cout << "\nPower Cool has been enabled and will run for around 2 hours and 30 mins" << endl;
				}
				// Not Enabling
				else if (power_cool_option == 2)
				{
					cout << "\n\nPower Cool enabling canceled" << endl;
				}
				else
				{
					cout << "\nError invalid input" << endl;
					return -1;
				}
			}
			
			// Enabling Power Freeze
			else if (fridge_feature == 4)
			{
				cout << "\nPower Freezee rapidly speeds up the ice-making process and increases the ice maker performance. As well as decreasing the time needed to freeze freezer products." << endl;
				cout << "Note: Power Freeze increases energy consumption." << endl;
				cout << "\nAre you sure you want to enable Power Freeze?" << endl;
				cout << "1)  YES (type 1)\n"
						"2)  NO (type 2)\n" << endl;
				cin >> power_freeze_option;
				// Enabling
				if (power_freeze_option == 1)
				{
					cout << "\n\nEnabling Power Freeze...." << endl;
					cout << "**beep**beep**" << endl;
					cout << "\nPower Freeze has been enabled and will run for around 10 hours" << endl;
				}
				// Not Enabling
				else if (power_cool_option == 2)
				{
					cout << "\n\nPower Freeze enabling canceled" << endl;
				}
				else
				{
					cout << "\nError invalid input" << endl;
					return -1;
				}
			}
			
			// Creating a Food List
			else if (fridge_feature == 5)
			{
				cout << "\nThe Food List menu is open" << endl;
				cout << "Using this feature, you can create a list of food products that are in your fridge and freezer to manage and be on top of them" << endl;
				
				do {
					// Selecting which list to add the food product to
					cout << "\n\nSelect if you want to add the product to the fridge or freezer list (type 1 or 2)" << endl;
					cout << "1)  Fridge (type 1)\n"
							"2)  Freezer (type 2)" << endl;
					cin >> list_option;
					cin.ignore(); 	// Used to fix an error
					
					// Getting food product from user				
					cout << "\n(Enter in all lower case and enter \"stop\" to stop adding products)" << endl;
					cout << "Enter the name of the food product you want to add to the list: ";
					getline(cin, food_list_input);
					
					// Stops adding more food products
					if (food_list_input == "stop")
					{
						stop_list == 1;
						break;
					}
					// Adding food product to the fridge list
					else if (list_option == 1)
					{
						cout << "\n\nAdding product..." << endl;
						cout << "*Product added*" << endl;
						cout << "\nAdd next product:" << endl;
						fridge_food_list = fridge_food_list + " " + food_list_input + ",";  
					}
					// Adding food product to the freezer list
					else if (list_option == 2)
					{
						cout << "\nAdding product..." << endl;
						cout << "*Product added*" << endl;
						cout << "\nAdd next product:" << endl;
						freezer_food_list = freezer_food_list +  " " + food_list_input + ",";
					}
				}
				// loop stops when user enters 'stop' to food product prompt
				while (stop_list != 1);
				cout << "\nYou have finished adding products to the lists" << endl;
				cout << "\n\nItems in fridge: " << fridge_food_list << endl;
				cout << "Items in freezer: " << freezer_food_list << endl;
			}
			else
			{
				cout << "\nError invalid input" << endl;
				return -1;
			}
			break;
		
		case 4:
			// ADDING NEW DEVICE
			cout << "\n\nThis feature will be added in the future" << endl;
			break;
			
		default:
			// Outputting error message for invalid values
			cout << "\nError invalid input" << endl;                               
			return -1;
			break;
	}
	
	return 0;
}
