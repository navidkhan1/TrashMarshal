void arm1push()
{
  for(arm1pos=45 ; arm1pos <160 ; arm1pos++)
  {
    arm1.write(arm1pos);
    delay(0); 
  }

  for(int arm1pos=160 ; arm1pos >45 ; arm1pos--)
  {
    arm1.write(arm1pos);
    delay(15); 
  }
}
