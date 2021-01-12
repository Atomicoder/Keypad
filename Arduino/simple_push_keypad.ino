#include <Keyboard.h>

#include <SimpleRotary.h>

#include <Button2.h>

bool fineRor1 = false;
bool fineRor2 = false;

int mode = 1;

int led = 10;

int rot1a = 3;
int rot1b = 2;

int rot2a = 1;
int rot2b = 0;

Button2 butt1 = Button2(8);
Button2 butt2 = Button2(16);
Button2 butt3 = Button2(21);
Button2 butt4 = Button2(20);
Button2 butt5 = Button2(5);
Button2 butt6 = Button2(14);
Button2 butt7 = Button2(7);
Button2 butt8 = Button2(18);
Button2 butt9 = Button2(19);
Button2 butt10 = Button2(9);
Button2 rotButt1 = Button2(6);
Button2 rotButt2 = Button2(15);

SimpleRotary rotary1(rot1a, rot1b, 6);
SimpleRotary rotary2(rot2a, rot2b, 15);

void setup()
{

  // digitalWrite(led, HIGH);
  // delay(500);
  // digitalWrite(led, LOW);
  // delay(500);
  // digitalWrite(led, HIGH);
  // delay(500);
  // digitalWrite(led, LOW);

  //Serial.begin(9600);

  butt1.setClickHandler(handler1);
  butt1.setDoubleClickHandler(handler1);
  butt1.setTripleClickHandler(handler1);
  butt1.setLongClickHandler(handler1);

  butt2.setClickHandler(handler2);
  butt2.setDoubleClickHandler(handler2);
  butt2.setTripleClickHandler(handler2);
  butt2.setLongClickHandler(handler2);

  butt3.setClickHandler(handler3);
  butt3.setDoubleClickHandler(handler3);
  butt3.setTripleClickHandler(handler3);
  butt3.setLongClickHandler(handler3);

  butt4.setClickHandler(handler4);
  butt4.setDoubleClickHandler(handler4);
  butt4.setTripleClickHandler(handler4);
  butt4.setLongClickHandler(handler4);

  butt5.setClickHandler(handler5);
  butt5.setDoubleClickHandler(handler5);
  butt5.setTripleClickHandler(handler5);
  butt5.setLongClickHandler(handler5);

  butt6.setClickHandler(handler6);
  butt6.setDoubleClickHandler(handler6);
  butt6.setTripleClickHandler(handler6);
  butt6.setLongClickHandler(handler6);

  butt7.setClickHandler(handler7);
  butt7.setDoubleClickHandler(handler7);
  butt7.setTripleClickHandler(handler7);
  butt7.setLongClickHandler(handler7);

  butt8.setClickHandler(handler8);
  butt8.setDoubleClickHandler(handler8);
  butt8.setTripleClickHandler(handler8);
  butt8.setLongClickHandler(handler8);

  butt9.setClickHandler(handler9);
  butt9.setDoubleClickHandler(handler9);
  butt9.setTripleClickHandler(handler9);
  butt9.setLongClickHandler(handler9);

  butt10.setClickHandler(handler10);
  butt10.setDoubleClickHandler(handler10);
  butt10.setTripleClickHandler(handler10);
  butt10.setLongClickHandler(handler10);

  rotButt1.setClickHandler(handler11);
  rotButt2.setClickHandler(handler12);

  Keyboard.begin();
}

