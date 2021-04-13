//
// Created by Davy on 2-3-2021.
// LCD class. You can use the methods in this class to initialise the lcd,
// write to the lcd, update the lcd, or clear the lcd.
// So everything that has to do with controlling the LCD.
// INDIVIDUAL PROJECT BY DAVY RAITT
//

#ifndef MENU_LCD_H
#define MENU_LCD_H

struct LcdQueueItem
{
    uint8_t line;
    uint8_t pos;
    char *text;

};

void writeToLine(char *text, int lineNumber);
void writeToLineAndCol(char *text, int lineNumber, int column);
void initLCD();
void scrollLeft();
void scrollRight();
void setMenu(MenuItem menuItems[], int size, char descrLineEN[],  char descrLineNL[]);
void getSelectedOption();
void clearLine(int lineNumber);
void lcdUploadChar(uint8_t ICON[], int number);
void setLangToEN();
void setLangToNL();


#endif //end