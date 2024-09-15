#include "Input.h"
#include "Output.h"

//This is a test code to test the Input and Output classes

int main()
{
	int x,y;

	//Create Input and Output objects to test
	Output * pOut = new Output();
	Input * pIn = pOut->CreateInput();

	//Starting the test
	pOut->PrintMessage("This demo is to test classes of phase 1, Click anywhere to start the test");
	pIn->GetPointClicked(x,y);	//Wait for any click


	///////////////////////////////////////////////////////////////////////////////////
	// TEST 0:	
	//			Create The FULL Tool bar of Design Mode, the grid area and the status bar	
	//			This has already been done through the constrcutor of class Output
	///////////////////////////////////////////////////////////////////////////////////

	pOut->PrintMessage("TEST1: Drawing Tool bar, Grid and Status bar, Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click


	///////////////////////////////////////////////////////////////////////////////////
	// TEST 2:	
	//			Testing the Output Class
	///////////////////////////////////////////////////////////////////////////////////

	pOut->PrintMessage("TEST2: Testing the [ Output ] class, Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	/// 2.1- Drawing Cells with Cards Test ///
	/// ===================================
	pOut->PrintMessage("2.1- Drawing (Cells with CARDS) Test,  Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	CellPosition card_1 (0, 0);  // assume card number is : 1
	CellPosition card_2 (0, 10); // assume card number is : 2
	CellPosition card_3 (8, 0);  // assume card number is : 3
	CellPosition card_4 (8, 10); // assume card number is : 4
	CellPosition card_10 (4, 5); // assume card number is : 10


	pOut->DrawCell(card_1, 1);
	pOut->DrawCell(card_2, 2);
	pOut->DrawCell(card_3, 3);
	pOut->DrawCell(card_4, 4);
	pOut->DrawCell(card_10, 10);///TODO: Call Function DrawCell of Class Ouput Multiple Times
	///       to draw cells in cell locations of: card_1, card_2, ..., card_10 declared above
	///       with cardNum 1, 2, 3, 4 and 10 respectively



	CellPosition player_15 (2, 18);
	CellPosition player_99 (2, 5);
	pOut->PrintMessage("FINISHED - Drawing (Cells with CARDS) Test,  Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	/// 2.2- Drawing Players Test ///
	/// ==============================
	pOut->PrintMessage("2.2- Drawing (Players) Test,  Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	CellPosition player_1 (8, 0);


	///TODO: Call Function DrawPlayer of Class Ouput Multiple Times
	///       to draw the following players:
	pOut->DrawPlayer(player_1, 0, UI.PlayerColors[0]);///       playerNum (0) with color (PlayerColors[0] defined in UI object) in cell position (player_1 declared above) 
	pOut->DrawPlayer(player_1, 1, UI.PlayerColors[1]);///       playerNum (1) with color (PlayerColors[1] defined in UI object) in cell position (player_1 declared above) 
	pOut->DrawPlayer(player_1, 2, UI.PlayerColors[2]);///       playerNum (2) with color (PlayerColors[2] defined in UI object) in cell position (player_1 declared above) 
	pOut->DrawPlayer(player_1, 3, UI.PlayerColors[3]);///       playerNum (3) with color (PlayerColors[3] defined in UI object) in cell position (player_1 declared above) 
	pOut->DrawPlayer(player_15, 0, UI.PlayerColors[0]);///       playerNum (0) with color (PlayerColors[0] defined in UI object) in cell position (player_15 declared above) --> Invalid
	pOut->DrawPlayer(player_99, 1, UI.PlayerColors[1]);///       playerNum (1) with color (PlayerColors[1] defined in UI object) in cell position (player_99 declared above) 
	pOut->DrawPlayer(player_1, 5, UI.PlayerColors[1]);///       playerNum (5) with color (PlayerColors[1] defined in UI object) in cell position (player_99 declared above) --> Invalid
	pOut->DrawPlayer(player_99, -1, UI.PlayerColors[1]);///       playerNum (-1) with color (PlayerColors[1] defined in UI object) in cell position (player_99 declared above) --> Invalid
	

	pOut->PrintMessage("FINISHED - Drawing (Players) Test,  Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	/// 2.3- Drawing Ladders ///
	/// ====================
	pOut->PrintMessage("2.3- Drawing (Ladders) Test,  Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	CellPosition start_89 (0, 0);
	CellPosition end_34 (5, 0);

	CellPosition start_22 (7, 10);
	CellPosition end_99 (0, 10);

	///TODO: Call Function DrawLadder of Class Ouput Multiple Times
	///       to draw the following ladders:
	pOut->DrawLadder(start_89, end_34);///       a ladder from start_89 to end_34 declared above --> INVALID because toCell is below
	pOut->DrawLadder(start_22, end_99);///       a ladder from start_22 to end_99 declared above --> valid
	pOut->DrawLadder(start_89, end_99);///       a ladder from start_89 to end_99 declared above --> INVALID because NOT vertical
	pOut->DrawLadder(end_34, start_89);///       a ladder from end_34 to start_89 declared above --> valid
	


	pOut->PrintMessage("FINISHED - Drawing (Ladders) Test,  Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	/// 2.4- Drawing Snakes ///
	/// ====================
	pOut->PrintMessage("2.4- Drawing (Snakes) Test,  Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	CellPosition start_24 (6, 1);
	CellPosition end_2 (8, 1);

	CellPosition start_98 (0, 9);
	CellPosition end_32 (6, 9);

	///TODO: Call Function DrawSnake of Class Ouput Multiple Times
	///       to draw the following snakes:
	pOut->DrawSnake(start_24, end_2);///       a snake from start_24 to end_2 declared above
	pOut->DrawSnake(start_98, end_32);///       a snake from start_98 to end_32 declared above
	pOut->DrawSnake(start_98, end_2);///       a snake from start_98 to end_2 declared above (invalid)
	pOut->DrawSnake(end_2, start_24);///       a snake from end_2 to start_24 declared above (invalid)
	


	pOut->PrintMessage("FINISHED - Drawing (Snakes) Test,  Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	///////////////////////////////////////////////////////////////////////////////////
	// TEST 3: 
	//			Input Class - Part 1
	///////////////////////////////////////////////////////////////////////////////////

	pOut->PrintMessage("TEST3: Now Time to test class [ Input ], Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	/// 3.1- Getting Integer ///
	/// ===========================
	pOut->PrintMessage("3.1- (GetInteger) Test, Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

								
	
	///TODO: Add code here to:
	int num = pIn->GetInteger(pOut);// 1- Call GetInteger Function and receive its returned integer
	pOut->PrintMessage("you entered: " + to_string(num));// 2- Print it in the status bar in this format:   You Entered: 116 (assuming the entered number is 116
	pIn->GetPointClicked(x, y);// 3- Call GetPointClicked() function


	pOut->PrintMessage("FINISHED - (GetInteger) Test, Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	/// 3.2- Getting Cell Clicked ///
	/// =========================
	pOut->PrintMessage("3.2- (GetCellClicked) Test, Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click


	///TODO: Add code here to 
	for (int i = 0;i < 5; i++) {
		CellPosition testcell = pIn->GetCellClicked();// 1- Call function GetCellClicked
		pOut->PrintMessage(to_string(testcell.VCell()) + " " + to_string(testcell.HCell()));
	}// 2- Print on the status bar the vCell and hCell of the clicked cell
	// 3- Repeat Step 1 and 2 five times


	pOut->PrintMessage("FINISHED - (GetCellClicked) Test, Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click


	/// 3.3- Reading a String ///
	/// =====================
	pOut->PrintMessage("3.3- (GetSrting) Test, Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click


	///TODO: Add code here to 
	string teststr = pIn->GetSrting(pOut);// 1- Read a string from the user on the status bar
	pOut->PrintMessage("You Entered: " + teststr);// 2- After reading the string clear the status bar
	pIn->GetPointClicked(x, y);// 3- print on the status bar "You Entered" then print the string
	// NOTE: GetString() is already implemented. It is just required from you to call it



	pOut->PrintMessage("FINISHED - (GetSrting) Test, Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	///////////////////////////////////////////////////////////////////////////////////
	// TEST 4:	
	//			Test the functions of CellPosition Class
	///////////////////////////////////////////////////////////////////////////////////

	pOut->PrintMessage("TEST4: Testing the [ CellPosition ] class, Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	pOut->PrintMessage("4.1- (Setters with Validation) Test, Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	CellPosition cellpos_1(0, 0);

	CellPosition testcell_2;///TODO:
	for (int i = 0; i < 5;i++)
	{
		pOut->PrintMessage("enter a VCell"); int vcell=pIn->GetInteger(pOut);
		testcell_2.SetVCell(vcell);
		pOut->PrintMessage("now the vcell: " + to_string(testcell_2.VCell())); pIn->GetPointClicked(x, y);
		pOut->PrintMessage("now enter HCell"); int hcell = pIn->GetInteger(pOut);
		testcell_2.SetHCell(hcell);
		pOut->PrintMessage("now the hcell: " + to_string(testcell_2.HCell())); pIn->GetPointClicked(x, y);
	}// 1- Ask user to enter an integer and read it using GetInteger()
	// 2- Call SetVCell() of cellpos_1 with that integer
	// 3- Print GetVCell() of cellpos_1 as follows: "Now the vCell = 5" (assuming the entered integer is 5)
	// 4- Call GetPointClicked()
	// 5- Repeat the above steps FIVE TIMES
	// 6- Repeat all the above steps to test SetHCell() function instead with the needed modifications
	pIn->GetPointClicked(x,y);
	pOut->PrintMessage("FINISHED - (Setters with Validation) Test, Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	pOut->PrintMessage("4.2- (GetCellNumFromPosition) Test, Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	/// TODO:
	for (int i = 0; i < 5; i++) {
		pOut->PrintMessage("enter two entegers: "); int in1 = pIn->GetInteger(pOut); int in2 = pIn->GetInteger(pOut);
		CellPosition testcell_3(in1, in2);
		int in3 = testcell_3.GetCellNum();
		pOut->PrintMessage("cellnum is: " + to_string(in3));
		pIn->GetPointClicked(x, y);
	}// 1- Read from user two integers representing vCell and hCell
	// 2- Creates a CellPosition object of them
	// 3- Use the function GetCellNum() to get the corresponding Cell Number (it used function : GetCellNumFromPosition() inside it)
	// 4- Print the Cell Number on the status bar
	// 5- Repeat the above steps Five TIMES

	pOut->PrintMessage("FINISHED - (GetCellNumFromPosition) Test, Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	pOut->PrintMessage("4.3- (GetCellPositionFromNum) Test, Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	/// TODO:
	for (int i = 0;i < 5;i++) {
		int in4 = pIn->GetInteger(pOut);// 1- Read from user one integer representing cellNum
		CellPosition celltest_4(in4);// 2- Creates a CellPosition object of that integer using that constructor: CellPosition (int cellNum);
		// -- > it uses the function : GetCellPositionFromNum() inside it
		pOut->PrintMessage(to_string(celltest_4.VCell()) +" "+  to_string(celltest_4.HCell()));
	}// 4- Print the Cell vCell and hCell on the status bar
	// 5- Repeat the above steps Five TIMES

	pOut->PrintMessage("FINISHED - (GetCellPositionFromNum) Test, Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	///////////////////////////////////////////////////////////////////////////////////
	// TEST 5: 
	//			Input Class - Part2: Check for the user action
	///////////////////////////////////////////////////////////////////////////////////
	pOut->PrintMessage("TEST5: Testing Input ability to detect User Action, click anywhere");

	ActionType ActType;

	///TODO:  
	//You must add a case for EACH action (both Create-Grid mode and Game mode actions)
	//Add cases for the missing actions below
	do
	{
		ActType = pIn->GetUserAction();

		switch (ActType)
		{
		case ADD_LADDER:
			pOut->PrintMessage("Action: ADD_LADDER , Click anywhere");
			break;

		case ADD_SNAKE:
			pOut->PrintMessage("Action: ADD_SNAKE , Click anywhere");
			break;

		case ADD_CARD:
			pOut->PrintMessage("Action: ADD_CARD , Click anywhere");
			break;

		case EXIT:				
			break;

		case TO_PLAY_MODE:

			pOut->PrintMessage("Action: TO_PLAY_MODE , Click anywhere");
			pOut->CreatePlayModeToolBar();

			pOut->PrintPlayersInfo("P0(100, 0), P1(100, 0), P2(100, 0), P3(100, 0) | Curr = 0 ");
			///TODO:  Call Function (PrintPlayersInfo) of Class Output with a string similar to 
			//the one given in the screenshot of project document 
			break;


		case CUT_CARD:
			pOut->PrintMessage("Action: CUT_CARD , Click anywhere");
			break;///TODO:  ADD Cases similarly for ALL the remaining actions of DESIGN Mode

		case COPY_CARD:
			pOut->PrintMessage("Action: COPY_CARD , Click anywhere");
			break;

		case PASTE_CARD:
			pOut->PrintMessage("Action: PASTE_CARD , Click anywhere");
			break;

		case DELETE_GAME_OBJECT:
			pOut->PrintMessage("Action: DELETE_GAME_OBJECT , Click anywhere");
			break;

		case SAVE_GRID:
			pOut->PrintMessage("Action: SAVE_GRID , Click anywhere");
			break;

		case OPEN_GRID:
			pOut->PrintMessage("Action: OPEN_GRID , Click anywhere");
			break;

		case ROLL_DICE:
			pOut->PrintMessage("Action: ROLL_DICE , Click anywhere");
			break;

		case TO_DESIGN_MODE:
			pOut->PrintMessage("Action: TO_DESIGN_MODE , Click anywhere");
			pOut->CreateDesignModeToolBar();
			break;

		case EXIT_PLAY:	///TODO:  ADD Cases similarly for ALL the remaining actions of PLAY Mode
			break;

		case INPUT_DICE_VALUE:
			pOut->PrintMessage("Action: INPUT_DICE_VALUE , Click anywhere");
			break;

		case NEW_GAME:
			pOut->PrintMessage("Action: NEW_GAME , Click anywhere");
			break;
		}
	}while(ActType != EXIT && ActType != EXIT_PLAY);


	/// Exiting
	pOut->PrintMessage("Action: EXIT, test is finished, click anywhere to exit");
	pIn->GetPointClicked(x,y);


	delete pIn;
	delete pOut;	
	return 0;
}