void loop()
{
  //ROTATORY ENCODERS HERE
  byte i;
  byte j;

  i = rotary1.rotate();

  if (i == 1)
  {
    if (fineRor1 == true)
    {

      // Keyboard.press(KEY_LEFT_CTRL);
      // Keyboard.press(KEY_LEFT_ALT);
      // Keyboard.press(KEY_RIGHT_ARROW);
      // delay(70);
      // Keyboard.releaseAll();
    }
    else
    {
      // Keyboard.press(KEY_LEFT_CTRL);
      // Keyboard.press(KEY_RIGHT_ARROW);
      // delay(70);
      // Keyboard.releaseAll();
    }
  }

  if (i == 2)
  {
    if (fineRor1 == true)
    {

      // Keyboard.press(KEY_LEFT_CTRL);
      // Keyboard.press(KEY_LEFT_ALT);
      // Keyboard.press(KEY_LEFT_ARROW);
      // delay(70);
      // Keyboard.releaseAll();
    }
    else
    {
      // Keyboard.press(KEY_LEFT_CTRL);
      // Keyboard.press(KEY_LEFT_ARROW);
      // delay(70);
      // Keyboard.releaseAll();
    }
  }

  j = rotary2.rotate();

  if (j == 1)
  {
    if (fineRor2 == true)
    {
      //-------------
    }
    else
    {
      //-------------
    }
  }

  if (j == 2)
  {
    if (fineRor2 == true)
    {
      //-------------
    }
    else
    {
      //-------------
    }
  }

  // BUTTONS HERE

  butt1.loop();
  butt2.loop();
  butt3.loop();
  butt4.loop();
  butt5.loop();
  butt6.loop();
  butt7.loop();
  butt8.loop();
  butt9.loop();
  butt10.loop();
  rotButt1.loop();
  rotButt2.loop();
}

void handler1(Button2 &btn)
{
  switch (btn.getClickType())
  {
  case SINGLE_CLICK:
    mode = 1;
    break;
  case DOUBLE_CLICK:
    mode = 2;
    break;
  case TRIPLE_CLICK:
    mode = 3;
    break;
  case LONG_CLICK:
    mode = 4;
    break;
  }
}

void handler2(Button2 &btn)
{
  switch (btn.getClickType())
  {
  case SINGLE_CLICK:
    singleTwo();
    break;
  case DOUBLE_CLICK:
    doubleTwo();
    break;
  case TRIPLE_CLICK:
    tripleTwo();
    break;
  case LONG_CLICK:
    longTwo();
    break;
  }
}

void handler3(Button2 &btn)
{
  switch (btn.getClickType())
  {
  case SINGLE_CLICK:
    singleThree();
    break;
  case DOUBLE_CLICK:
    doubleThree();
    break;
  case TRIPLE_CLICK:
    tripleThree();
    break;
  case LONG_CLICK:
    longThree();
    break;
  }
}

void handler4(Button2 &btn)
{
  switch (btn.getClickType())
  {
  case SINGLE_CLICK:
    singleFour();
    break;
  case DOUBLE_CLICK:
    doubleFour();
    break;
  case TRIPLE_CLICK:
    tripleFour();
    break;
  case LONG_CLICK:
    longFour();
    break;
  }
}

void handler5(Button2 &btn)
{
  switch (btn.getClickType())
  {
  case SINGLE_CLICK:
    singleFive();
    break;
  case DOUBLE_CLICK:
    doubleFive();
    break;
  case TRIPLE_CLICK:
    tripleFive();
    break;
  case LONG_CLICK:
    longFive();
    break;
  }
}

void handler6(Button2 &btn)
{
  switch (btn.getClickType())
  {
  case SINGLE_CLICK:
    singleSix();
    break;
  case DOUBLE_CLICK:
    doubleSix();
    break;
  case TRIPLE_CLICK:
    tripleSix();
    break;
  case LONG_CLICK:
    longSix();
    break;
  }
}

void handler7(Button2 &btn)
{
  switch (btn.getClickType())
  {
  case SINGLE_CLICK:
    singleSeven();
    break;
  case DOUBLE_CLICK:
    doubleSeven();
    break;
  case TRIPLE_CLICK:
    tripleSeven();
    break;
  case LONG_CLICK:
    longSeven();
    break;
  }
}

