#include <LiquidCrystal.h>

// Define LCD pin mapping
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // Set up the number of columns and rows on the LCD
  lcd.begin(16, 2);
  lcd.clear();  // Clear the LCD screen
}

void loop() {
  // Set the cursor to the second row, first column
  lcd.setCursor(0, 1);

  // Print the scrolling message on the LCD
  lcd.print("Hey Crypto_grapper_");

  // Scroll the display to the left
  for (int i = 0; i < 15; ++i) {
    lcd.scrollDisplayLeft();
    delay(250);  // Adjust the delay to control the scrolling speed
  }
}
