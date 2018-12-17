void arm3push()
{
  for(arm3pos=45 ; arm3pos <160 ; arm3pos++)
  {
    arm3.write(arm3pos);
    delay(10); 
  }

  for(int arm3pos=160 ; arm3pos >45 ; arm3pos--)
  {
    arm3.write(arm3pos);
    delay(3); 
  }
}