void handler8(Button2 &btn)
{
  switch (btn.getClickType())
  {
  case SINGLE_CLICK:
    singleEight();
    break;
  case DOUBLE_CLICK:
    doubleEight();
    break;
  case TRIPLE_CLICK:
    tripleEight();
    break;
  case LONG_CLICK:
    longEight();
    break;
  }
}

void handler9(Button2 &btn)
{
  switch (btn.getClickType())
  {
  case SINGLE_CLICK:
    singleNine();
    break;
  case DOUBLE_CLICK:
    doubleNine();
    break;
  case TRIPLE_CLICK:
    tripleNine();
    break;
  case LONG_CLICK:
    longNine();
    break;
  }
}

void handler10(Button2 &btn)
{
  switch (btn.getClickType())
  {
  case SINGLE_CLICK:
    singleTen();
    break;
  case DOUBLE_CLICK:
    doubleTen();
    break;
  case TRIPLE_CLICK:
    tripleTen();
    break;
  case LONG_CLICK:
    longTen();
    break;
  }
}

void handler11(Button2 &btn)
{
  switch (btn.getClickType())
  {
  case SINGLE_CLICK:
    //-------------
    fineRor1 = !fineRor1;
    break;
  case DOUBLE_CLICK:
    //-------------
    break;
  }
}

void handler12(Button2 &btn)
{
  switch (btn.getClickType())
  {
  case SINGLE_CLICK:
    //-------------
    fineRor2 = !fineRor2;
    break;
  case DOUBLE_CLICK:
    //-------------
    break;
  }
}

// Single Click

void singleTwo()
{
  switch (mode)
  {
  case 1:
    //-------------
    break;
  case 2:
    //-------------
    break;
  }
}
//Button 3

void singleThree()
{
  switch (mode)
  {
  case 1:

    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(225);
    delay(70);
    Keyboard.releaseAll();

    break;
  case 2:
    //-------------
    break;
  }
}

void doubleThree()
{
  switch (mode)
  {
  case 1:

    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(226);
    delay(70);
    Keyboard.releaseAll();

    break;
  case 2:
    //-------------
    break;
  }
}

void tripleThree()
{
  switch (mode)
  {
  case 1:
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(227);
    delay(70);
    Keyboard.releaseAll();
    break;
  case 2:
    //-------------
    break;
  }
}

void longThree()
{
  switch (mode)
  {
  case 1:
    //-------------
    break;
  case 2:
    //-------------
    break;
  }
}

//Button 4
void singleFour()
{
  switch (mode)
  {
  case 1:
    //-------------
    break;
  case 2:
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press('t');
    delay(70);
    Keyboard.releaseAll();
    break;
  }
}

void doubleFour()
{
  switch (mode)
  {
  case 1:
    //-------------
    break;
  case 2:
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press('y');
    delay(70);
    Keyboard.releaseAll();
    break;
  }
}

void tripleFour()
{
  switch (mode)
  {
  case 1:
    //-------------
    break;
  case 2:
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('y');
    delay(70);
    Keyboard.releaseAll();
    break;
  }
}

void longFour()
{
  switch (mode)
  {
  case 1:
    //-------------
    break;
  case 2:
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press('y');
    delay(70);
    Keyboard.releaseAll();
    break;
  }
}

//Button 5
void singleFive()
{
  switch (mode)
  {
  case 1:
    //-------------
    break;
  case 2:
    //-------------
    break;
  }
}

void doubleFive()
{
  switch (mode)
  {
  case 1:
    //-------------
    break;
  case 2:
    //-------------
    break;
  }
}

void tripleFive()
{
  switch (mode)
  {
  case 1:
    //-------------
    break;
  case 2:
    //-------------
    break;
  }
}

void longFive()
{
  switch (mode)
  {
  case 1:
    //-------------
    break;
  case 2:
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('[');
    delay(70);
    Keyboard.releaseAll();
    break;
  }
}

