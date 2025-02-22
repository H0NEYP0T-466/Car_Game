#include <iostream>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <queue>
#include <fstream>
#include <algorithm>

#define SCREEN_WIDTH 90
#define SCREEN_HEIGHT 26
#define WIN_WIDTH 70

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

int enemyY[3];
int enemyX[3];
int enemyFlag[3];

char car[4][4] = { ' ','|','|',' ',
                   '|','|','|','|',
                   ' ','|','|',' ',
                   '|','|','|','|' };

int carPos = WIN_WIDTH / 2;
int score = 0;

void gotoxy(int x, int y) {
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPosition(console, CursorPosition);
}

void drawBorder() {
    for (int i = 0; i < SCREEN_HEIGHT; i++) {
        for (int j = 0; j < 17; j++) {
            gotoxy(0 + j, i); cout << "|";
            gotoxy(WIN_WIDTH - j, i); cout << "|";
        }
    }

    for (int i = 0; i < SCREEN_HEIGHT; i++) {
        gotoxy(SCREEN_WIDTH, i); cout << "|";
    }
}

void updateScore() {
    gotoxy(WIN_WIDTH + 7, 5); cout << "Score: " << score << endl;
}

void genEnemy(int ind) {
    enemyX[ind] = 17 + rand() % (33);
}

void drawCar() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            gotoxy(j + carPos, i + 22); cout << car[i][j];
        }
    }
}

void drawEnemy(int ind) {
    if (enemyFlag[ind] == true) {
        gotoxy(enemyX[ind], enemyY[ind]);   cout << "****";
        gotoxy(enemyX[ind], enemyY[ind] + 1); cout << " ** ";
        gotoxy(enemyX[ind], enemyY[ind] + 2); cout << "****";
        gotoxy(enemyX[ind], enemyY[ind] + 3); cout << " ** ";
    }
}

int collision() {
    for (int i = 0; i < 3; i++) { // Check all enemies
        if (enemyFlag[i] == 1) { // Only consider active enemies
            // Check if the enemy is within the vertical range of the car
            if (enemyY[i] + 3 >= 22 && enemyY[i] <= 25) { 
                // Check if the car and enemy overlap horizontally
                if (carPos + 3 >= enemyX[i] && carPos <= enemyX[i] + 3) {
                    return 1; 
                }
            }
        }
    }
    return 0; 
}


void saveScoreToFile(int score) {
    ofstream outFile("D:\\Desktop\\car_game\\scores.txt", ios::app);
    if (outFile.is_open()) {
        outFile << score << endl;
        outFile.close();
    } else {
        cout << "Unable to open scores file!" << endl;
    }
}

void gameover() {
    saveScoreToFile(score);
    system("cls");
    cout << endl;
    cout << "\t\t--------------------------" << endl;
    cout << "\t\t-------- Game Over -------" << endl;
    cout << "\t\t--------------------------" << endl << endl;
}

void rankings() {
    priority_queue<int> pq;
    ifstream inFile("D:\\Desktop\\car_game\\scores.txt");
    vector<int> scores;

    if (inFile.is_open()) {
        int tempScore;
        while (inFile >> tempScore) {
            pq.push(tempScore);
        }
        inFile.close();

        cout << "\nTop 10 Scores:\n";
        int rank = 1;
        while (!pq.empty() && rank <= 10) {
            cout << rank << ". " << pq.top() << endl;
            pq.pop();
            rank++;
        }
    } else {
        cout << "No scores available or unable to open scores file!" << endl;
    }
}

void eraseCar() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            gotoxy(j + carPos, i + 22); cout << " ";
        }
    }
}

void eraseEnemy(int ind) {
    if (enemyFlag[ind] == true) {
        gotoxy(enemyX[ind], enemyY[ind]); cout << "    ";
        gotoxy(enemyX[ind], enemyY[ind] + 1); cout << "    ";
        gotoxy(enemyX[ind], enemyY[ind] + 2); cout << "    ";
        gotoxy(enemyX[ind], enemyY[ind] + 3); cout << "    ";
    }
}

void resetEnemy(int ind) {
    eraseEnemy(ind);
    enemyY[ind] = 1;
    genEnemy(ind);
}

void play() {
    carPos = -1 + WIN_WIDTH / 2;
    score = 0;
    enemyFlag[0] = 1;
    enemyFlag[1] = 0;
    enemyY[0] = enemyY[1] = 1;

    system("cls");
    drawBorder();
    updateScore();
    genEnemy(0);
    genEnemy(1);

    gotoxy(WIN_WIDTH + 7, 2); cout << "Car Game";
    gotoxy(WIN_WIDTH + 6, 4); cout << "----------";
    gotoxy(WIN_WIDTH + 6, 6); cout << "----------";
    gotoxy(WIN_WIDTH + 7, 12); cout << "Control ";
    gotoxy(WIN_WIDTH + 7, 13); cout << "-------- ";
    gotoxy(WIN_WIDTH + 2, 14); cout << " A Key - Left";
    gotoxy(WIN_WIDTH + 2, 15); cout << " D Key - Right";

    gotoxy(18, 5); cout << "Press any key to start";
    getch();
    gotoxy(18, 5); cout << "                      ";

    while (true) {
        if (kbhit()) {
            char ch = getch();
            if (ch == 'a' || ch == 'A') {
                if (carPos > 18)
                    carPos -= 4;
            }
            if (ch == 'd' || ch == 'D') {
                if (carPos < 50)
                    carPos += 4;
            }
            if (ch == 27) {
                break;
            }
        }

        drawCar();
        drawEnemy(0);
        drawEnemy(1);

        if (collision() == 1) {
            gameover();
            return;
        }

        Sleep(50);
        eraseCar();
        eraseEnemy(0);
        eraseEnemy(1);

        if (enemyY[0] == 10)
            if (enemyFlag[1] == 0)
                enemyFlag[1] = 1;

        if (enemyFlag[0] == 1)
            enemyY[0] += 1;

        if (enemyFlag[1] == 1)
            enemyY[1] += 1;

        if (enemyY[0] > SCREEN_HEIGHT - 4) {
            resetEnemy(0);
            score++;
            updateScore();
        }
        if (enemyY[1] > SCREEN_HEIGHT - 4) {
            resetEnemy(1);
            score++;
            updateScore();
        }
    }
}

void setcursor(bool visible, DWORD size) {
    if (size == 0)
        size = 20;
    CONSOLE_CURSOR_INFO lpCursor;
    lpCursor.bVisible = visible;
    lpCursor.dwSize = size;
    SetConsoleCursorInfo(console, &lpCursor);
}

int main() {
    setcursor(0, 0);
    srand((unsigned)time(NULL));

    system("cls");
    int choice;
label:
    cout<<"\t\t\t\t\t------------------\n";
    cout<<"\t\t\t\t\t|     CAR_GAME    |\n";
    cout<<"\t\t\t\t\t------------------\n";
    cout << endl;
    cout << "1. Start Game\n";
    cout << "2. Instructions\n";
    cout << "3. Rankings\n";
    cout << "4. Quit\n";
    cout << "Select option:\n";

    cin >> choice;
    if (choice == 1) 
	{
		play();
		goto label;		
	}
    else if (choice == 2) {
        cout << "'a' for left \n'd' for right\n";
        system("pause");
        system("cls");
        goto label;
    }
    else if (choice == 3) {
        rankings();
        system("pause");
        system("cls");
        goto label;
    }
    else if (choice == 4) exit(0);

    return 0;
}
