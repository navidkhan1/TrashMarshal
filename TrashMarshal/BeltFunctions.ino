void beltON()
{
  belt.write(0);
  beltStatus = true;
}

void beltOFF()
{
  belt.write(110);
  beltStatus = false;
}