//Button 6
void singleSix()
{
  switch (mode)
  {
  case 1:
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(228);
    delay(70);
    Keyboard.releaseAll();
    break;
  case 2:
    //-------------
    break;
  }
}

void doubleSix()
{
  switch (mode)
  {
  case 1:
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(229);
    delay(70);
    Keyboard.releaseAll();
    break;
  case 2:
    //-------------
    break;
  }
}

void tripleSix()
{
  switch (mode)
  {
  case 1:
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(230);
    delay(70);
    Keyboard.releaseAll();
    break;
  case 2:
    //-------------
    break;
  }
}

void longSix()
{
  switch (mode)
  {
  case 1:
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(231);
    delay(70);
    Keyboard.releaseAll();
    break;
  case 2:
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(']');
    delay(70);
    Keyboard.releaseAll();
    break;
  }
}

//Button 7

void singleSeven()
{
  switch (mode)
  {
  case 1:
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(232);
    delay(70);
    Keyboard.releaseAll();
    break;
  case 2:
    //-------------
    break;
  }
}

void doubleSeven()
{
  switch (mode)
  {
  case 1:
    //-------------
    break;
  case 2:
    //-------------
    break;
  }
}

void tripleSeven()
{
  switch (mode)
  {
  case 1:
    //-------------
    break;
  case 2:
    //-------------
    break;
  }
}

void longSeven()
{
  switch (mode)
  {
  case 1:
    //-------------
    break;
  case 2:
    //-------------
    break;
  }
}

void singleEight()
{
  switch (mode)
  {
  case 1:
    //-------------
    break;
  case 2:
    //-------------
    break;
  }
}

void singleNine()
{
  switch (mode)
  {
  case 1:
    //-------------
    break;
  case 2:
    //-------------
    break;
  }
}

//Button 10
void singleTen()
{
  switch (mode)
  {
  case 1:
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(225);
    delay(70);
    Keyboard.releaseAll();
    break;
  case 2:
    //-------------
    break;
  }
}

void doubleTen()
{
  switch (mode)
  {
  case 1:
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(226);
    delay(70);
    Keyboard.releaseAll();
    break;
  case 2:
    //-------------
    break;
  }
}

void tripleTen()
{
  switch (mode)
  {
  case 1:
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(227);
    delay(70);
    Keyboard.releaseAll();
    break;
  case 2:
    //-------------
    break;
  }
}

void longTen()
{
  switch (mode)
  {
  case 1:
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(229);
    delay(70);
    Keyboard.releaseAll();
    break;
  case 2:
    //-------------
    break;
  }
}

// Double Click

void doubleTwo()
{
  switch (mode)
  {
  case 1:
    //-------------
    break;
  case 2:
    //-------------
    break;
  }
}

void doubleEight()
{
  switch (mode)
  {
  case 1:
    //-------------
    break;
  case 2:
    //-------------
    break;
  }
}

void doubleNine()
{
  switch (mode)
  {
  case 1:
    //-------------
    break;
  case 2:
    //-------------
    break;
  }
}

// triple Click

void tripleTwo()
{
  switch (mode)
  {
  case 1:
    //-------------
    break;
  case 2:
    //-------------
    break;
  }
}

void tripleEight()
{
  switch (mode)
  {
  case 1:
    //-------------
    break;
  case 2:
    //-------------
    break;
  }
}

void tripleNine()
{
  switch (mode)
  {
  case 1:
    //-------------
    break;
  case 2:
    //-------------
    break;
  }
}

// Long Click

void longTwo()
{
  switch (mode)
  {
  case 1:
    //-------------
    break;
  case 2:
    //-------------
    break;
  }
}

void longEight()
{
  switch (mode)
  {
  case 1:
    //-------------
    break;
  case 2:
    //-------------
    break;
  }
}

void longNine()
{
  switch (mode)
  {
  case 1:
    //-------------
    break;
  case 2:
    //-------------
    break;
  }
}
